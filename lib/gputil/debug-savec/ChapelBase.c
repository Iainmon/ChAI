#line 1 "<internal>"
/* <internal>:0 */
static void chpl__auto_destroy_RootClass(RootClass this24,
                                         int64_t _ln,
                                         int32_t _fn) {
  return;
}

#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:24 */
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__init_ChapelBase(int64_t _ln,
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int32_t _fn) {
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (chpl__init_ChapelBase_p) /* ZLINE: 24 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _exit_chpl__init_ChapelBase;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  printModuleInit("%*s\n", "ChapelBase", INT64(10), _ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  refIndentLevel = &moduleInitLevel;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(refIndentLevel) += INT64(1);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__init_ChapelBase_p = UINT8(true);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__init_Reflection(_ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__init_ChapelTaskData(_ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__init_String(_ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  rootLocaleInitialized = UINT8(false);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_unstableInternalSymbolForTesting = INT64(0);
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_statementLevelSymbol(chpl_unstableInternalSymbolForTesting);
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_arrayInitMethod = ArrayInit_heuristicInit;
#line 3326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_moduleDeinitFuns = ((chpl_ModuleDeinit)(nil));
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(refIndentLevel) -= INT64(1);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _exit_chpl__init_ChapelBase:;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:113 */
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void init5(RootClass this24) {
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_RootClass;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:127 */
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_(chpl_bool * a,
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           chpl_bool b) {
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:131 */
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_2(int32_t * a,
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int32_t b) {
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:132 */
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_3(int64_t * a,
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int64_t b) {
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_4(uint8_t * a,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            uint8_t b) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:137 */
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_5(uint64_t * a,
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            uint64_t b) {
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:148 */
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_6(ArrayInit * a,
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            ArrayInit b) {
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_37(IllegalArgumentError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((IllegalArgumentError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_28(Error * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((Error)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_14(DecodeError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((DecodeError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_8(BlockingIoError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((BlockingIoError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_7(ChildProcessError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((ChildProcessError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_38(BrokenPipeError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((BrokenPipeError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_36(ConnectionAbortedError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((ConnectionAbortedError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_32(ConnectionRefusedError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((ConnectionRefusedError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_29(ConnectionResetError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((ConnectionResetError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_25(FileExistsError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((FileExistsError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_21(FileNotFoundError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((FileNotFoundError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_20(InterruptedError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((InterruptedError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_18(IsADirectoryError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((IsADirectoryError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_17(NotADirectoryError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((NotADirectoryError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_15(PermissionError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((PermissionError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_34(ProcessLookupError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((ProcessLookupError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_10(TimeoutError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((TimeoutError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_11(IoError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((IoError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_24(EofError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((EofError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_30(UnexpectedEofError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((UnexpectedEofError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_33(BadFormatError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((BadFormatError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_35(SystemError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((SystemError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_9(_serializeWrapper_defaultDeserializer * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((_serializeWrapper_defaultDeserializer)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_16(_serializeWrapper_defaultDeserializer * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _serializeWrapper_defaultDeserializer b) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_22(_serializeWrapper_defaultSerializer * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((_serializeWrapper_defaultSerializer)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_23(_serializeWrapper_defaultSerializer * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _serializeWrapper_defaultSerializer b) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_12(CodepointSplitError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((CodepointSplitError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_19(Error * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             Error b) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_13(TaskErrors * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((TaskErrors)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_26(chpl___RemoteVarContainer_R * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((chpl___RemoteVarContainer_R)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_27(chpl___RemoteVarContainer_R * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             chpl___RemoteVarContainer_R b) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_31(NilClassError * a,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((NilClassError)(nil));
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_47(Error * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             NilThrownError b,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((Error)(b));
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_44(BaseLocale * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             DummyLocale b,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((BaseLocale)(b));
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_41(BaseLocale * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             BaseLocale b) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_51(ReferenceCount * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             ReferenceCount b) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_46(ReferenceCount * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((ReferenceCount)(nil));
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_50(BaseArr * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             BaseArr b) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_53(Error * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             Error b) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_48(Error * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((Error)(nil));
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_43(BaseLocale * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             RootLocale b,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((BaseLocale)(b));
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_42(BaseLocale * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             AbstractLocaleModel b,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((BaseLocale)(b));
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_39(chpl_ModuleDeinit * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             chpl_ModuleDeinit b) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_52(chpl_ModuleDeinit * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _nilType b,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = ((chpl_ModuleDeinit)(nil));
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_45(QioPluginChannel * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             QioPluginChannel b) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_49(BaseDom * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             BaseDom b) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_40(BaseDist * a,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             BaseDist b) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:177 */
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_(chpl_bool a,
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                chpl_bool b) {
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == b);
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:181 */
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_2(int32_t a,
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 int32_t b) {
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == b);
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_3(int64_t a,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 int64_t b) {
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == b);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:184 */
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_4(uint8_t a,
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 uint8_t b) {
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == b);
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:186 */
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_5(uint32_t a,
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 uint32_t b) {
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == b);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:187 */
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_6(uint64_t a,
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 uint64_t b) {
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == b);
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_7(RootClass a,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 RootClass b) {
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == b);
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:198 */
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_8(RootClass a,
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 _nilType b) {
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == nil);
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:200 */
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_10(decodePolicy a,
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  decodePolicy b) {
#line 201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == b);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:200 */
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_12(ArrayInit a,
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  ArrayInit b) {
#line 201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == b);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:200 */
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_9(_iokind a,
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 _iokind b) {
#line 201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == b);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:200 */
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_11(chpl_ddataResizePolicy a,
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  chpl_ddataResizePolicy b) {
#line 201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == b);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:214 */
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_(int32_t a,
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int32_t b) {
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a != b);
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:215 */
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_2(int64_t a,
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int64_t b) {
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a != b);
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:217 */
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_3(uint8_t a,
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              uint8_t b) {
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a != b);
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:220 */
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_4(uint64_t a,
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              uint64_t b) {
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a != b);
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 230 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:230 */
#line 230 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_5(RootClass a,
#line 230 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              RootClass b) {
#line 230 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 230 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a != b);
#line 230 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 230 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:231 */
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_6(RootClass a,
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              _nilType b) {
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a != nil);
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:302 */
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___LESS__ASSIGN_(int64_t a,
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                      int64_t b) {
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a <= b);
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:307 */
#line 307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___LESS__ASSIGN_2(uint64_t a,
#line 307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       uint64_t b) {
#line 307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a <= b);
#line 307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:323 */
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___GREATER__ASSIGN_(int64_t a,
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                         int64_t b) {
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a >= b);
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:328 */
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___GREATER__ASSIGN_2(uint64_t a,
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                          uint64_t b) {
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a >= b);
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:346 */
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___LESS_3(int64_t a,
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               int64_t b) {
#line 349 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T;
#line 349 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = (a < b);
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:346 */
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___LESS_(int8_t a,
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              int64_t b) {
#line 349 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T;
#line 349 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = (a < b);
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:346 */
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___LESS_4(uint64_t a,
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               uint64_t b) {
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = (a < b);
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:346 */
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___LESS_2(int32_t a,
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               int64_t b) {
#line 349 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T;
#line 349 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = (a < b);
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:392 */
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___GREATER_(int64_t a,
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 int64_t b) {
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a > b);
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:396 */
#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___GREATER_2(uint32_t a,
#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  uint32_t b) {
#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a > b);
#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:397 */
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___GREATER_3(uint64_t a,
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  uint64_t b) {
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a > b);
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:492 */
#line 492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int16_t chpl___PLUS_(int16_t a,
#line 492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int16_t b) {
#line 492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int16_t call_tmp8;
#line 492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a + b);
#line 492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:493 */
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int32_t chpl___PLUS_2(int32_t a,
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t b) {
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t call_tmp8;
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a + b);
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:494 */
#line 494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl___PLUS_3(int64_t a,
#line 494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t b) {
#line 494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp8;
#line 494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a + b);
#line 494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 499 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:499 */
#line 499 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t chpl___PLUS_4(uint64_t a,
#line 499 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              uint64_t b) {
#line 499 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 499 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a + b);
#line 499 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 499 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:531 */
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int16_t chpl___HYPHEN_(int16_t a,
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              int16_t b) {
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int16_t call_tmp8;
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a - b);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 532 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:532 */
#line 532 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int32_t chpl___HYPHEN_2(int32_t a,
#line 532 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               int32_t b) {
#line 532 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t call_tmp8;
#line 532 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a - b);
#line 532 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 532 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 533 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:533 */
#line 533 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl___HYPHEN_3(int64_t a,
#line 533 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               int64_t b) {
#line 533 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp8;
#line 533 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a - b);
#line 533 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 533 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 538 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:538 */
#line 538 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t chpl___HYPHEN_4(uint64_t a,
#line 538 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                uint64_t b) {
#line 538 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 538 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a - b);
#line 538 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 538 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:629 */
#line 629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int32_t chpl___ASTERISK_(int32_t a,
#line 629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int32_t b) {
#line 629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t call_tmp8;
#line 629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a * b);
#line 629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 630 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:630 */
#line 630 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl___ASTERISK_2(int64_t a,
#line 630 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 int64_t b) {
#line 630 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp8;
#line 630 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a * b);
#line 630 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 630 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:635 */
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t chpl___ASTERISK_3(uint64_t a,
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  uint64_t b) {
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a * b);
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 638 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:638 */
#line 638 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _real64 chpl___ASTERISK_4(_real64 a,
#line 638 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 _real64 b) {
#line 638 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _real64 call_tmp8;
#line 638 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a * b);
#line 638 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 638 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:682 */
#line 682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl___SLASH_(int64_t a,
#line 682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t b,
#line 682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 686 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp9;
#line 684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_3(b, INT64(0));
#line 684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 684 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 685 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    halt(&_str_literal_375, _ln, _fn);
#line 685 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 686 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = (a / b);
#line 682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 707 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:707 */
#line 707 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t chpl___SLASH_2(uint64_t a,
#line 707 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               uint64_t b,
#line 707 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               int64_t _ln,
#line 707 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               int32_t _fn) {
#line 709 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 711 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 709 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_18(b, INT64(0), _ln, _fn);
#line 709 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 709 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 709 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 710 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    halt(&_str_literal_375, _ln, _fn);
#line 710 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 711 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = (a / b);
#line 707 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 707 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:887 */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static _iokind chpl___COLON_2(uint8_t from,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              Error * error_out,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _ln,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int32_t _fn) {
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _iokind ret;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp8;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp10;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp11;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___EQUALS_16(from, ((int8_t)(INT64(0))), _ln, _fn);
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp8) /* ZLINE: 887 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ret = ((_iokind)(from));
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__COLON_;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 887 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp9 = chpl___EQUALS_16(from, ((int8_t)(INT64(1))), _ln, _fn);
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (call_tmp9) /* ZLINE: 887 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      ret = ((_iokind)(from));
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end__COLON_;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    } else /* ZLINE: 887 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp10 = chpl___EQUALS_16(from, ((int8_t)(INT64(2))), _ln, _fn);
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      if (call_tmp10) /* ZLINE: 887 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      {
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        ret = ((_iokind)(from));
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        goto _end__COLON_;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      } else /* ZLINE: 887 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      {
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        call_tmp11 = chpl___EQUALS_16(from, ((int8_t)(INT64(3))), _ln, _fn);
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        if (call_tmp11) /* ZLINE: 887 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        {
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
          ret = ((_iokind)(from));
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
          goto _end__COLON_;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        }
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      }
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_enum_cast_error(from, &_str_literal_3032, &error, _ln, _fn);
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 887 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 887 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__COLON_;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = _iokind_dynamic;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__COLON_:;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1050 */
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EXCLAMATION_(chpl_bool a) {
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (! a);
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1077 */
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint8_t chpl___AMPERSAND_(uint8_t a,
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 uint8_t b) {
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint8_t call_tmp8;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a & b);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1210 */
#line 1210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void bitshiftChecks(uint64_t a,
#line 1210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t b,
#line 1210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 1210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 1213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp9;
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp10;
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp11;
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp12;
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp13;
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp14;
#line 1215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp15;
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp16;
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string msg;
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp17;
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp18;
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp19;
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp20;
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp21;
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp22;
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp23;
#line 1219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp24;
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp25;
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp26;
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string msg2;
#line 1213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___LESS_3(b, INT64(0));
#line 1213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1213 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp9 = chpl___COLON_49(a, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp10 = chpl___PLUS_9(&_str_literal_385, &call_tmp9, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp11 = chpl___PLUS_9(&call_tmp10, &_str_literal_386, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp12 = chpl___COLON_48(b, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp13 = chpl___PLUS_9(&call_tmp11, &call_tmp12, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp14 = chpl___PLUS_9(&call_tmp13, &_str_literal_387, _ln, _fn);
#line 1215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp15 = chpl___COLON_48(b, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp16 = chpl___PLUS_9(&call_tmp14, &call_tmp15, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    msg = chpl___PLUS_9(&call_tmp16, &_str_literal_388, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__autoDestroy23(&call_tmp15, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__autoDestroy23(&call_tmp14, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__autoDestroy23(&call_tmp13, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 1216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    boundsCheckHalt(&msg, _ln, _fn);
#line 1216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__autoDestroy23(&msg, _ln, _fn);
#line 1216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 1213 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp17 = chpl___GREATER__ASSIGN_4(b);
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp17) /* ZLINE: 1217 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp18 = chpl___COLON_49(a, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp19 = chpl___PLUS_9(&_str_literal_385, &call_tmp18, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp20 = chpl___PLUS_9(&call_tmp19, &_str_literal_386, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp21 = chpl___COLON_48(b, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp22 = chpl___PLUS_9(&call_tmp20, &call_tmp21, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp23 = chpl___PLUS_9(&call_tmp22, &_str_literal_387, _ln, _fn);
#line 1219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp24 = chpl___COLON_48(b, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp25 = chpl___PLUS_9(&call_tmp23, &call_tmp24, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp26 = chpl___PLUS_9(&call_tmp25, &_str_literal_389, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      msg2 = chpl___PLUS_9(&call_tmp26, &_str_literal_3200, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl__autoDestroy23(&call_tmp26, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl__autoDestroy23(&call_tmp25, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl__autoDestroy23(&call_tmp24, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl__autoDestroy23(&call_tmp23, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl__autoDestroy23(&call_tmp22, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl__autoDestroy23(&call_tmp21, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl__autoDestroy23(&call_tmp20, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl__autoDestroy23(&call_tmp19, _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl__autoDestroy23(&call_tmp18, _ln, _fn);
#line 1221 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      boundsCheckHalt(&msg2, _ln, _fn);
#line 1221 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl__autoDestroy23(&msg2, _ln, _fn);
#line 1221 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1221 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1244 */
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t chpl___LESS__LESS_(uint64_t a,
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int64_t b,
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int64_t _ln,
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int32_t _fn) {
#line 1246 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  bitshiftChecks(a, b, _ln, _fn);
#line 1246 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a << b);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil8(IllegalArgumentError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil30(Error x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil13(BaseLocale x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil15(AbstractRootLocale x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil10(BlockingIoError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil17(ChildProcessError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil(BrokenPipeError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil32(ConnectionAbortedError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil2(ConnectionRefusedError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil29(ConnectionResetError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil26(FileExistsError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil24(FileNotFoundError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil22(InterruptedError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil20(IsADirectoryError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil18(NotADirectoryError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil14(PermissionError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil4(ProcessLookupError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil6(TimeoutError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil21(IoError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil27(EofError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil34(UnexpectedEofError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil31(BadFormatError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil11(SystemError x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil25(ReferenceCount x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil9(BaseArr x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil19(BaseArrOverRectangularDom_1_int64_t_one x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil23(RootLocale x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil7(AbstractLocaleModel x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil28(chpl___RemoteVarContainer_R x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil33(Remote_R x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil5(chpl_ModuleDeinit x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil16(QioPluginFile x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil3(QioPluginChannel x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1281 */
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void checkNotNil12(BaseDom x2,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1286 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1300 */
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static QioPluginChannel postfix_EXCLAMATION_8(QioPluginChannel x2,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int64_t _ln,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int32_t _fn) {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  QioPluginChannel call_tmp8 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  QioPluginChannel call_tmp9 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_borrowed37(x2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil3(call_tmp8, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_nonnil16(x2);
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1300 */
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ReferenceCount postfix_EXCLAMATION_2(ReferenceCount x2,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                            int64_t _ln,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                            int32_t _fn) {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ReferenceCount call_tmp8 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ReferenceCount call_tmp9 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_borrowed35(x2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil25(call_tmp8, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_nonnil29(x2);
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1300 */
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseArr postfix_EXCLAMATION_9(BaseArr x2,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                     int64_t _ln,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                     int32_t _fn) {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  BaseArr call_tmp8 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  BaseArr call_tmp9 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_borrowed26(x2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil9(call_tmp8, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_nonnil27(x2);
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1300 */
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseArrOverRectangularDom_1_int64_t_one postfix_EXCLAMATION_7(BaseArrOverRectangularDom_1_int64_t_one x2,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                                     int64_t _ln,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                                     int32_t _fn) {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  BaseArrOverRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  BaseArrOverRectangularDom_1_int64_t_one call_tmp9 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_borrowed34(x2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil19(call_tmp8, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_nonnil13(x2);
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1300 */
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static AbstractLocaleModel postfix_EXCLAMATION_(AbstractLocaleModel x2,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                int64_t _ln,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                int32_t _fn) {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  AbstractLocaleModel call_tmp8 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  AbstractLocaleModel call_tmp9 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_borrowed42(x2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil7(call_tmp8, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_nonnil37(x2);
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1300 */
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl___RemoteVarContainer_R postfix_EXCLAMATION_4(chpl___RemoteVarContainer_R x2,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                         int64_t _ln,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                         int32_t _fn) {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___RemoteVarContainer_R call_tmp8 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___RemoteVarContainer_R call_tmp9 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_borrowed10(x2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil28(call_tmp8, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_nonnil5(x2);
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1300 */
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_ModuleDeinit postfix_EXCLAMATION_5(chpl_ModuleDeinit x2,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                               int64_t _ln,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                               int32_t _fn) {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_ModuleDeinit call_tmp8 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_ModuleDeinit call_tmp9 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_borrowed4(x2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil5(call_tmp8, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_nonnil30(x2);
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1300 */
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static QioPluginFile postfix_EXCLAMATION_11(QioPluginFile x2,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                            int64_t _ln,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                            int32_t _fn) {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  QioPluginFile call_tmp8 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  QioPluginFile call_tmp9 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_borrowed38(x2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil16(call_tmp8, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_nonnil6(x2);
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1300 */
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseLocale postfix_EXCLAMATION_10(BaseLocale x2,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                         int64_t _ln,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                         int32_t _fn) {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  BaseLocale call_tmp8 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  BaseLocale call_tmp9 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_borrowed39(x2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil13(call_tmp8, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_nonnil11(x2);
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1300 */
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error postfix_EXCLAMATION_3(Error x2,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int64_t _ln,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int32_t _fn) {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error call_tmp8 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error call_tmp9 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_borrowed3(x2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil30(call_tmp8, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_nonnil14(x2);
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1300 */
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseDom postfix_EXCLAMATION_6(BaseDom x2,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                     int64_t _ln,
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                     int32_t _fn) {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  BaseDom call_tmp8 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  BaseDom call_tmp9 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_borrowed36(x2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil12(call_tmp8, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_nonnil12(x2);
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static NotADirectoryError postfix_EXCLAMATION_24(NotADirectoryError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                 int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                 int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  NotADirectoryError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil18(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil8(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IllegalArgumentError postfix_EXCLAMATION_35(IllegalArgumentError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                   int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                   int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  IllegalArgumentError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil8(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil4(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BlockingIoError postfix_EXCLAMATION_12(BlockingIoError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  BlockingIoError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil10(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil2(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ChildProcessError postfix_EXCLAMATION_36(ChildProcessError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ChildProcessError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil17(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil32(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BrokenPipeError postfix_EXCLAMATION_23(BrokenPipeError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  BrokenPipeError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil28(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionAbortedError postfix_EXCLAMATION_13(ConnectionAbortedError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                     int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                     int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ConnectionAbortedError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil32(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil19(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionRefusedError postfix_EXCLAMATION_33(ConnectionRefusedError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                     int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                     int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ConnectionRefusedError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil2(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil38(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionResetError postfix_EXCLAMATION_32(ConnectionResetError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                   int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                   int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ConnectionResetError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil29(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil17(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static FileExistsError postfix_EXCLAMATION_30(FileExistsError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  FileExistsError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil26(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil26(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static FileNotFoundError postfix_EXCLAMATION_29(FileNotFoundError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  FileNotFoundError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil24(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil31(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static InterruptedError postfix_EXCLAMATION_26(InterruptedError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                               int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                               int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  InterruptedError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil22(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil34(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IsADirectoryError postfix_EXCLAMATION_25(IsADirectoryError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  IsADirectoryError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil20(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil22(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error postfix_EXCLAMATION_18(Error x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                    int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                    int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil30(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil24(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static PermissionError postfix_EXCLAMATION_22(PermissionError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  PermissionError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil14(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil21(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ProcessLookupError postfix_EXCLAMATION_21(ProcessLookupError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                 int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                 int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ProcessLookupError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil4(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil3(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static TimeoutError postfix_EXCLAMATION_20(TimeoutError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                           int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                           int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  TimeoutError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil6(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil33(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IoError postfix_EXCLAMATION_19(IoError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                      int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                      int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  IoError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil21(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil35(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static EofError postfix_EXCLAMATION_17(EofError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  EofError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil27(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil36(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static UnexpectedEofError postfix_EXCLAMATION_16(UnexpectedEofError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                 int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                 int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  UnexpectedEofError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil34(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil7(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BadFormatError postfix_EXCLAMATION_15(BadFormatError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  BadFormatError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil31(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil25(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static SystemError postfix_EXCLAMATION_14(SystemError x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                          int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                          int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  SystemError call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil11(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil20(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static RootLocale postfix_EXCLAMATION_28(RootLocale x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                         int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                         int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  RootLocale call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil23(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl___RemoteVarContainer_R postfix_EXCLAMATION_31(chpl___RemoteVarContainer_R x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                          int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                          int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___RemoteVarContainer_R call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil28(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil18(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Remote_R postfix_EXCLAMATION_34(Remote_R x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Remote_R call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil33(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil15(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1305 */
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static AbstractRootLocale postfix_EXCLAMATION_27(AbstractRootLocale x2,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                 int64_t _ln,
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                 int32_t _fn) {
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  AbstractRootLocale call_tmp8 = NULL;
#line 1306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  checkNotNil15(x2, _ln, _fn);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_nonnil10(x2);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1322 */
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl_statementLevelSymbol(int64_t a) {
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1368 */
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool _cond_test4(IllegalArgumentError x2,
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(x2)), nil);
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1368 */
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool _cond_test7(syserr x2) {
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl_cond_test_method(x2);
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1368 */
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool _cond_test5(BaseArr x2,
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(x2)), nil);
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1368 */
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool _cond_test9(BaseArrOverRectangularDom_1_int64_t_one x2,
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(x2)), nil);
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1368 */
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool _cond_test8(_owned_Error2 * x2) {
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_14(x2, nil);
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1368 */
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool _cond_test6(Error x2,
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(x2)), nil);
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1368 */
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool _cond_test2(TaskErrors x2,
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(x2)), nil);
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1368 */
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool _cond_test(uint8_t x2,
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int64_t _ln,
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int32_t _fn) {
#line 1380 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1380 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_7(x2, ((int8_t)(INT64(0))), _ln, _fn);
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1368 */
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool _cond_test3(chpl_ModuleDeinit x2,
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(x2)), nil);
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1463 */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl__enumToOrder(ArrayInit e,
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 int64_t _ln,
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 int32_t _fn) {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t ret;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp9;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp10;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp11;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_12(e, ArrayInit_heuristicInit);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ret = INT64(0);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end_chpl__enumToOrder;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp9 = chpl___EQUALS_12(e, ArrayInit_noInit);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp9) /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      ret = INT64(1);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      goto _end_chpl__enumToOrder;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    } else /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp10 = chpl___EQUALS_12(e, ArrayInit_serialInit);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      if (call_tmp10) /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        ret = INT64(2);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        goto _end_chpl__enumToOrder;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      } else /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        call_tmp11 = chpl___EQUALS_12(e, ArrayInit_parallelInit);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        if (call_tmp11) /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          ret = INT64(3);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          goto _end_chpl__enumToOrder;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        } else /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp12 = chpl___EQUALS_12(e, ArrayInit_gpuInit);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          if (call_tmp12) /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
            ret = INT64(4);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
            goto _end_chpl__enumToOrder;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          } else /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
            halt(&_str_literal_2845, _ln, _fn);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          }
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        }
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      }
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _end_chpl__enumToOrder:;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1463 */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static string chpl___COLON_3(ArrayInit from,
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string ret;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp9;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp10;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp11;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_12(from, ArrayInit_heuristicInit);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ret = chpl__initCopy6(&_str_literal_2880, UINT8(false), _ln, _fn);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end__COLON_;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl___EQUALS_12(from, ArrayInit_noInit);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp9) /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ret = chpl__initCopy6(&_str_literal_2881, UINT8(false), _ln, _fn);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end__COLON_;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = chpl___EQUALS_12(from, ArrayInit_serialInit);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp10) /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ret = chpl__initCopy6(&_str_literal_2882, UINT8(false), _ln, _fn);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end__COLON_;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = chpl___EQUALS_12(from, ArrayInit_parallelInit);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp11) /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ret = chpl__initCopy6(&_str_literal_2883, UINT8(false), _ln, _fn);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end__COLON_;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp12 = chpl___EQUALS_12(from, ArrayInit_gpuInit);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp12) /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ret = chpl__initCopy6(&_str_literal_2884, UINT8(false), _ln, _fn);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end__COLON_;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _end__COLON_:;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1482 */
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ArrayInit chpl_getArrayInitMethod(void) {
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ArrayInit ret;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = ArrayInit_heuristicInit;
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1490 */
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl_shouldDoGpuInit(void) {
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return UINT8(false);
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1500 */
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ArrayInit init_elts_method3(int64_t s,
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int64_t _ln,
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int32_t _fn) {
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ArrayInit ret;
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ArrayInit call_tmp8;
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ArrayInit initMethod;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp9;
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp10;
#line 1509 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp11;
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 1521 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t T;
#line 1522 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp13;
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp14;
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp15;
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp16;
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl_getArrayInitMethod();
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  initMethod = call_tmp8;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl___EQUALS_3(s, INT64(0));
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp9) /* ZLINE: 1503 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1506 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl___ASSIGN_6(&initMethod, ArrayInit_noInit);
#line 1506 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 1503 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1506 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp10 = chpl_shouldDoGpuInit();
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp10) /* ZLINE: 1507 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1508 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl___ASSIGN_6(&initMethod, ArrayInit_gpuInit);
#line 1508 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    } else /* ZLINE: 1507 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1508 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1509 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp11 = chpl___EXCLAMATION_(rootLocaleInitialized);
#line 1509 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      if (call_tmp11) /* ZLINE: 1509 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1509 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1513 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        chpl___ASSIGN_6(&initMethod, ArrayInit_serialInit);
#line 1513 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      } else /* ZLINE: 1509 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1513 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        call_tmp12 = chpl___EQUALS_12(call_tmp8, ArrayInit_heuristicInit);
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        if (call_tmp12) /* ZLINE: 1514 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        {
#line 1522 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp13 = c_sizeof7();
#line 1521 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          T = safeCast4(call_tmp13, _ln, _fn);
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp14 = safeCast3(s, _ln, _fn);
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp15 = chpl___ASTERISK_2(call_tmp14, T);
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp16 = chpl___GREATER_(call_tmp15, INT64(2097152));
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          if (call_tmp16) /* ZLINE: 1527 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          {
#line 1528 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
            chpl___ASSIGN_6(&initMethod, ArrayInit_parallelInit);
#line 1528 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          } else /* ZLINE: 1529 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1528 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          {
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
            chpl___ASSIGN_6(&initMethod, ArrayInit_serialInit);
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = initMethod;
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1500 */
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ArrayInit init_elts_method(int64_t s,
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int64_t _ln,
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int32_t _fn) {
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ArrayInit ret;
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ArrayInit call_tmp8;
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ArrayInit initMethod;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp9;
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp10;
#line 1509 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp11;
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp13;
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp14;
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp15;
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl_getArrayInitMethod();
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  initMethod = call_tmp8;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl___EQUALS_3(s, INT64(0));
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp9) /* ZLINE: 1503 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1506 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl___ASSIGN_6(&initMethod, ArrayInit_noInit);
#line 1506 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 1503 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1506 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp10 = chpl_shouldDoGpuInit();
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp10) /* ZLINE: 1507 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1508 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl___ASSIGN_6(&initMethod, ArrayInit_gpuInit);
#line 1508 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    } else /* ZLINE: 1507 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1508 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1509 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp11 = chpl___EXCLAMATION_(rootLocaleInitialized);
#line 1509 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      if (call_tmp11) /* ZLINE: 1509 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1509 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1513 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        chpl___ASSIGN_6(&initMethod, ArrayInit_serialInit);
#line 1513 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      } else /* ZLINE: 1509 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1513 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        call_tmp12 = chpl___EQUALS_12(call_tmp8, ArrayInit_heuristicInit);
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        if (call_tmp12) /* ZLINE: 1514 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        {
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp13 = safeCast3(s, _ln, _fn);
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp14 = chpl___ASTERISK_2(call_tmp13, INT64(8));
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp15 = chpl___GREATER_(call_tmp14, INT64(2097152));
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          if (call_tmp15) /* ZLINE: 1527 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          {
#line 1528 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
            chpl___ASSIGN_6(&initMethod, ArrayInit_parallelInit);
#line 1528 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          } else /* ZLINE: 1529 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1528 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          {
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
            chpl___ASSIGN_6(&initMethod, ArrayInit_serialInit);
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = initMethod;
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1500 */
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ArrayInit init_elts_method2(int64_t s,
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int64_t _ln,
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int32_t _fn) {
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ArrayInit ret;
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ArrayInit call_tmp8;
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ArrayInit initMethod;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp9;
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp10;
#line 1509 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp11;
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp13;
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp14;
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp15;
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl_getArrayInitMethod();
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  initMethod = call_tmp8;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl___EQUALS_3(s, INT64(0));
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp9) /* ZLINE: 1503 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1506 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl___ASSIGN_6(&initMethod, ArrayInit_noInit);
#line 1506 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 1503 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1506 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp10 = chpl_shouldDoGpuInit();
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp10) /* ZLINE: 1507 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1508 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl___ASSIGN_6(&initMethod, ArrayInit_gpuInit);
#line 1508 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    } else /* ZLINE: 1507 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1508 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1509 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp11 = chpl___EXCLAMATION_(rootLocaleInitialized);
#line 1509 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      if (call_tmp11) /* ZLINE: 1509 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1509 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1513 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        chpl___ASSIGN_6(&initMethod, ArrayInit_serialInit);
#line 1513 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      } else /* ZLINE: 1509 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1513 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        call_tmp12 = chpl___EQUALS_12(call_tmp8, ArrayInit_heuristicInit);
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        if (call_tmp12) /* ZLINE: 1514 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        {
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp13 = safeCast3(s, _ln, _fn);
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp14 = chpl___ASTERISK_2(call_tmp13, INT64(8));
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp15 = chpl___GREATER_(call_tmp14, INT64(2097152));
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          if (call_tmp15) /* ZLINE: 1527 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          {
#line 1528 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
            chpl___ASSIGN_6(&initMethod, ArrayInit_parallelInit);
#line 1528 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          } else /* ZLINE: 1529 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1528 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          {
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
            chpl___ASSIGN_6(&initMethod, ArrayInit_serialInit);
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = initMethod;
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 1500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1537 */
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void init_elts(_ddata_int64_t x2,
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                      int64_t s,
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                      int64_t lo,
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                      int64_t _ln,
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                      int32_t _fn) {
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ArrayInit call_tmp8;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp9;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp10;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ic_chpl_direct_range_iter3 _iterator = NULL;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp11;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ir_chpl_direct_range_iter3 call_tmp12;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ir_chpl_direct_range_iter3 ret_tmp;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator2 = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp13;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp2;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t low3;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp14;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ic_chpl_direct_range_iter3 _iterator3 = NULL;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp15;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ir_chpl_direct_range_iter3 call_tmp16;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ir_chpl_direct_range_iter3 ret_tmp3;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_int64_t taskInd_x = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator4 = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp17;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp4;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t low5;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i2;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first2;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last2;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low6;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high3;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp18;
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  range_int64_t_both_one call_tmp19;
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp20;
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_int64_t x3 = NULL;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp21;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t len;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t numChunks;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one tmpIter;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_low_one call_tmp22;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t numTasks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_these_range_int64_t_both_one _iterator5 = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this24;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i3;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp23;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this25;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp24;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp25;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this26;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp26;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp27;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this27;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _class_localscoforall_fn2 _args_forcoforall_fn = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  raw_c_void_ptr _args_vforcoforall_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _args_sizecoforall_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  Error error = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__class_localscoforall_fn2_object chpl_macro_tmp_1;
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = init_elts_method(s, _ln, _fn);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl___EQUALS_12(call_tmp8, ArrayInit_noInit);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp9) /* ZLINE: 1549 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end_init_elts;
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 1548 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp10 = chpl___EQUALS_12(call_tmp8, ArrayInit_serialInit);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp10) /* ZLINE: 1552 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp11 = chpl___HYPHEN_6(s);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl_direct_range_iter3(lo, call_tmp11, &ret_tmp);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp12 = ret_tmp;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      _iterator = _getIterator9(&call_tmp12, _ln, _fn);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      low3 = (_iterator)->F0_low;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_direct_param_stride_range_iter(low3, (_iterator)->F1_high, &ret_tmp2);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp13 = ret_tmp2;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator2 = _getIterator13(&call_tmp13, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      i = INT64(0);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator2)->F0_low);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator2)->F1_high);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      low4 = (_iterator2)->F0_low;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_checkIfRangeIterWillOverflow(low4, (_iterator2)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      high2 = (_iterator2)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      for (chpl_check_nil(_iterator2, _ln, _fn),i = (_iterator2)->F0_low; ((i <= high2)); i += INT64(1)) {
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        *(x2 + i) = INT64(0);
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      }
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator19(_iterator2, _ln, _fn);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      _freeIterator10(_iterator, _ln, _fn);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    } else /* ZLINE: 1548 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp14 = chpl___EQUALS_12(call_tmp8, ArrayInit_gpuInit);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      if (call_tmp14) /* ZLINE: 1558 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        call_tmp15 = chpl___HYPHEN_6(s);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        chpl_direct_range_iter3(lo, call_tmp15, &ret_tmp3);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        call_tmp16 = ret_tmp3;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        _iterator3 = _getIterator9(&call_tmp16, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        taskInd_x = x2;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        chpl_check_nil(_iterator3, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        low5 = (_iterator3)->F0_low;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        chpl_check_nil(_iterator3, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_direct_param_stride_range_iter(low5, (_iterator3)->F1_high, &ret_tmp4);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp17 = ret_tmp4;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _iterator4 = _getIterator13(&call_tmp17, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        i2 = INT64(0);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        default_arg_first2 = chpl_checkIfRangeIterWillOverflow_default_first((_iterator4)->F0_low);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        default_arg_last2 = chpl_checkIfRangeIterWillOverflow_default_last((_iterator4)->F1_high);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        low6 = (_iterator4)->F0_low;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_checkIfRangeIterWillOverflow(low6, (_iterator4)->F1_high, INT64(1), default_arg_first2, default_arg_last2, UINT8(true), _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        high3 = (_iterator4)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        for (chpl_check_nil(_iterator4, _ln, _fn),i2 = (_iterator4)->F0_low; ((i2 <= high3)); i2 += INT64(1)) {
#line 1566 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          *(taskInd_x + i2) = INT64(0);
#line 1566 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        }
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _freeIterator19(_iterator4, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        _freeIterator10(_iterator3, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      } else /* ZLINE: 1548 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        call_tmp18 = chpl___EQUALS_12(call_tmp8, ArrayInit_parallelInit);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        if (call_tmp18) /* ZLINE: 1569 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        {
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp20 = chpl___HYPHEN_6(s);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp19 = chpl_build_bounded_range3(lo, call_tmp20);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          x3 = x2;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp21 = sizeAs4(call_tmp19, _ln, _fn);
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          len = call_tmp21;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          if (chpl_task_getSerial()) /* ZLINE: 3530 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          {
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            T = INT64(1);
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          } else /* ZLINE: 3530 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          {
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            T = _computeNumChunks3(call_tmp21, _ln, _fn);
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          }
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          numChunks = T;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp22 = chpl_build_low_bounded_range(INT64(0));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          tmpIter = chpl___POUND_(call_tmp22, T, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _coforallCount = _endCountAlloc2(_ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          numTasks = chpl_boundedCoforallSize(tmpIter, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _upEndCount(_coforallCount, numTasks, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_resetTaskSpawn(numTasks, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _iterator5 = _getIterator3(&tmpIter, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          this24 = (_iterator5)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          checkIfIterWillOverflow(this24, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          i3 = INT64(0);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          this25 = (_iterator5)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp23 = lowBoundForIter(this25);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp24 = chpl__idxToInt(call_tmp23);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          this26 = (_iterator5)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp25 = highBoundForIter(this26);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp26 = chpl__idxToInt(call_tmp25);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          end = call_tmp26;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          for (i3 = call_tmp24; ((i3 <= end)); i3 += INT64(1)) {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            this27 = (_iterator5)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            call_tmp27 = chpl_intToIdx3(this27, i3);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            _args_forcoforall_fn = ((_class_localscoforall_fn2)(&chpl_macro_tmp_1));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_0_len = len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_1_numChunks = numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_2_call_tmp = call_tmp19;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_4_chunk = call_tmp27;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_5_x = x3;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            _args_sizecoforall_fn = sizeof(chpl__class_localscoforall_fn2_object);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_ln = _ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_fn = _fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            /*** wrapcoforall_fn4 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(3), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), _args_sizecoforall_fn, INT64(3537), INT32(38));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          }
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          error = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _waitEndCount2(_coforallCount, numTasks, &error, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          if (error != nil) /* ZLINE: 3537 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_propagate_error(error, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          }
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _endCountFree(_coforallCount, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _freeIterator17(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl__autoDestroy59(tmpIter);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl__autoDestroy19(call_tmp22);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          chpl__autoDestroy18(x3);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          chpl_after_forall_fence();
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          chpl__autoDestroy59(call_tmp19);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        } else /* ZLINE: 1575 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        {
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          halt13(&_str_literal_416, call_tmp8, &_str_literal_417, _ln, _fn);
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _end_init_elts:;
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1537 */
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void init_elts3(_ddata_uint64_t x2,
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                       int64_t s,
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                       int64_t lo,
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                       int64_t _ln,
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                       int32_t _fn) {
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ArrayInit call_tmp8;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp9;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp10;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ic_chpl_direct_range_iter3 _iterator = NULL;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp11;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ir_chpl_direct_range_iter3 call_tmp12;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ir_chpl_direct_range_iter3 ret_tmp;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator2 = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp13;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp2;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t low3;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp14;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ic_chpl_direct_range_iter3 _iterator3 = NULL;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp15;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ir_chpl_direct_range_iter3 call_tmp16;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ir_chpl_direct_range_iter3 ret_tmp3;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_uint64_t taskInd_x = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator4 = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp17;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp4;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t low5;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i2;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first2;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last2;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low6;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high3;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp18;
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  range_int64_t_both_one call_tmp19;
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp20;
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_uint64_t x3 = NULL;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp21;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t len;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t numChunks;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one tmpIter;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_low_one call_tmp22;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t numTasks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_these_range_int64_t_both_one _iterator5 = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this24;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i3;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp23;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this25;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp24;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp25;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this26;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp26;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp27;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this27;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _class_localscoforall_fn3 _args_forcoforall_fn = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  raw_c_void_ptr _args_vforcoforall_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _args_sizecoforall_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  Error error = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__class_localscoforall_fn3_object chpl_macro_tmp_2;
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = init_elts_method2(s, _ln, _fn);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl___EQUALS_12(call_tmp8, ArrayInit_noInit);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp9) /* ZLINE: 1549 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end_init_elts;
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 1548 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp10 = chpl___EQUALS_12(call_tmp8, ArrayInit_serialInit);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp10) /* ZLINE: 1552 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp11 = chpl___HYPHEN_6(s);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl_direct_range_iter3(lo, call_tmp11, &ret_tmp);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp12 = ret_tmp;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      _iterator = _getIterator9(&call_tmp12, _ln, _fn);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      low3 = (_iterator)->F0_low;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_direct_param_stride_range_iter(low3, (_iterator)->F1_high, &ret_tmp2);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp13 = ret_tmp2;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator2 = _getIterator13(&call_tmp13, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      i = INT64(0);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator2)->F0_low);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator2)->F1_high);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      low4 = (_iterator2)->F0_low;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_checkIfRangeIterWillOverflow(low4, (_iterator2)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      high2 = (_iterator2)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      for (chpl_check_nil(_iterator2, _ln, _fn),i = (_iterator2)->F0_low; ((i <= high2)); i += INT64(1)) {
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        *(x2 + i) = UINT64(0);
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      }
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator19(_iterator2, _ln, _fn);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      _freeIterator10(_iterator, _ln, _fn);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    } else /* ZLINE: 1548 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp14 = chpl___EQUALS_12(call_tmp8, ArrayInit_gpuInit);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      if (call_tmp14) /* ZLINE: 1558 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        call_tmp15 = chpl___HYPHEN_6(s);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        chpl_direct_range_iter3(lo, call_tmp15, &ret_tmp3);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        call_tmp16 = ret_tmp3;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        _iterator3 = _getIterator9(&call_tmp16, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        taskInd_x = x2;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        chpl_check_nil(_iterator3, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        low5 = (_iterator3)->F0_low;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        chpl_check_nil(_iterator3, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_direct_param_stride_range_iter(low5, (_iterator3)->F1_high, &ret_tmp4);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp17 = ret_tmp4;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _iterator4 = _getIterator13(&call_tmp17, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        i2 = INT64(0);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        default_arg_first2 = chpl_checkIfRangeIterWillOverflow_default_first((_iterator4)->F0_low);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        default_arg_last2 = chpl_checkIfRangeIterWillOverflow_default_last((_iterator4)->F1_high);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        low6 = (_iterator4)->F0_low;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_checkIfRangeIterWillOverflow(low6, (_iterator4)->F1_high, INT64(1), default_arg_first2, default_arg_last2, UINT8(true), _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        high3 = (_iterator4)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        for (chpl_check_nil(_iterator4, _ln, _fn),i2 = (_iterator4)->F0_low; ((i2 <= high3)); i2 += INT64(1)) {
#line 1566 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          *(taskInd_x + i2) = UINT64(0);
#line 1566 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        }
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _freeIterator19(_iterator4, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        _freeIterator10(_iterator3, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      } else /* ZLINE: 1548 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        call_tmp18 = chpl___EQUALS_12(call_tmp8, ArrayInit_parallelInit);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        if (call_tmp18) /* ZLINE: 1569 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        {
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp20 = chpl___HYPHEN_6(s);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp19 = chpl_build_bounded_range3(lo, call_tmp20);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          x3 = x2;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp21 = sizeAs4(call_tmp19, _ln, _fn);
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          len = call_tmp21;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          if (chpl_task_getSerial()) /* ZLINE: 3530 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          {
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            T = INT64(1);
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          } else /* ZLINE: 3530 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          {
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            T = _computeNumChunks3(call_tmp21, _ln, _fn);
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          }
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          numChunks = T;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp22 = chpl_build_low_bounded_range(INT64(0));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          tmpIter = chpl___POUND_(call_tmp22, T, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _coforallCount = _endCountAlloc2(_ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          numTasks = chpl_boundedCoforallSize(tmpIter, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _upEndCount(_coforallCount, numTasks, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_resetTaskSpawn(numTasks, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _iterator5 = _getIterator3(&tmpIter, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          this24 = (_iterator5)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          checkIfIterWillOverflow(this24, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          i3 = INT64(0);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          this25 = (_iterator5)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp23 = lowBoundForIter(this25);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp24 = chpl__idxToInt(call_tmp23);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          this26 = (_iterator5)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp25 = highBoundForIter(this26);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp26 = chpl__idxToInt(call_tmp25);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          end = call_tmp26;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          for (i3 = call_tmp24; ((i3 <= end)); i3 += INT64(1)) {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            this27 = (_iterator5)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            call_tmp27 = chpl_intToIdx3(this27, i3);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            _args_forcoforall_fn = ((_class_localscoforall_fn3)(&chpl_macro_tmp_2));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_0_len = len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_1_numChunks = numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_2_call_tmp = call_tmp19;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_4_chunk = call_tmp27;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_5_x = x3;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            _args_sizecoforall_fn = sizeof(chpl__class_localscoforall_fn3_object);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_ln = _ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_fn = _fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            /*** wrapcoforall_fn2 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(1), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), _args_sizecoforall_fn, INT64(3537), INT32(38));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          }
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          error = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _waitEndCount2(_coforallCount, numTasks, &error, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          if (error != nil) /* ZLINE: 3537 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_propagate_error(error, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          }
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _endCountFree(_coforallCount, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _freeIterator17(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl__autoDestroy59(tmpIter);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl__autoDestroy19(call_tmp22);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          chpl__autoDestroy42(x3);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          chpl_after_forall_fence();
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          chpl__autoDestroy59(call_tmp19);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        } else /* ZLINE: 1575 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        {
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          halt13(&_str_literal_416, call_tmp8, &_str_literal_417, _ln, _fn);
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _end_init_elts:;
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1537 */
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void init_elts2(_ddata_locale x2,
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                       int64_t s,
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                       int64_t lo,
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                       int64_t _ln,
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                       int32_t _fn) {
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ArrayInit call_tmp8;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp9;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp10;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ic_chpl_direct_range_iter3 _iterator = NULL;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp11;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ir_chpl_direct_range_iter3 call_tmp12;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ir_chpl_direct_range_iter3 ret_tmp;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator2 = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp13;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp2;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t low3;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 1554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  locale y;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp14;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ic_chpl_direct_range_iter3 _iterator3 = NULL;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp15;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ir_chpl_direct_range_iter3 call_tmp16;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ir_chpl_direct_range_iter3 ret_tmp3;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_locale taskInd_x = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator4 = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp17;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp4;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t low5;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i2;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first2;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last2;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low6;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high3;
#line 1565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  locale y2;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp18;
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  range_int64_t_both_one call_tmp19;
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp20;
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_locale x3 = NULL;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp21;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t len;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t numChunks;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one tmpIter;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_low_one call_tmp22;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t numTasks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_these_range_int64_t_both_one _iterator5 = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this24;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i3;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp23;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this25;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp24;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp25;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this26;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp26;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp27;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this27;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _class_localscoforall_fn _args_forcoforall_fn = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  raw_c_void_ptr _args_vforcoforall_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _args_sizecoforall_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  Error error = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__class_localscoforall_fn_object chpl_macro_tmp_3;
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = init_elts_method3(s, _ln, _fn);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl___EQUALS_12(call_tmp8, ArrayInit_noInit);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp9) /* ZLINE: 1549 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end_init_elts;
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 1548 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp10 = chpl___EQUALS_12(call_tmp8, ArrayInit_serialInit);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp10) /* ZLINE: 1552 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp11 = chpl___HYPHEN_6(s);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl_direct_range_iter3(lo, call_tmp11, &ret_tmp);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp12 = ret_tmp;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      _iterator = _getIterator9(&call_tmp12, _ln, _fn);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      low3 = (_iterator)->F0_low;
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_direct_param_stride_range_iter(low3, (_iterator)->F1_high, &ret_tmp2);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp13 = ret_tmp2;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator2 = _getIterator13(&call_tmp13, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      i = INT64(0);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator2)->F0_low);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator2)->F1_high);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      low4 = (_iterator2)->F0_low;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_checkIfRangeIterWillOverflow(low4, (_iterator2)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      high2 = (_iterator2)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      for (chpl_check_nil(_iterator2, _ln, _fn),i = (_iterator2)->F0_low; ((i <= high2)); i += INT64(1)) {
#line 1554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        init24(&y, _ln, _fn);
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        *(x2 + i) = y;
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      }
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator19(_iterator2, _ln, _fn);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      _freeIterator10(_iterator, _ln, _fn);
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    } else /* ZLINE: 1548 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp14 = chpl___EQUALS_12(call_tmp8, ArrayInit_gpuInit);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      if (call_tmp14) /* ZLINE: 1558 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        call_tmp15 = chpl___HYPHEN_6(s);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        chpl_direct_range_iter3(lo, call_tmp15, &ret_tmp3);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        call_tmp16 = ret_tmp3;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        _iterator3 = _getIterator9(&call_tmp16, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        taskInd_x = x2;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        chpl_check_nil(_iterator3, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        low5 = (_iterator3)->F0_low;
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        chpl_check_nil(_iterator3, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_direct_param_stride_range_iter(low5, (_iterator3)->F1_high, &ret_tmp4);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp17 = ret_tmp4;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _iterator4 = _getIterator13(&call_tmp17, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        i2 = INT64(0);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        default_arg_first2 = chpl_checkIfRangeIterWillOverflow_default_first((_iterator4)->F0_low);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        default_arg_last2 = chpl_checkIfRangeIterWillOverflow_default_last((_iterator4)->F1_high);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        low6 = (_iterator4)->F0_low;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_checkIfRangeIterWillOverflow(low6, (_iterator4)->F1_high, INT64(1), default_arg_first2, default_arg_last2, UINT8(true), _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        high3 = (_iterator4)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        for (chpl_check_nil(_iterator4, _ln, _fn),i2 = (_iterator4)->F0_low; ((i2 <= high3)); i2 += INT64(1)) {
#line 1565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          init24(&y2, _ln, _fn);
#line 1566 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          *(taskInd_x + i2) = y2;
#line 1566 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        }
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _freeIterator19(_iterator4, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        _freeIterator10(_iterator3, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      } else /* ZLINE: 1548 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        call_tmp18 = chpl___EQUALS_12(call_tmp8, ArrayInit_parallelInit);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        if (call_tmp18) /* ZLINE: 1569 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        {
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp20 = chpl___HYPHEN_6(s);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          call_tmp19 = chpl_build_bounded_range3(lo, call_tmp20);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          x3 = x2;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp21 = sizeAs4(call_tmp19, _ln, _fn);
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          len = call_tmp21;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          if (chpl_task_getSerial()) /* ZLINE: 3530 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          {
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            T = INT64(1);
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          } else /* ZLINE: 3530 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          {
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            T = _computeNumChunks3(call_tmp21, _ln, _fn);
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          }
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          numChunks = T;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp22 = chpl_build_low_bounded_range(INT64(0));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          tmpIter = chpl___POUND_(call_tmp22, T, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _coforallCount = _endCountAlloc2(_ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          numTasks = chpl_boundedCoforallSize(tmpIter, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _upEndCount(_coforallCount, numTasks, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_resetTaskSpawn(numTasks, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _iterator5 = _getIterator3(&tmpIter, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          this24 = (_iterator5)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          checkIfIterWillOverflow(this24, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          i3 = INT64(0);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          this25 = (_iterator5)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp23 = lowBoundForIter(this25);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp24 = chpl__idxToInt(call_tmp23);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          this26 = (_iterator5)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp25 = highBoundForIter(this26);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp26 = chpl__idxToInt(call_tmp25);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          end = call_tmp26;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          for (i3 = call_tmp24; ((i3 <= end)); i3 += INT64(1)) {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            this27 = (_iterator5)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            call_tmp27 = chpl_intToIdx3(this27, i3);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            _args_forcoforall_fn = ((_class_localscoforall_fn)(&chpl_macro_tmp_3));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_0_len = len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_1_numChunks = numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_2_call_tmp = call_tmp19;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_4_chunk = call_tmp27;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_5_x = x3;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            _args_sizecoforall_fn = sizeof(chpl__class_localscoforall_fn_object);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_ln = _ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            (_args_forcoforall_fn)->_fn = _fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            /*** wrapcoforall_fn3 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(2), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), _args_sizecoforall_fn, INT64(3537), INT32(38));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          }
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          error = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _waitEndCount2(_coforallCount, numTasks, &error, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          if (error != nil) /* ZLINE: 3537 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            chpl_propagate_error(error, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          }
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _endCountFree(_coforallCount, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _freeIterator17(_iterator5, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl__autoDestroy59(tmpIter);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl__autoDestroy19(call_tmp22);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          chpl__autoDestroy27(x3);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          chpl_after_forall_fence();
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          chpl__autoDestroy59(call_tmp19);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        } else /* ZLINE: 1575 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        {
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
          halt13(&_str_literal_416, call_tmp8, &_str_literal_417, _ln, _fn);
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _end_init_elts:;
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1595 */
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__auto_destroy__ddata(_ddata_locale this24) {
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1595 */
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__auto_destroy__ddata2(_ddata_int64_t this24) {
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1595 */
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__auto_destroy__ddata3(_ddata_uint64_t this24) {
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1598 */
#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static locale * this7(_ddata_locale this24,
#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                      int64_t i) {
#line 1599 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_locale call_tmp8 = NULL;
#line 1599 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (this24 + i);
#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1598 */
#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t * this6(_ddata_int64_t this24,
#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                       int64_t i) {
#line 1599 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1599 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (this24 + i);
#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1598 */
#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t * this8(_ddata_uint64_t this24,
#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int64_t i) {
#line 1599 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_uint64_t call_tmp8 = NULL;
#line 1599 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (this24 + i);
#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1606 */
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_56(_ddata_locale * a,
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _ddata_locale b) {
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1606 */
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_55(_ddata_int64_t * a,
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _ddata_int64_t b) {
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1606 */
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASSIGN_54(_ddata_uint64_t * a,
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             _ddata_uint64_t b) {
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(a) = b;
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1611 */
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _ddata_int64_t _ddata_shift(_ddata_int64_t data,
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int64_t shift,
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int64_t _ln,
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int32_t _fn) {
#line 1612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_int64_t ret = NULL;
#line 1612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = ((_ddata_int64_t)(nil));
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = (data + shift);
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1611 */
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _ddata_uint64_t _ddata_shift2(_ddata_uint64_t data,
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                     int64_t shift,
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                     int64_t _ln,
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                     int32_t _fn) {
#line 1612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_uint64_t ret = NULL;
#line 1612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = ((_ddata_uint64_t)(nil));
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = (data + shift);
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1611 */
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _ddata_locale _ddata_shift3(_ddata_locale data,
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int64_t shift,
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int64_t _ln,
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int32_t _fn) {
#line 1612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_locale ret = NULL;
#line 1612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = ((_ddata_locale)(nil));
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = (data + shift);
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1617 */
#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t _ddata_sizeof_element2(int64_t _ln,
#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int32_t _fn) {
#line 1618 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 1618 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((uint64_t)(sizeof(int64_t)));
#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1617 */
#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t _ddata_sizeof_element(int64_t _ln,
#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                      int32_t _fn) {
#line 1618 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 1618 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((uint64_t)(sizeof(uint64_t)));
#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1617 */
#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t _ddata_sizeof_element3(int64_t _ln,
#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int32_t _fn) {
#line 1618 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 1618 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((uint64_t)(sizeof(locale)));
#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1621 */
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t _ddata_sizeof_element6(_ddata_locale x2,
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int64_t _ln,
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int32_t _fn) {
#line 1622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 1622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _ddata_sizeof_element3(_ln, _fn);
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1621 */
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t _ddata_sizeof_element5(_ddata_int64_t x2,
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int64_t _ln,
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int32_t _fn) {
#line 1622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 1622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _ddata_sizeof_element2(_ln, _fn);
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1621 */
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t _ddata_sizeof_element4(_ddata_uint64_t x2,
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int64_t _ln,
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int32_t _fn) {
#line 1622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 1622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _ddata_sizeof_element(_ln, _fn);
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1643 */
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _ddata_locale _ddata_allocate_noinit2(int64_t size5,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             chpl_bool * callPostAlloc,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int32_t subloc,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             chpl_bool haltOnOom,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int64_t _ln,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int32_t _fn) {
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool _formal_tmp_callPostAlloc;
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_locale ret = NULL;
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_locale ret2 = NULL;
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp10 = NULL;
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_locale call_tmp11 = NULL;
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _formal_tmp_callPostAlloc = UINT8(false);
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret2 = ((_ddata_locale)(nil));
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((uint64_t)(size5));
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _ddata_sizeof_element6(ret2, _ln, _fn);
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = chpl_mem_array_alloc(call_tmp8, call_tmp9, subloc, &_formal_tmp_callPostAlloc, haltOnOom, _ln, _fn);
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = chpl___COLON_64(call_tmp10, _ln, _fn);
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___ASSIGN_56(&ret2, call_tmp11);
#line 1656 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = ret2;
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(callPostAlloc) = _formal_tmp_callPostAlloc;
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1643 */
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _ddata_int64_t _ddata_allocate_noinit(int64_t size5,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             chpl_bool * callPostAlloc,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int32_t subloc,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             chpl_bool haltOnOom,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int64_t _ln,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int32_t _fn) {
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool _formal_tmp_callPostAlloc;
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_int64_t ret = NULL;
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_int64_t ret2 = NULL;
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp10 = NULL;
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_int64_t call_tmp11 = NULL;
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _formal_tmp_callPostAlloc = UINT8(false);
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret2 = ((_ddata_int64_t)(nil));
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((uint64_t)(size5));
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _ddata_sizeof_element5(ret2, _ln, _fn);
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = chpl_mem_array_alloc(call_tmp8, call_tmp9, subloc, &_formal_tmp_callPostAlloc, haltOnOom, _ln, _fn);
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = chpl___COLON_63(call_tmp10, _ln, _fn);
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___ASSIGN_55(&ret2, call_tmp11);
#line 1656 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = ret2;
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(callPostAlloc) = _formal_tmp_callPostAlloc;
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1643 */
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _ddata_uint64_t _ddata_allocate_noinit3(int64_t size5,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                               chpl_bool * callPostAlloc,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                               int32_t subloc,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                               chpl_bool haltOnOom,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                               int64_t _ln,
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                               int32_t _fn) {
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool _formal_tmp_callPostAlloc;
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_uint64_t ret = NULL;
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_uint64_t ret2 = NULL;
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp10 = NULL;
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_uint64_t call_tmp11 = NULL;
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _formal_tmp_callPostAlloc = UINT8(false);
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret2 = ((_ddata_uint64_t)(nil));
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((uint64_t)(size5));
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _ddata_sizeof_element4(ret2, _ln, _fn);
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = chpl_mem_array_alloc(call_tmp8, call_tmp9, subloc, &_formal_tmp_callPostAlloc, haltOnOom, _ln, _fn);
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = chpl___COLON_62(call_tmp10, _ln, _fn);
#line 1654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___ASSIGN_54(&ret2, call_tmp11);
#line 1656 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = ret2;
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(callPostAlloc) = _formal_tmp_callPostAlloc;
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 1643 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1645 */
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int32_t _ddata_allocate_noinit_default_subloc3(void) {
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t subloc;
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  subloc = c_sublocid_none;
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return subloc;
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1645 */
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int32_t _ddata_allocate_noinit_default_subloc2(void) {
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t subloc;
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  subloc = c_sublocid_none;
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return subloc;
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1645 */
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int32_t _ddata_allocate_noinit_default_subloc(void) {
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t subloc;
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  subloc = c_sublocid_none;
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return subloc;
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1691 */
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void _ddata_allocate_postalloc(_ddata_int64_t data,
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                      int64_t size5,
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                      int64_t _ln,
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                      int32_t _fn) {
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp10;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___COLON_66(data, _ln, _fn);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = ((uint64_t)(size5));
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = _ddata_sizeof_element5(data, _ln, _fn);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_mem_array_postAlloc(call_tmp8, call_tmp9, call_tmp10, _ln, _fn);
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1691 */
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void _ddata_allocate_postalloc3(_ddata_uint64_t data,
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int64_t size5,
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int64_t _ln,
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int32_t _fn) {
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp10;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___COLON_65(data, _ln, _fn);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = ((uint64_t)(size5));
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = _ddata_sizeof_element4(data, _ln, _fn);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_mem_array_postAlloc(call_tmp8, call_tmp9, call_tmp10, _ln, _fn);
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1691 */
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void _ddata_allocate_postalloc2(_ddata_locale data,
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int64_t size5,
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int64_t _ln,
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int32_t _fn) {
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp10;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___COLON_67(data, _ln, _fn);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = ((uint64_t)(size5));
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = _ddata_sizeof_element6(data, _ln, _fn);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_mem_array_postAlloc(call_tmp8, call_tmp9, call_tmp10, _ln, _fn);
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1716 */
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool _ddata_supports_reallocate3(_ddata_int64_t oldDdata,
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int64_t oldSize,
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int64_t newSize,
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int64_t _ln,
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int32_t _fn) {
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 1726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 1727 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp10;
#line 1728 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp11;
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___COLON_66(oldDdata, _ln, _fn);
#line 1726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = safeCast5(oldSize, _ln, _fn);
#line 1727 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = safeCast5(newSize, _ln, _fn);
#line 1728 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = _ddata_sizeof_element5(oldDdata, _ln, _fn);
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp12 = chpl_mem_array_supports_realloc(call_tmp8, call_tmp9, call_tmp10, call_tmp11, _ln, _fn);
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp12;
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1716 */
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool _ddata_supports_reallocate2(_ddata_locale oldDdata,
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int64_t oldSize,
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int64_t newSize,
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int64_t _ln,
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int32_t _fn) {
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 1726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 1727 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp10;
#line 1728 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp11;
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___COLON_67(oldDdata, _ln, _fn);
#line 1726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = safeCast5(oldSize, _ln, _fn);
#line 1727 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = safeCast5(newSize, _ln, _fn);
#line 1728 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = _ddata_sizeof_element6(oldDdata, _ln, _fn);
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp12 = chpl_mem_array_supports_realloc(call_tmp8, call_tmp9, call_tmp10, call_tmp11, _ln, _fn);
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp12;
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1716 */
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool _ddata_supports_reallocate(_ddata_uint64_t oldDdata,
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                            int64_t oldSize,
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                            int64_t newSize,
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                            int64_t _ln,
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                            int32_t _fn) {
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 1726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 1727 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp10;
#line 1728 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp11;
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___COLON_65(oldDdata, _ln, _fn);
#line 1726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = safeCast5(oldSize, _ln, _fn);
#line 1727 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = safeCast5(newSize, _ln, _fn);
#line 1728 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = _ddata_sizeof_element4(oldDdata, _ln, _fn);
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp12 = chpl_mem_array_supports_realloc(call_tmp8, call_tmp9, call_tmp10, call_tmp11, _ln, _fn);
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp12;
#line 1716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1731 */
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void _ddata_fill(_ddata_int64_t ddata,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int64_t lo,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int64_t hi,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int8_t fill,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int64_t _ln,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int32_t _fn) {
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp10;
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp11;
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 1741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp13;
#line 1742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_int64_t call_tmp14 = NULL;
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp15 = NULL;
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp16;
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___GREATER_(hi, lo);
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1737 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp9 = _ddata_sizeof_element5(ddata, _ln, _fn);
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp10 = chpl___HYPHEN_3(hi, lo);
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp11 = safeCast5(call_tmp10, _ln, _fn);
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp12 = safeMul(call_tmp11, call_tmp9, _ln, _fn);
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp12) /* ZLINE: 1740 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp13 = chpl___ASTERISK_3(call_tmp11, call_tmp9);
#line 1742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp14 = _ddata_shift(ddata, lo, _ln, _fn);
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp15 = chpl___COLON_66(call_tmp14, _ln, _fn);
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp16 = safeCast(call_tmp13, _ln, _fn);
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      memset2(call_tmp15, fill, call_tmp16, _ln, _fn);
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    } else /* ZLINE: 1744 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      halt(&_str_literal_3424, _ln, _fn);
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1731 */
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void _ddata_fill3(_ddata_uint64_t ddata,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t lo,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t hi,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int8_t fill,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t _ln,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int32_t _fn) {
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp10;
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp11;
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 1741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp13;
#line 1742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_uint64_t call_tmp14 = NULL;
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp15 = NULL;
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp16;
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___GREATER_(hi, lo);
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1737 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp9 = _ddata_sizeof_element4(ddata, _ln, _fn);
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp10 = chpl___HYPHEN_3(hi, lo);
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp11 = safeCast5(call_tmp10, _ln, _fn);
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp12 = safeMul(call_tmp11, call_tmp9, _ln, _fn);
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp12) /* ZLINE: 1740 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp13 = chpl___ASTERISK_3(call_tmp11, call_tmp9);
#line 1742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp14 = _ddata_shift2(ddata, lo, _ln, _fn);
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp15 = chpl___COLON_65(call_tmp14, _ln, _fn);
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp16 = safeCast(call_tmp13, _ln, _fn);
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      memset2(call_tmp15, fill, call_tmp16, _ln, _fn);
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    } else /* ZLINE: 1744 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      halt(&_str_literal_3424, _ln, _fn);
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1731 */
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void _ddata_fill2(_ddata_locale ddata,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t lo,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t hi,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int8_t fill,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t _ln,
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int32_t _fn) {
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp10;
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp11;
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 1741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp13;
#line 1742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_locale call_tmp14 = NULL;
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp15 = NULL;
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp16;
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___GREATER_(hi, lo);
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1737 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp9 = _ddata_sizeof_element6(ddata, _ln, _fn);
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp10 = chpl___HYPHEN_3(hi, lo);
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp11 = safeCast5(call_tmp10, _ln, _fn);
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp12 = safeMul(call_tmp11, call_tmp9, _ln, _fn);
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp12) /* ZLINE: 1740 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp13 = chpl___ASTERISK_3(call_tmp11, call_tmp9);
#line 1742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp14 = _ddata_shift3(ddata, lo, _ln, _fn);
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp15 = chpl___COLON_67(call_tmp14, _ln, _fn);
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp16 = safeCast(call_tmp13, _ln, _fn);
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      memset2(call_tmp15, fill, call_tmp16, _ln, _fn);
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    } else /* ZLINE: 1744 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      halt(&_str_literal_3424, _ln, _fn);
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1735 */
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int8_t _ddata_fill_default_fill(void) {
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return INT8(0);
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1735 */
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int8_t _ddata_fill_default_fill3(void) {
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return INT8(0);
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1735 */
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int8_t _ddata_fill_default_fill2(void) {
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return INT8(0);
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1751 */
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _ddata_locale _ddata_reallocate(_ddata_locale oldDdata,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int64_t oldSize,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int64_t newSize,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int32_t subloc,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       chpl_ddataResizePolicy policy,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int64_t _ln,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int32_t _fn) {
#line 1764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool callPostAlloc;
#line 1769 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1770 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp9;
#line 1771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  range_int64_t_both_one call_tmp10;
#line 1771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp11;
#line 1771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_locale oldDdata2 = NULL;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp12;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t len;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t numChunks;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one tmpIter;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_low_one call_tmp13;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t numTasks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_these_range_int64_t_both_one _iterator = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this24;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp14;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this25;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp15;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp16;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this26;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp17;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp18;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this27;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _class_localscoforall_fn4 _args_forcoforall_fn = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  raw_c_void_ptr _args_vforcoforall_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _args_sizecoforall_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  Error error = NULL;
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ic_chpl_direct_range_iter3 _iterator2 = NULL;
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp19;
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ir_chpl_direct_range_iter3 call_tmp20;
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ir_chpl_direct_range_iter3 ret_tmp;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator3 = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp21;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp2;
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t low3;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i2;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 1775 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_locale call_tmp22 = NULL;
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp23 = NULL;
#line 1780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp24;
#line 1781 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp25;
#line 1782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp26;
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp27 = NULL;
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_locale call_tmp28 = NULL;
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp29;
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp30;
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp31;
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int8_t default_arg_fill;
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp32 = NULL;
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp33;
#line 1810 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp34 = NULL;
#line 1810 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp35;
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp36;
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__class_localscoforall_fn4_object chpl_macro_tmp_4;
#line 1764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  callPostAlloc = UINT8(false);
#line 1768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(oldDdata, _ln, _fn);
#line 1768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  this7(oldDdata, INT64(0));
#line 1769 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___GREATER_(oldSize, newSize);
#line 1769 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1769 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1769 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1770 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp9 = _deinitElementsIsParallel(oldSize, _ln, _fn);
#line 1770 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp9) /* ZLINE: 1770 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1770 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp11 = chpl___HYPHEN_6(oldSize);
#line 1771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp10 = chpl_build_bounded_range3(newSize, call_tmp11);
#line 1771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      oldDdata2 = oldDdata;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp12 = sizeAs4(call_tmp10, _ln, _fn);
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      len = call_tmp12;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      if (chpl_task_getSerial()) /* ZLINE: 3530 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        T = INT64(1);
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      } else /* ZLINE: 3530 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        T = _computeNumChunks3(call_tmp12, _ln, _fn);
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      }
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      numChunks = T;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp13 = chpl_build_low_bounded_range(INT64(0));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      tmpIter = chpl___POUND_(call_tmp13, T, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _coforallCount = _endCountAlloc2(_ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      numTasks = chpl_boundedCoforallSize(tmpIter, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _upEndCount(_coforallCount, numTasks, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_resetTaskSpawn(numTasks, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator = _getIterator3(&tmpIter, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      this24 = (_iterator)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      checkIfIterWillOverflow(this24, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      i = INT64(0);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      this25 = (_iterator)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp14 = lowBoundForIter(this25);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp15 = chpl__idxToInt(call_tmp14);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      this26 = (_iterator)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp16 = highBoundForIter(this26);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp17 = chpl__idxToInt(call_tmp16);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      end = call_tmp17;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      for (i = call_tmp15; ((i <= end)); i += INT64(1)) {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        this27 = (_iterator)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp18 = chpl_intToIdx3(this27, i);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _args_forcoforall_fn = ((_class_localscoforall_fn4)(&chpl_macro_tmp_4));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        (_args_forcoforall_fn)->_0_len = len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        (_args_forcoforall_fn)->_1_numChunks = numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        (_args_forcoforall_fn)->_2_call_tmp = call_tmp10;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        (_args_forcoforall_fn)->_4_chunk = call_tmp18;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        (_args_forcoforall_fn)->_5_oldDdata = oldDdata2;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _args_sizecoforall_fn = sizeof(chpl__class_localscoforall_fn4_object);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        (_args_forcoforall_fn)->_ln = _ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        (_args_forcoforall_fn)->_fn = _fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        /*** wrapcoforall_fn ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(0), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), _args_sizecoforall_fn, INT64(3537), INT32(38));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      }
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      error = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _waitEndCount2(_coforallCount, numTasks, &error, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      if (error != nil) /* ZLINE: 3537 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_propagate_error(error, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      }
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _endCountFree(_coforallCount, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator17(_iterator, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl__autoDestroy59(tmpIter);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl__autoDestroy19(call_tmp13);
#line 1771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl__autoDestroy27(oldDdata2);
#line 1771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl_after_forall_fence();
#line 1771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl__autoDestroy59(call_tmp10);
#line 1771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    } else /* ZLINE: 1773 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp19 = chpl___HYPHEN_6(oldSize);
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl_direct_range_iter3(newSize, call_tmp19, &ret_tmp);
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp20 = ret_tmp;
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      _iterator2 = _getIterator9(&call_tmp20, _ln, _fn);
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      low3 = (_iterator2)->F0_low;
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_direct_param_stride_range_iter(low3, (_iterator2)->F1_high, &ret_tmp2);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp21 = ret_tmp2;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator3 = _getIterator13(&call_tmp21, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      i2 = INT64(0);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator3)->F0_low);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator3)->F1_high);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      low4 = (_iterator3)->F0_low;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_checkIfRangeIterWillOverflow(low4, (_iterator3)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      high2 = (_iterator3)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      for (chpl_check_nil(_iterator3, _ln, _fn),i2 = (_iterator3)->F0_low; ((i2 <= high2)); i2 += INT64(1)) {
#line 1775 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        chpl_check_nil(oldDdata, _ln, _fn);
#line 1775 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        call_tmp22 = this7(oldDdata, i2);
#line 1775 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        chpl__autoDestroy45(call_tmp22);
#line 1775 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      }
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator19(_iterator3, _ln, _fn);
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      _freeIterator10(_iterator2, _ln, _fn);
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp23 = chpl___COLON_67(oldDdata, _ln, _fn);
#line 1780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp24 = safeCast5(oldSize, _ln, _fn);
#line 1781 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp25 = safeCast5(newSize, _ln, _fn);
#line 1782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp26 = _ddata_sizeof_element6(oldDdata, _ln, _fn);
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp27 = chpl_mem_array_realloc(call_tmp23, call_tmp24, call_tmp25, call_tmp26, subloc, &callPostAlloc, _ln, _fn);
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp28 = chpl___COLON_64(call_tmp27, _ln, _fn);
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp29 = chpl___EQUALS_11(policy, chpl_ddataResizePolicy_normalInit);
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp29) /* ZLINE: 1789 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    init_elts2(call_tmp28, newSize, oldSize, _ln, _fn);
#line 1794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 1788 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp30 = chpl___EQUALS_11(policy, chpl_ddataResizePolicy_skipInit);
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp30) /* ZLINE: 1796 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    } else /* ZLINE: 1788 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp31 = chpl___EQUALS_11(policy, chpl_ddataResizePolicy_skipInitButClearMem);
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      if (call_tmp31) /* ZLINE: 1797 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        default_arg_fill = _ddata_fill_default_fill2();
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        _ddata_fill2(call_tmp28, oldSize, newSize, default_arg_fill, _ln, _fn);
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      }
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1801 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (callPostAlloc) /* ZLINE: 1801 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1801 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp32 = chpl___COLON_67(oldDdata, _ln, _fn);
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp33 = safeCast5(oldSize, _ln, _fn);
#line 1810 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp34 = chpl___COLON_67(call_tmp28, _ln, _fn);
#line 1810 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp35 = safeCast5(newSize, _ln, _fn);
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp36 = _ddata_sizeof_element6(oldDdata, _ln, _fn);
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_mem_array_postRealloc(call_tmp32, call_tmp33, call_tmp34, call_tmp35, call_tmp36, _ln, _fn);
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp28;
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1751 */
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _ddata_int64_t _ddata_reallocate2(_ddata_int64_t oldDdata,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                         int64_t oldSize,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                         int64_t newSize,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                         int32_t subloc,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                         chpl_ddataResizePolicy policy,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                         int64_t _ln,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                         int32_t _fn) {
#line 1764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool callPostAlloc;
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 1780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 1781 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp10;
#line 1782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp11;
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp12 = NULL;
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_int64_t call_tmp13 = NULL;
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp14;
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp15;
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp16;
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int8_t default_arg_fill;
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp17 = NULL;
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp18;
#line 1810 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp19 = NULL;
#line 1810 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp20;
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp21;
#line 1764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  callPostAlloc = UINT8(false);
#line 1768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(oldDdata, _ln, _fn);
#line 1768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  this6(oldDdata, INT64(0));
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___COLON_66(oldDdata, _ln, _fn);
#line 1780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = safeCast5(oldSize, _ln, _fn);
#line 1781 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = safeCast5(newSize, _ln, _fn);
#line 1782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = _ddata_sizeof_element5(oldDdata, _ln, _fn);
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp12 = chpl_mem_array_realloc(call_tmp8, call_tmp9, call_tmp10, call_tmp11, subloc, &callPostAlloc, _ln, _fn);
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp13 = chpl___COLON_63(call_tmp12, _ln, _fn);
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp14 = chpl___EQUALS_11(policy, chpl_ddataResizePolicy_normalInit);
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp14) /* ZLINE: 1789 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    init_elts(call_tmp13, newSize, oldSize, _ln, _fn);
#line 1794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 1788 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp15 = chpl___EQUALS_11(policy, chpl_ddataResizePolicy_skipInit);
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp15) /* ZLINE: 1796 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    } else /* ZLINE: 1788 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp16 = chpl___EQUALS_11(policy, chpl_ddataResizePolicy_skipInitButClearMem);
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      if (call_tmp16) /* ZLINE: 1797 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        default_arg_fill = _ddata_fill_default_fill();
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        _ddata_fill(call_tmp13, oldSize, newSize, default_arg_fill, _ln, _fn);
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      }
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1801 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (callPostAlloc) /* ZLINE: 1801 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1801 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp17 = chpl___COLON_66(oldDdata, _ln, _fn);
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp18 = safeCast5(oldSize, _ln, _fn);
#line 1810 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp19 = chpl___COLON_66(call_tmp13, _ln, _fn);
#line 1810 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp20 = safeCast5(newSize, _ln, _fn);
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp21 = _ddata_sizeof_element5(oldDdata, _ln, _fn);
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_mem_array_postRealloc(call_tmp17, call_tmp18, call_tmp19, call_tmp20, call_tmp21, _ln, _fn);
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp13;
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1751 */
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _ddata_uint64_t _ddata_reallocate3(_ddata_uint64_t oldDdata,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                          int64_t oldSize,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                          int64_t newSize,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                          int32_t subloc,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                          chpl_ddataResizePolicy policy,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                          int64_t _ln,
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                          int32_t _fn) {
#line 1764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool callPostAlloc;
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 1780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 1781 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp10;
#line 1782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp11;
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp12 = NULL;
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ddata_uint64_t call_tmp13 = NULL;
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp14;
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp15;
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp16;
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int8_t default_arg_fill;
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp17 = NULL;
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp18;
#line 1810 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp19 = NULL;
#line 1810 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp20;
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp21;
#line 1764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  callPostAlloc = UINT8(false);
#line 1768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(oldDdata, _ln, _fn);
#line 1768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  this8(oldDdata, INT64(0));
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___COLON_65(oldDdata, _ln, _fn);
#line 1780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = safeCast5(oldSize, _ln, _fn);
#line 1781 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = safeCast5(newSize, _ln, _fn);
#line 1782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = _ddata_sizeof_element4(oldDdata, _ln, _fn);
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp12 = chpl_mem_array_realloc(call_tmp8, call_tmp9, call_tmp10, call_tmp11, subloc, &callPostAlloc, _ln, _fn);
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp13 = chpl___COLON_62(call_tmp12, _ln, _fn);
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp14 = chpl___EQUALS_11(policy, chpl_ddataResizePolicy_normalInit);
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp14) /* ZLINE: 1789 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    init_elts3(call_tmp13, newSize, oldSize, _ln, _fn);
#line 1794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 1788 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp15 = chpl___EQUALS_11(policy, chpl_ddataResizePolicy_skipInit);
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp15) /* ZLINE: 1796 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    } else /* ZLINE: 1788 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp16 = chpl___EQUALS_11(policy, chpl_ddataResizePolicy_skipInitButClearMem);
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      if (call_tmp16) /* ZLINE: 1797 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1788 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      {
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        default_arg_fill = _ddata_fill_default_fill3();
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
        _ddata_fill3(call_tmp13, oldSize, newSize, default_arg_fill, _ln, _fn);
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      }
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1801 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (callPostAlloc) /* ZLINE: 1801 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1801 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp17 = chpl___COLON_65(oldDdata, _ln, _fn);
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp18 = safeCast5(oldSize, _ln, _fn);
#line 1810 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp19 = chpl___COLON_65(call_tmp13, _ln, _fn);
#line 1810 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp20 = safeCast5(newSize, _ln, _fn);
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp21 = _ddata_sizeof_element4(oldDdata, _ln, _fn);
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_mem_array_postRealloc(call_tmp17, call_tmp18, call_tmp19, call_tmp20, call_tmp21, _ln, _fn);
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp13;
#line 1751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1817 */
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void _ddata_free3(_ddata_locale data,
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t size5,
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t _ln,
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int32_t _fn) {
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_localeID_t call_tmp8;
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t call_tmp9;
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp10 = NULL;
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp11;
#line 1826 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp12;
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl_gen_getLocaleID();
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl_sublocFromLocaleID(call_tmp8, _ln, _fn);
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = chpl___COLON_67(data, _ln, _fn);
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = ((uint64_t)(size5));
#line 1826 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp12 = _ddata_sizeof_element6(data, _ln, _fn);
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_mem_array_free(call_tmp10, call_tmp11, call_tmp12, call_tmp9, _ln, _fn);
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1817 */
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void _ddata_free2(_ddata_int64_t data,
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t size5,
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t _ln,
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int32_t _fn) {
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_localeID_t call_tmp8;
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t call_tmp9;
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp10 = NULL;
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp11;
#line 1826 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp12;
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl_gen_getLocaleID();
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl_sublocFromLocaleID(call_tmp8, _ln, _fn);
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = chpl___COLON_66(data, _ln, _fn);
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = ((uint64_t)(size5));
#line 1826 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp12 = _ddata_sizeof_element5(data, _ln, _fn);
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_mem_array_free(call_tmp10, call_tmp11, call_tmp12, call_tmp9, _ln, _fn);
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1817 */
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void _ddata_free(_ddata_uint64_t data,
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int64_t size5,
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int64_t _ln,
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int32_t _fn) {
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_localeID_t call_tmp8;
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t call_tmp9;
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void call_tmp10 = NULL;
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp11;
#line 1826 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp12;
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl_gen_getLocaleID();
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl_sublocFromLocaleID(call_tmp8, _ln, _fn);
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = chpl___COLON_65(data, _ln, _fn);
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = ((uint64_t)(size5));
#line 1826 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp12 = _ddata_sizeof_element4(data, _ln, _fn);
#line 1825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_mem_array_free(call_tmp10, call_tmp11, call_tmp12, call_tmp9, _ln, _fn);
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1834 */
#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_14(_ddata_int64_t a,
#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  _nilType b) {
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == nil);
#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1834 */
#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_13(_ddata_uint64_t a,
#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  _nilType b) {
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == nil);
#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1834 */
#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_15(_ddata_locale a,
#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  _nilType b) {
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a == nil);
#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1876 */
#line 1876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl_rt_reset_task_spawn(void) {
#line 1879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_task_reset_spawn_order();
#line 1876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1882 */
#line 1882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl_resetTaskSpawn(int64_t numTasks,
#line 1882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int64_t _ln,
#line 1882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int32_t _fn) {
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t local_dataParTasksPerLocale;
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t T;
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  locale call_tmp9;
#line 1886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp10;
#line 1888 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp11;
#line 1891 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_chpl_task_infoChapel_t call_tmp12 = NULL;
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  local_dataParTasksPerLocale = dataParTasksPerLocale;
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_3(local_dataParTasksPerLocale, INT64(0));
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 1883 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp9 = here(_ln, _fn);
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T = maxTaskPar(&call_tmp9, _ln, _fn);
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__autoDestroy45(&call_tmp9);
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 1883 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T = local_dataParTasksPerLocale;
#line 1883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = chpl___GREATER__ASSIGN_(numTasks, T);
#line 1886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp10) /* ZLINE: 1886 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_rt_reset_task_spawn();
#line 1887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 1886 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1888 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp11 = chpl___EQUALS_3(numTasks, INT64(1));
#line 1888 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    if (call_tmp11) /* ZLINE: 1888 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1888 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    {
#line 1891 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      call_tmp12 = chpl_task_getInfoChapel();
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
      chpl_task_data_setNextCoStmtSerial(call_tmp12, UINT8(true), _ln, _fn);
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    }
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1906 */
#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void init6(endCountDiagsManager * this24,
#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                  chpl_task_infoChapel_t * taskInfo,
#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                  chpl_bool prevDiagsDisabledVal) {
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  (this24)->taskInfo = taskInfo;
#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  (this24)->prevDiagsDisabledVal = prevDiagsDisabledVal;
#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1906 */
#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__auto_destroy_endCountDiagsManager(endCountDiagsManager * this24) {
#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1907 */
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static c_ptr_chpl_task_infoChapel_t * chpl_get_endCountDiagsManager_taskInfo(endCountDiagsManager * this24) {
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_c_ptr_chpl_task_infoChapel_t call_tmp8 = NULL;
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = &((this24)->taskInfo);
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1907 */
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_task_infoChapel_t * init_default_taskInfo(int64_t _ln,
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                      int32_t _fn) {
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_chpl_task_infoChapel_t taskInfo = NULL;
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  taskInfo = ((c_ptr_chpl_task_infoChapel_t)(nil));
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return taskInfo;
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1908 */
#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool * chpl_get_endCountDiagsManager_prevDiagsDisabledVal(endCountDiagsManager * this24) {
#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = &((this24)->prevDiagsDisabledVal);
#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1910 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1910 */
#line 1910 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void enterContext(endCountDiagsManager * this24,
#line 1910 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t _ln,
#line 1910 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int32_t _fn) {
#line 1912 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_c_ptr_chpl_task_infoChapel_t call_tmp8 = NULL;
#line 1912 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_chpl_task_infoChapel_t call_tmp9 = NULL;
#line 1913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_chpl_bool call_tmp10 = NULL;
#line 1913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_c_ptr_chpl_task_infoChapel_t call_tmp11 = NULL;
#line 1913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 1912 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl_get_endCountDiagsManager_taskInfo(this24);
#line 1912 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl_task_getInfoChapel();
#line 1912 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___ASSIGN_75(call_tmp8, call_tmp9);
#line 1913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = chpl_get_endCountDiagsManager_prevDiagsDisabledVal(this24);
#line 1913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = chpl_get_endCountDiagsManager_taskInfo(this24);
#line 1913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp12 = chpl_task_data_setCommDiagsTemporarilyDisabled(*(call_tmp11), UINT8(true), _ln, _fn);
#line 1913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___ASSIGN_(call_tmp10, call_tmp12);
#line 1910 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1910 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1917 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1917 */
#line 1917 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void exitContext(endCountDiagsManager * this24,
#line 1917 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        _owned_Error2 * unused,
#line 1917 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int64_t _ln,
#line 1917 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int32_t _fn) {
#line 1917 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error2 _formal_tmp_unused;
#line 1919 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_c_ptr_chpl_task_infoChapel_t call_tmp8 = NULL;
#line 1919 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_chpl_bool call_tmp9 = NULL;
#line 1917 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _formal_tmp_unused = *(unused);
#line 1919 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl_get_endCountDiagsManager_taskInfo(this24);
#line 1919 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl_get_endCountDiagsManager_prevDiagsDisabledVal(this24);
#line 1919 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_task_data_setCommDiagsTemporarilyDisabled(*(call_tmp8), *(call_tmp9), _ln, _fn);
#line 1917 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__autoDestroy90(&_formal_tmp_unused, _ln, _fn);
#line 1917 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1917 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1928 */
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void init7(chpl___EndCountBase this24,
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                  chpl_TaskErrors * errors,
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                  int64_t _ln,
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                  int32_t _fn) {
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_TaskErrors _formal_tmp_errors;
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  RootClass super_tmp = NULL;
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _formal_tmp_errors = *(errors);
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  super_tmp = &((this24)->super);
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  init5(super_tmp);
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ((RootClass)(((RootClass)(this24))))->chpl__cid = chpl__cid_RootClass;
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  (this24)->errors = _formal_tmp_errors;
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_chpl___EndCountBase;
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1928 */
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__auto_destroy__EndCountBase(chpl___EndCountBase this24,
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int64_t _ln,
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                             int32_t _fn) {
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_chpl_TaskErrors _field_destructor_tmp_ = NULL;
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _field_destructor_tmp_ = &((this24)->errors);
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_chpl_TaskErrors(_field_destructor_tmp_);
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1928 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1929 */
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_TaskErrors * chpl_get__EndCountBase_errors(chpl___EndCountBase this24,
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                       int64_t _ln,
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                       int32_t _fn) {
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_chpl_TaskErrors call_tmp8 = NULL;
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = &((this24)->errors);
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1929 */
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_TaskErrors init_default_errors(int64_t _ln,
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                           int32_t _fn) {
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_TaskErrors ret;
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_TaskErrors errors;
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error default_arg__head = NULL;
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_LocalSpinlock default_arg__errorsLock;
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  default_arg__head = init_default__head(_ln, _fn);
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  default_arg__errorsLock = init_default__errorsLock();
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  init105(&errors, default_arg__head, &default_arg__errorsLock);
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = errors;
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 1929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1934 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1934 */
#line 1934 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__auto_destroy__EndCount(chpl___EndCount_AtomicT_int64_t_int64_t this24,
#line 1934 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                         int64_t _ln,
#line 1934 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                         int32_t _fn) {
#line 1937 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_AtomicT_int64_t _field_destructor_tmp_ = NULL;
#line 1937 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1937 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _field_destructor_tmp_ = &((this24)->i);
#line 1937 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  deinit2(_field_destructor_tmp_);
#line 1934 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__EndCountBase(((chpl___EndCountBase)(this24)), _ln, _fn);
#line 1934 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1934 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1937 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1937 */
#line 1937 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static AtomicT_int64_t * chpl_get__EndCount_i(chpl___EndCount_AtomicT_int64_t_int64_t this24,
#line 1937 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int64_t _ln,
#line 1937 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int32_t _fn) {
#line 1937 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 1937 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1937 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = &((this24)->i);
#line 1937 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1937 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1938 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1938 */
#line 1938 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t * chpl_get__EndCount_taskCnt(chpl___EndCount_AtomicT_int64_t_int64_t this24,
#line 1938 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                            int64_t _ln,
#line 1938 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                            int32_t _fn) {
#line 1938 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1938 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1938 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = &((this24)->taskCnt);
#line 1938 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 1938 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1939 */
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl___EndCount_AtomicT_int64_t_int64_t _new(int64_t _ln,
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                    int32_t _fn) {
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t initTemp = NULL;
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t T = NULL;
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_AtomicT_int64_t_int64_t_object), INT16(6), _ln, _fn);
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  initTemp = ((chpl___EndCount_AtomicT_int64_t_int64_t)(cast_tmp));
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_chpl___EndCount_AtomicT_int64_t_int64_t;
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  init8(initTemp, _ln, _fn);
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = initTemp;
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T;
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1939 */
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void init8(chpl___EndCount_AtomicT_int64_t_int64_t this24,
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                  int64_t _ln,
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                  int32_t _fn) {
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___EndCountBase super_tmp = NULL;
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_TaskErrors default_arg_errors;
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  AtomicT_int64_t i;
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  super_tmp = &((this24)->super);
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  default_arg_errors = init_default_errors(_ln, _fn);
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  init7(super_tmp, &default_arg_errors, _ln, _fn);
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ((RootClass)(((chpl___EndCountBase)(this24))))->chpl__cid = chpl__cid_chpl___EndCountBase;
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  init2(&i);
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  (this24)->i = i;
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  (this24)->taskCnt = INT64(0);
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_chpl___EndCount_AtomicT_int64_t_int64_t;
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1939 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1944 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1944 */
#line 1944 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void add4(chpl___EndCount_AtomicT_int64_t_int64_t this24,
#line 1944 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                 int64_t value,
#line 1944 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                 int64_t _ln,
#line 1944 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                 int32_t _fn) {
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_endCountDiagsManager manager = NULL;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  endCountDiagsManager call_tmp8;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  endCountDiagsManager initTemp;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_chpl_task_infoChapel_t default_arg_taskInfo = NULL;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool errorCaught;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error error = NULL;
#line 1946 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_AtomicT_int64_t call_tmp9 = NULL;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error initTemp2;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error chpl_tmp_err;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error _formal_tmp_in_x;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error2 _formal_tmp_in_unused;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error2 _formal_tmp_in_unused2;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  default_arg_taskInfo = init_default_taskInfo(_ln, _fn);
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  init6(&initTemp, default_arg_taskInfo, UINT8(false));
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = initTemp;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  manager = &call_tmp8;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__verifyTypeContext(manager);
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  enterContext(manager, _ln, _fn);
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  errorCaught = UINT8(false);
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  error = NULL;
#line 1946 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1946 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl_get__EndCount_i(this24, _ln, _fn);
#line 1946 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  add(call_tmp9, value, _ln, _fn);
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (error != nil) /* ZLINE: 1945 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    init70(&initTemp2, error);
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_tmp_err = initTemp2;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    errorCaught = UINT8(true);
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    _formal_tmp_in_x = chpl_tmp_err;
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    _formal_tmp_in_unused = chpl___COLON_32(&_formal_tmp_in_x, _ln, _fn);
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    exitContext(manager, &_formal_tmp_in_unused, _ln, _fn);
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (! errorCaught) /* ZLINE: 1945 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    _formal_tmp_in_unused2 = chpl___COLON_40(nil, _ln, _fn);
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    exitContext(manager, &_formal_tmp_in_unused2, _ln, _fn);
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__autoDestroy44(&call_tmp8);
#line 1944 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1944 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1949 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1949 */
#line 1949 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void sub3(chpl___EndCount_AtomicT_int64_t_int64_t this24,
#line 1949 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                 int64_t value,
#line 1949 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                 int64_t _ln,
#line 1949 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                 int32_t _fn) {
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_endCountDiagsManager manager = NULL;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  endCountDiagsManager call_tmp8;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  endCountDiagsManager initTemp;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_chpl_task_infoChapel_t default_arg_taskInfo = NULL;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool errorCaught;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error error = NULL;
#line 1951 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_AtomicT_int64_t call_tmp9 = NULL;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error initTemp2;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error chpl_tmp_err;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error _formal_tmp_in_x;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error2 _formal_tmp_in_unused;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error2 _formal_tmp_in_unused2;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  default_arg_taskInfo = init_default_taskInfo(_ln, _fn);
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  init6(&initTemp, default_arg_taskInfo, UINT8(false));
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = initTemp;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  manager = &call_tmp8;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__verifyTypeContext(manager);
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  enterContext(manager, _ln, _fn);
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  errorCaught = UINT8(false);
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  error = NULL;
#line 1951 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1951 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl_get__EndCount_i(this24, _ln, _fn);
#line 1951 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  sub(call_tmp9, value, _ln, _fn);
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (error != nil) /* ZLINE: 1950 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    init70(&initTemp2, error);
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_tmp_err = initTemp2;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    errorCaught = UINT8(true);
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    _formal_tmp_in_x = chpl_tmp_err;
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    _formal_tmp_in_unused = chpl___COLON_32(&_formal_tmp_in_x, _ln, _fn);
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    exitContext(manager, &_formal_tmp_in_unused, _ln, _fn);
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (! errorCaught) /* ZLINE: 1950 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    _formal_tmp_in_unused2 = chpl___COLON_40(nil, _ln, _fn);
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    exitContext(manager, &_formal_tmp_in_unused2, _ln, _fn);
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1950 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__autoDestroy44(&call_tmp8);
#line 1949 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1949 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1954 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1954 */
#line 1954 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void waitFor2(chpl___EndCount_AtomicT_int64_t_int64_t this24,
#line 1954 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                     int64_t value,
#line 1954 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                     int64_t _ln,
#line 1954 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                     int32_t _fn) {
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_endCountDiagsManager manager = NULL;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  endCountDiagsManager call_tmp8;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  endCountDiagsManager initTemp;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_chpl_task_infoChapel_t default_arg_taskInfo = NULL;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool errorCaught;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error error = NULL;
#line 1956 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_AtomicT_int64_t call_tmp9 = NULL;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error initTemp2;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error chpl_tmp_err;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error _formal_tmp_in_x;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error2 _formal_tmp_in_unused;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error2 _formal_tmp_in_unused2;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  default_arg_taskInfo = init_default_taskInfo(_ln, _fn);
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  init6(&initTemp, default_arg_taskInfo, UINT8(false));
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = initTemp;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  manager = &call_tmp8;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__verifyTypeContext(manager);
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  enterContext(manager, _ln, _fn);
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  errorCaught = UINT8(false);
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  error = NULL;
#line 1956 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1956 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = chpl_get__EndCount_i(this24, _ln, _fn);
#line 1956 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  waitFor(call_tmp9, value, _ln, _fn);
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (error != nil) /* ZLINE: 1955 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    init70(&initTemp2, error);
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_tmp_err = initTemp2;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    errorCaught = UINT8(true);
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    _formal_tmp_in_x = chpl_tmp_err;
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    _formal_tmp_in_unused = chpl___COLON_32(&_formal_tmp_in_x, _ln, _fn);
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    exitContext(manager, &_formal_tmp_in_unused, _ln, _fn);
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (! errorCaught) /* ZLINE: 1955 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    _formal_tmp_in_unused2 = chpl___COLON_40(nil, _ln, _fn);
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    exitContext(manager, &_formal_tmp_in_unused2, _ln, _fn);
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1955 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__autoDestroy44(&call_tmp8);
#line 1954 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1954 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1970 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1970 */
#line 1970 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl___EndCount_AtomicT_int64_t_int64_t _endCountAlloc(int64_t _ln,
#line 1970 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                              int32_t _fn) {
#line 1977 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t new_temp = NULL;
#line 1977 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  new_temp = _new(_ln, _fn);
#line 1970 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return new_temp;
#line 1970 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1970 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1970 */
#line 1970 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl___EndCount_AtomicT_int64_t_int64_t _endCountAlloc2(int64_t _ln,
#line 1970 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                               int32_t _fn) {
#line 1974 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t new_temp = NULL;
#line 1974 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  new_temp = _new(_ln, _fn);
#line 1970 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return new_temp;
#line 1970 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1989 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1989 */
#line 1989 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void _endCountFree(chpl___EndCount_AtomicT_int64_t_int64_t e,
#line 1989 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 1989 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 1990 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t call_tmp8 = NULL;
#line 1990 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = _to_unmanaged17(e);
#line 1990 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__delete30(call_tmp8, _ln, _fn);
#line 1989 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1989 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2024 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2024 */
#line 2024 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void _upEndCount(chpl___EndCount_AtomicT_int64_t_int64_t e,
#line 2024 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int64_t numTasks,
#line 2024 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int64_t _ln,
#line 2024 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                        int32_t _fn) {
#line 2028 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2029 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  locale call_tmp9;
#line 2029 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp10;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt2 = NULL;
#line 2025 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(e, _ln, _fn);
#line 2025 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  add4(e, numTasks, _ln, _fn);
#line 2028 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___GREATER_(numTasks, INT64(1));
#line 2028 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2028 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2028 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2029 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp9 = here(_ln, _fn);
#line 2029 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp10 = chpl___HYPHEN_6(numTasks);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _chpl_forward_tgt2 = chpl_forwarding_expr12(&call_tmp9, _ln, _fn);
#line 2029 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_check_nil(_chpl_forward_tgt2, _ln, _fn);
#line 2029 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    runningTaskCntAdd(_chpl_forward_tgt2, call_tmp10, _ln, _fn);
#line 2029 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__autoDestroy45(&call_tmp9);
#line 2029 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_comm_task_create();
#line 2024 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2024 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2047 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2047 */
#line 2047 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl_after_forall_fence(void) {
#line 2048 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_comm_unordered_task_fence();
#line 2047 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2047 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2057 */
#line 2057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void _downEndCount(chpl___EndCount_AtomicT_int64_t_int64_t e,
#line 2057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          Error err,
#line 2057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 2057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 2058 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_save_task_error(((chpl___EndCountBase)(e)), err, _ln, _fn);
#line 2065 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_comm_task_end();
#line 2067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(e, _ln, _fn);
#line 2067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  sub3(e, INT64(1), _ln, _fn);
#line 2057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2076 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2076 */
#line 2076 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void _waitEndCount(chpl___EndCount_AtomicT_int64_t_int64_t e,
#line 2076 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          Error * error_out,
#line 2076 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 2076 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 2080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  locale call_tmp8;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt2 = NULL;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t coerce_tmp2 = NULL;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_int64_t T = NULL;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t coerce_tmp3 = NULL;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t coerce_tmp4;
#line 2088 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  locale call_tmp9;
#line 2088 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp10;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt3 = NULL;
#line 2095 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_chpl_TaskErrors call_tmp11 = NULL;
#line 2095 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___EndCountBase coerce_tmp5 = NULL;
#line 2095 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 2095 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp13;
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_chpl_TaskErrors call_tmp14 = NULL;
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___EndCountBase coerce_tmp6 = NULL;
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_TaskErrors call_tmp15;
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  TaskErrors new_temp = NULL;
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_TaskErrors initTemp;
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error call_tmp16 = NULL;
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error _formal_tmp_in_err;
#line 2080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = here(_ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _chpl_forward_tgt2 = chpl_forwarding_expr12(&call_tmp8, _ln, _fn);
#line 2080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(_chpl_forward_tgt2, _ln, _fn);
#line 2080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  runningTaskCntSub(_chpl_forward_tgt2, INT64(1), _ln, _fn);
#line 2080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__autoDestroy45(&call_tmp8);
#line 2083 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(e, _ln, _fn);
#line 2083 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  waitFor2(e, INT64(0), _ln, _fn);
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  coerce_tmp2 = e;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_get__EndCount_taskCnt(coerce_tmp2, _ln, _fn);
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  coerce_tmp3 = e;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = chpl_get__EndCount_taskCnt(coerce_tmp3, _ln, _fn);
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  coerce_tmp4 = *(T);
#line 2088 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = here(_ln, _fn);
#line 2088 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp10 = chpl___HYPHEN_6(coerce_tmp4);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _chpl_forward_tgt3 = chpl_forwarding_expr12(&call_tmp9, _ln, _fn);
#line 2088 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(_chpl_forward_tgt3, _ln, _fn);
#line 2088 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  runningTaskCntSub(_chpl_forward_tgt3, call_tmp10, _ln, _fn);
#line 2088 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__autoDestroy45(&call_tmp9);
#line 2095 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  coerce_tmp5 = ((chpl___EndCountBase)(e));
#line 2095 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(coerce_tmp5, _ln, _fn);
#line 2095 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = chpl_get__EndCountBase_errors(coerce_tmp5, _ln, _fn);
#line 2095 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp12 = empty(call_tmp11, _ln, _fn);
#line 2095 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp13 = chpl___EXCLAMATION_(call_tmp12);
#line 2095 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp13) /* ZLINE: 2095 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2095 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    coerce_tmp6 = ((chpl___EndCountBase)(e));
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_check_nil(coerce_tmp6, _ln, _fn);
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp14 = chpl_get__EndCountBase_errors(coerce_tmp6, _ln, _fn);
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    new_temp = _new17(call_tmp14, _ln, _fn);
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    init67(&initTemp, new_temp);
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp15 = initTemp;
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    _formal_tmp_in_err = chpl___COLON_38(&call_tmp15, _ln, _fn);
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp16 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    *(error_out) = call_tmp16;
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end_waitEndCount;
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _end_waitEndCount:;
#line 2076 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2076 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2103 */
#line 2103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void _waitEndCount2(chpl___EndCount_AtomicT_int64_t_int64_t e,
#line 2103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t numTasks,
#line 2103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           Error * error_out,
#line 2103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  locale call_tmp9;
#line 2109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp10;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt2 = NULL;
#line 2116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_chpl_TaskErrors call_tmp11 = NULL;
#line 2116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___EndCountBase coerce_tmp2 = NULL;
#line 2116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 2116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp13;
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_chpl_TaskErrors call_tmp14 = NULL;
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl___EndCountBase coerce_tmp3 = NULL;
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_TaskErrors call_tmp15;
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  TaskErrors new_temp = NULL;
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_TaskErrors initTemp;
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error call_tmp16 = NULL;
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _owned_Error _formal_tmp_in_err;
#line 2105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(e, _ln, _fn);
#line 2105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  waitFor2(e, INT64(0), _ln, _fn);
#line 2108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___GREATER_(numTasks, INT64(1));
#line 2108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2108 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp9 = here(_ln, _fn);
#line 2109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp10 = chpl___HYPHEN_6(numTasks);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _chpl_forward_tgt2 = chpl_forwarding_expr12(&call_tmp9, _ln, _fn);
#line 2109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_check_nil(_chpl_forward_tgt2, _ln, _fn);
#line 2109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    runningTaskCntSub(_chpl_forward_tgt2, call_tmp10, _ln, _fn);
#line 2109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__autoDestroy45(&call_tmp9);
#line 2109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  coerce_tmp2 = ((chpl___EndCountBase)(e));
#line 2116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 2116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp11 = chpl_get__EndCountBase_errors(coerce_tmp2, _ln, _fn);
#line 2116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp12 = empty(call_tmp11, _ln, _fn);
#line 2116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp13 = chpl___EXCLAMATION_(call_tmp12);
#line 2116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp13) /* ZLINE: 2116 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    coerce_tmp3 = ((chpl___EndCountBase)(e));
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp14 = chpl_get__EndCountBase_errors(coerce_tmp3, _ln, _fn);
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    new_temp = _new17(call_tmp14, _ln, _fn);
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    init67(&initTemp, new_temp);
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp15 = initTemp;
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    _formal_tmp_in_err = chpl___COLON_38(&call_tmp15, _ln, _fn);
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp16 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    *(error_out) = call_tmp16;
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end_waitEndCount;
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _end_waitEndCount:;
#line 2103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2243 */
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl___COLON_6(uint64_t x2,
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              int64_t _ln,
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              int32_t _fn) {
#line 2244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp8;
#line 2244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((int64_t)(x2));
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2243 */
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int32_t chpl___COLON_4(int64_t x2,
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              int64_t _ln,
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              int32_t _fn) {
#line 2244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t call_tmp8;
#line 2244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((int32_t)(x2));
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2243 */
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint8_t chpl___COLON_5(int64_t x2,
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              int64_t _ln,
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              int32_t _fn) {
#line 2244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint8_t call_tmp8;
#line 2244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((uint8_t)(x2));
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2243 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2250 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2250 */
#line 2250 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl___COLON_7(_real64 x2,
#line 2250 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              int64_t _ln,
#line 2250 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              int32_t _fn) {
#line 2251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp8;
#line 2251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((int64_t)(x2));
#line 2250 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2250 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2321 */
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl___RemoteVarContainer_R chpl___COLON_11(chpl___RemoteVarContainer_R x2) {
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return x2;
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2321 */
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error chpl___COLON_10(Error x2) {
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return x2;
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2321 */
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error chpl___COLON_9(TaskErrors x2,
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int64_t _ln,
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int32_t _fn) {
#line 2324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error call_tmp8 = NULL;
#line 2324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((Error)(x2));
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2321 */
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error chpl___COLON_15(CodepointSplitError x2,
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 2324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error call_tmp8 = NULL;
#line 2324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((Error)(x2));
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2321 */
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error chpl___COLON_13(NilClassError x2,
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 2324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error call_tmp8 = NULL;
#line 2324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((Error)(x2));
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2321 */
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error chpl___COLON_14(DecodeError x2,
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 2324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error call_tmp8 = NULL;
#line 2324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((Error)(x2));
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2321 */
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error chpl___COLON_12(IllegalArgumentError x2,
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int64_t _ln,
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             int32_t _fn) {
#line 2324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error call_tmp8 = NULL;
#line 2324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((Error)(x2));
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2321 */
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error chpl___COLON_8(SystemError x2,
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int64_t _ln,
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int32_t _fn) {
#line 2324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  Error call_tmp8 = NULL;
#line 2324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = ((Error)(x2));
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2390 */
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static AbstractRootLocale chpl___COLON_16(BaseLocale x2,
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                          int64_t _ln,
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                          int32_t _fn) {
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  AbstractRootLocale _formal_type_tmp_ = NULL;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  AbstractRootLocale ret = NULL;
#line 2393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  AbstractRootLocale call_tmp9 = NULL;
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t chpl_macro_tmp_5;
#line 2393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 2393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2393 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ret = ((AbstractRootLocale)(nil));
#line 2394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end__COLON_;
#line 2394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_macro_tmp_5 = ((RootClass)(x2))->chpl__cid;
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_borrowed23(( (((chpl__cid_AbstractRootLocale <= chpl_macro_tmp_5) && (chpl_macro_tmp_5 <= chpl_subclass_max_id[chpl__cid_AbstractRootLocale])))?(((AbstractRootLocale)(x2))):(((AbstractRootLocale)(NULL))) ));
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = _to_nilable2(call_tmp9);
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _end__COLON_:;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2390 */
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static RootLocale chpl___COLON_17(BaseLocale x2,
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int64_t _ln,
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int32_t _fn) {
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  RootLocale _formal_type_tmp_ = NULL;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  RootLocale ret = NULL;
#line 2393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  RootLocale call_tmp9 = NULL;
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t chpl_macro_tmp_6;
#line 2393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 2393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2393 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ret = ((RootLocale)(nil));
#line 2394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end__COLON_;
#line 2394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_macro_tmp_6 = ((RootClass)(x2))->chpl__cid;
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_borrowed17(( (((chpl__cid_RootLocale <= chpl_macro_tmp_6) && (chpl_macro_tmp_6 <= chpl_subclass_max_id[chpl__cid_RootLocale])))?(((RootLocale)(x2))):(((RootLocale)(NULL))) ));
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = _to_nilable(call_tmp9);
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _end__COLON_:;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2419 */
#line 2419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static AbstractLocaleModel chpl___COLON_18(BaseLocale x2,
#line 2419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                           int64_t _ln,
#line 2419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                           int32_t _fn) {
#line 2419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  AbstractLocaleModel _formal_type_tmp_ = NULL;
#line 2419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  AbstractLocaleModel ret = NULL;
#line 2422 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  AbstractLocaleModel call_tmp9 = NULL;
#line 2426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t chpl_macro_tmp_7;
#line 2422 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 2422 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2422 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2422 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2423 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ret = ((AbstractLocaleModel)(nil));
#line 2423 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end__COLON_;
#line 2423 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_macro_tmp_7 = ((RootClass)(x2))->chpl__cid;
#line 2426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_unmanaged21(( (((chpl__cid_AbstractLocaleModel <= chpl_macro_tmp_7) && (chpl_macro_tmp_7 <= chpl_subclass_max_id[chpl__cid_AbstractLocaleModel])))?(((AbstractLocaleModel)(x2))):(((AbstractLocaleModel)(NULL))) ));
#line 2426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = _to_nilable4(call_tmp9);
#line 2426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _end__COLON_:;
#line 2419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 2419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2431 */
#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseArrOverRectangularDom_1_int64_t_one chpl___COLON_19(BaseArr x2,
#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                               int64_t _ln,
#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                               int32_t _fn) {
#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  BaseArrOverRectangularDom_1_int64_t_one _formal_type_tmp_ = NULL;
#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  BaseArrOverRectangularDom_1_int64_t_one ret = NULL;
#line 2434 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  BaseArrOverRectangularDom_1_int64_t_one call_tmp9 = NULL;
#line 2438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t chpl_macro_tmp_8;
#line 2434 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 2434 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2434 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2434 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2435 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ret = ((BaseArrOverRectangularDom_1_int64_t_one)(nil));
#line 2435 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end__COLON_;
#line 2435 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_macro_tmp_8 = ((RootClass)(x2))->chpl__cid;
#line 2438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_unmanaged22(( (((chpl__cid_BaseArrOverRectangularDom_1_int64_t_one <= chpl_macro_tmp_8) && (chpl_macro_tmp_8 <= chpl_subclass_max_id[chpl__cid_BaseArrOverRectangularDom_1_int64_t_one])))?(((BaseArrOverRectangularDom_1_int64_t_one)(x2))):(((BaseArrOverRectangularDom_1_int64_t_one)(NULL))) ));
#line 2438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = _to_nilable3(call_tmp9);
#line 2438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _end__COLON_:;
#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2431 */
#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static TaskErrors chpl___COLON_20(Error x2,
#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int64_t _ln,
#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int32_t _fn) {
#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  TaskErrors _formal_type_tmp_ = NULL;
#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  TaskErrors ret = NULL;
#line 2434 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  TaskErrors call_tmp9 = NULL;
#line 2438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int32_t chpl_macro_tmp_9;
#line 2434 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 2434 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2434 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2434 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2435 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ret = ((TaskErrors)(nil));
#line 2435 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _end__COLON_;
#line 2435 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_macro_tmp_9 = ((RootClass)(x2))->chpl__cid;
#line 2438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = _to_unmanaged62(( (((chpl__cid_TaskErrors <= chpl_macro_tmp_9) && (chpl_macro_tmp_9 <= chpl_subclass_max_id[chpl__cid_TaskErrors])))?(((TaskErrors)(x2))):(((TaskErrors)(NULL))) ));
#line 2438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = _to_nilable5(call_tmp9);
#line 2438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _end__COLON_:;
#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 2431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2525 */
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__initCopy3(_tuple_6_star__ref_string * x2,
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            chpl_bool definedConst,
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            _tuple_6_star_string * _ret,
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int64_t _ln,
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                            int32_t _fn) {
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _tuple_6_star_string ret;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_string read_x0 = NULL;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string elt_x0;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_string read_x1 = NULL;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string elt_x1;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_string read_x2 = NULL;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string elt_x2;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_string read_x3 = NULL;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string elt_x3;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_string read_x4 = NULL;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string elt_x4;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_string read_x5 = NULL;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string elt_x5;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  read_x0 = *(*(x2) + INT64(0));
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  elt_x0 = chpl__initCopy6(read_x0, UINT8(false), _ln, _fn);
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  read_x1 = *(*(x2) + INT64(1));
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  elt_x1 = chpl__initCopy6(read_x1, UINT8(false), _ln, _fn);
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  read_x2 = *(*(x2) + INT64(2));
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  elt_x2 = chpl__initCopy6(read_x2, UINT8(false), _ln, _fn);
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  read_x3 = *(*(x2) + INT64(3));
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  elt_x3 = chpl__initCopy6(read_x3, UINT8(false), _ln, _fn);
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  read_x4 = *(*(x2) + INT64(4));
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  elt_x4 = chpl__initCopy6(read_x4, UINT8(false), _ln, _fn);
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  read_x5 = *(*(x2) + INT64(5));
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  elt_x5 = chpl__initCopy6(read_x5, UINT8(false), _ln, _fn);
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(ret + INT64(0)) = elt_x0;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(ret + INT64(1)) = elt_x1;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(ret + INT64(2)) = elt_x2;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(ret + INT64(3)) = elt_x3;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(ret + INT64(4)) = elt_x4;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(ret + INT64(5)) = elt_x5;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(*(_ret) + INT64(0)) = *(ret + INT64(0));
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(*(_ret) + INT64(1)) = *(ret + INT64(1));
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(*(_ret) + INT64(2)) = *(ret + INT64(2));
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(*(_ret) + INT64(3)) = *(ret + INT64(3));
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(*(_ret) + INT64(4)) = *(ret + INT64(4));
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(*(_ret) + INT64(5)) = *(ret + INT64(5));
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2525 */
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _tuple_2_byteIndex_int64_t chpl__initCopy2(_tuple_2__ref_byteIndex_int64_t * x2,
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                  chpl_bool definedConst) {
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _tuple_2_byteIndex_int64_t ret;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_byteIndex read_x0 = NULL;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  byteIndex elt_x0;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t coerce_tmp2;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  read_x0 = (x2)->x0;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  elt_x0 = *(read_x0);
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  coerce_tmp2 = (x2)->x1;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  (&ret)->x0 = elt_x0;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  (&ret)->x1 = coerce_tmp2;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2525 */
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _tuple_3_int32_t_byteIndex_int64_t chpl__initCopy4(_tuple_3_int32_t__ref_byteIndex_int64_t * x2,
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                          chpl_bool definedConst) {
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _tuple_3_int32_t_byteIndex_int64_t ret;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_byteIndex read_x1 = NULL;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  byteIndex elt_x1;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t coerce_tmp2;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  read_x1 = (x2)->x1;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  elt_x1 = *(read_x1);
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  coerce_tmp2 = (x2)->x2;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  (&ret)->x0 = (x2)->x0;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  (&ret)->x1 = elt_x1;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  (&ret)->x2 = coerce_tmp2;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 2525 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2534 */
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static string chpl__initCopy6(string * x2,
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              chpl_bool definedConst,
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              int64_t _ln,
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              int32_t _fn) {
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string ret;
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string T;
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  init_ASSIGN_25(&T, x2, _ln, _fn);
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = T;
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2534 */
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static locale chpl__initCopy5(locale * x2,
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              chpl_bool definedConst) {
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  locale ret;
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  locale T;
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  init_ASSIGN_(&T, x2);
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = T;
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2534 */
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static fileWriter_F_defaultSerializer chpl__initCopy7(fileWriter_F_defaultSerializer * x2,
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                      chpl_bool definedConst,
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                      int64_t _ln,
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                      int32_t _fn) {
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  fileWriter_F_defaultSerializer ret;
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  fileWriter_F_defaultSerializer T;
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  init_ASSIGN_26(&T, x2, _ln, _fn);
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ret = T;
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return ret;
#line 2534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2565 */
#line 2565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static string chpl__autoCopy2(string * x2,
#line 2565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              chpl_bool definedConst,
#line 2565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              int64_t _ln,
#line 2565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                              int32_t _fn) {
#line 2566 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string call_tmp8;
#line 2566 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl__initCopy6(x2, definedConst, _ln, _fn);
#line 2565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2565 */
#line 2565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static locale chpl__autoCopy(locale * x2,
#line 2565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                             chpl_bool definedConst) {
#line 2566 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  locale call_tmp8;
#line 2566 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl__initCopy5(x2, definedConst);
#line 2565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2571 */
#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy(RootClass x2) {
#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy18(_ddata_int64_t x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__ddata2(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy27(_ddata_locale x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__ddata(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy23(string * x2,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int64_t _ln,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int32_t _fn) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  deinit52(x2, _ln, _fn);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy26(byteIndex * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_byteIndex(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy28(codepointIndex * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_codepointIndex(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy44(endCountDiagsManager * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_endCountDiagsManager(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy25(ioHintSet * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_ioHintSet(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy13(file * x2,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int64_t _ln,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int32_t _fn) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  deinit54(x2, _ln, _fn);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy9(defaultSerializer * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_defaultSerializer(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy43(defaultDeserializer * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_defaultDeserializer(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy24(chpl_ioNewline * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_chpl_ioNewline(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy50(_tuple_1_star_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_1_star_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy42(_ddata_uint64_t x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__ddata3(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy4(DefaultComparator * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_DefaultComparator(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy5(chpl_root_locale_accum * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_chpl_root_locale_accum(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy6(_tuple_2_c_ptr_uint8_t_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_2_c_ptr_uint8_t_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy14(_tuple_3__ref_string_int64_t__ref_string * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_3__ref_string_int64_t__ref_string(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy33(_tuple_1_star_c_ptrConst_int8_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_1_star_c_ptrConst_int8_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy34(_tuple_3_syserr_int32_t_int32_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_3_syserr_int32_t_int32_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy41(AtomicT_int64_t * x2) {
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy53(_tuple_6_star_string * x2,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int64_t _ln,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int32_t _fn) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_6_star_string(x2, _ln, _fn);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy54(fileReader_T_defaultDeserializer * x2,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int64_t _ln,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int32_t _fn) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  deinit56(x2, _ln, _fn);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy19(range_int64_t_low_one x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_range3(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy20(fileWriter_T_defaultSerializer * x2,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int64_t _ln,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int32_t _fn) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  deinit57(x2, _ln, _fn);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy29(_tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy38(_tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy32(_tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy46(_tuple_2_range_int64_t_both_one_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_2_range_int64_t_both_one_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy47(_tuple_2__ref_byteIndex_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_2__ref_byteIndex_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy49(_tuple_3_int32_t__ref_byteIndex_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_3_int32_t__ref_byteIndex_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy52(_tuple_3_int32_t_byteIndex_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_3_int32_t_byteIndex_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy55(range_byteIndex_both_one x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_range4(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy60(_tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy63(_tuple_4__ref_string_int64_t__ref_string_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_4__ref_string_int64_t__ref_string_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy61(_tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy65(range_byteIndex_low_one x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_range5(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy36(_tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy22(range_byteIndex_high_one x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_range6(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy3(range_int64_t_high_one x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_range2(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy56(_tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy48(ReverseComparator_DefaultComparator * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_ReverseComparator(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy62(_tuple_4_star__ref_string * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_4_star__ref_string(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy58(_tuple_2_star_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_2_star_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy57(_tuple_4__ref_string_int32_t__ref_string_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_4__ref_string_int32_t__ref_string_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy51(_tuple_2__ref_string_uint64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_2__ref_string_uint64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy40(_tuple_3__ref_string_ArrayInit__ref_string * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_3__ref_string_ArrayInit__ref_string(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy39(fileWriter_F_defaultSerializer * x2,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int64_t _ln,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int32_t _fn) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  deinit58(x2, _ln, _fn);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy37(fileReader_F_defaultDeserializer * x2,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int64_t _ln,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int32_t _fn) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  deinit55(x2, _ln, _fn);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy35(_tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy31(_tuple_2__ref_string_int64_t * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_2__ref_string_int64_t(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy30(_tr_chpl__thunk2 * x2) {
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy64(_tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy7(AggregateSerializer_fileWriter_F_defaultSerializer * x2,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               int64_t _ln,
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               int32_t _fn) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_AggregateSerializer(x2, _ln, _fn);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy8(_tuple_1_star__ref__owned__RemoteVarContainer_R * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_1_star__ref__owned__RemoteVarContainer_R(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy10(_tuple_1_star__ref_R * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_1_star__ref_R(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy11(_tuple_2_Remote_R__ref_chpl_ioNewline * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_2_Remote_R__ref_chpl_ioNewline(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy12(_tuple_2__ref_string__ref_chpl_ioNewline * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_2__ref_string__ref_chpl_ioNewline(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy15(_tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy16(_tuple_1_star__ref_chpl_ioNewline * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_1_star__ref_chpl_ioNewline(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy17(_tuple_2_BaseArr_BaseDom * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_2_BaseArr_BaseDom(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy21(_tuple_2_BaseDom_BaseDist * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_2_BaseDom_BaseDist(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy2(_tuple_1_star_range_int64_t_both_one * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy__tuple_1_star_range_int64_t_both_one(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy45(locale * x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  deinit14(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2581 */
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy59(range_int64_t_both_one x2) {
#line 2582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_range(x2);
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2595 */
#line 2595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy66(_distribution_DefaultDist * x2,
#line 2595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int64_t _ln,
#line 2595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int32_t _fn) {
#line 2596 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  deinit4(x2, _ln, _fn);
#line 2595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2595 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2601 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2601 */
#line 2601 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy67(_domain_DefaultRectangularDom_1_int64_t_one * x2,
#line 2601 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int64_t _ln,
#line 2601 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int32_t _fn) {
#line 2602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  deinit13(x2, _ln, _fn);
#line 2601 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2601 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2607 */
#line 2607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__autoDestroy68(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * x2,
#line 2607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int64_t _ln,
#line 2607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int32_t _fn) {
#line 2608 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  deinit3(x2, _ln, _fn);
#line 2607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete22(BaseLocale arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_check_nil(arg, _ln, _fn);
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ((void(*)(BaseLocale,
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
       int64_t,
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(arg))->chpl__cid) + INT64(0))])(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete24(BaseArr arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_check_nil(arg, _ln, _fn);
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ((void(*)(BaseArr,
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
       int64_t,
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(arg))->chpl__cid) + INT64(0))])(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete12(Error arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_check_nil(arg, _ln, _fn);
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ((void(*)(Error,
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
       int64_t,
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(arg))->chpl__cid) + INT64(0))])(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete11(TaskErrors arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    deinit53(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete21(chpl___RemoteVarContainer_R arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy__RemoteVarContainer(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete15(chpl_ModuleDeinit arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_chpl_ModuleDeinit(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete6(_serializeWrapper_defaultSerializer arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy__serializeWrapper3(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete23(ReferenceCount arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_ReferenceCount(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete41(_serializeWrapper_defaultDeserializer arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy__serializeWrapper4(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete19(BaseDom arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_check_nil(arg, _ln, _fn);
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ((void(*)(BaseDom,
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
       int64_t,
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(arg))->chpl__cid) + INT64(0))])(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete7(BaseDist arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_check_nil(arg, _ln, _fn);
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ((void(*)(BaseDist,
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
       int64_t,
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(arg))->chpl__cid) + INT64(0))])(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete18(IllegalArgumentError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_IllegalArgumentError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete31(DecodeError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_DecodeError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete8(EofError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_EofError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete4(UnexpectedEofError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_UnexpectedEofError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete10(BadFormatError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_BadFormatError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete13(BlockingIoError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_BlockingIoError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete16(ChildProcessError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_ChildProcessError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete29(BrokenPipeError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_BrokenPipeError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete37(ConnectionAbortedError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_ConnectionAbortedError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete38(ConnectionRefusedError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_ConnectionRefusedError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete2(ConnectionResetError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_ConnectionResetError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete39(FileExistsError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_FileExistsError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete3(FileNotFoundError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_FileNotFoundError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete32(InterruptedError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_InterruptedError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete40(IsADirectoryError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_IsADirectoryError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete26(NotADirectoryError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_NotADirectoryError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete25(PermissionError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_PermissionError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete(ProcessLookupError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                         int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_ProcessLookupError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete5(TimeoutError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_TimeoutError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete17(IoError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_IoError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete20(SystemError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_check_nil(arg, _ln, _fn);
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    ((void(*)(SystemError,
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
       int64_t,
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(arg))->chpl__cid) + INT64(0))])(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete9(CodepointSplitError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                          int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_CodepointSplitError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete35(DefaultRectangularDom_1_int64_t_one arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_DefaultRectangularDom(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete27(TaskErrors arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    deinit53(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete42(Remote_R arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_Remote(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete43(NilClassError arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_NilClassError(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete36(DefaultRectangularArr_1_int64_t_one_locale_int64_t arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_DefaultRectangularArr3(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete34(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_DefaultRectangularArr2(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete33(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_DefaultRectangularArr(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete30(chpl___EndCount_AtomicT_int64_t_int64_t arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy__EndCount(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete28(QioPluginChannel arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_QioPluginChannel(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2622 */
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__delete14(QioPluginFile arg,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int64_t _ln,
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                           int32_t _fn) {
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(arg)), nil);
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 2641 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 2641 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 2642 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__auto_destroy_QioPluginFile(arg, _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_here_free(((c_ptr_void)(((raw_c_void_ptr)(arg)))), _ln, _fn);
#line 2645 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2682 */
#line 2682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___PLUS__ASSIGN_(int64_t * lhs,
#line 2682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                 int64_t rhs) {
#line 2682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(lhs) += rhs;
#line 2682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2687 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2687 */
#line 2687 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___PLUS__ASSIGN_2(uint64_t * lhs,
#line 2687 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  uint64_t rhs) {
#line 2687 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(lhs) += rhs;
#line 2687 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2687 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2711 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2711 */
#line 2711 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___HYPHEN__ASSIGN_(int64_t * lhs,
#line 2711 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int64_t rhs) {
#line 2711 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(lhs) -= rhs;
#line 2711 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2711 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2734 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2734 */
#line 2734 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASTERISK__ASSIGN_(int64_t * lhs,
#line 2734 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                     int64_t rhs) {
#line 2734 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(lhs) *= rhs;
#line 2734 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2734 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2739 */
#line 2739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___ASTERISK__ASSIGN_2(uint64_t * lhs,
#line 2739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                      uint64_t rhs) {
#line 2739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(lhs) *= rhs;
#line 2739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2887 */
#line 2887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl___BAR__ASSIGN_(int32_t * lhs,
#line 2887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int32_t rhs) {
#line 2887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(lhs) |= rhs;
#line 2887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 2887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2973 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2973 */
#line 2973 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t chpl___PLUS_5(uint64_t a) {
#line 2974 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 2974 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a + UINT64(1));
#line 2973 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2973 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2976 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2976 */
#line 2976 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t chpl___PLUS_6(uint64_t b) {
#line 2977 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 2977 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (UINT64(1) + b);
#line 2976 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2976 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2979 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2979 */
#line 2979 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl___PLUS_7(int64_t a) {
#line 2980 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp8;
#line 2980 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a + INT64(1));
#line 2979 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2979 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2990 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2990 */
#line 2990 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t chpl___HYPHEN_5(uint64_t a) {
#line 2991 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 2991 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a - UINT64(1));
#line 2990 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2990 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2996 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2996 */
#line 2996 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl___HYPHEN_6(int64_t a) {
#line 2997 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp8;
#line 2997 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a - INT64(1));
#line 2996 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2996 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2999 */
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl___HYPHEN_10(int64_t b) {
#line 3000 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp8;
#line 3000 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (-INT64(9223372036854775807) - INT64(1) - b);
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2999 */
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl___HYPHEN_7(int64_t b) {
#line 3000 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp8;
#line 3000 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (INT64(9223372036854775807) - b);
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2999 */
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl___HYPHEN_9(int64_t b) {
#line 3000 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp8;
#line 3000 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (INT64(0) - b);
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:2999 */
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl___HYPHEN_8(int64_t b) {
#line 3000 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp8;
#line 3000 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (INT64(63) - b);
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3007 */
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t chpl___ASTERISK_5(uint64_t a) {
#line 3008 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp8;
#line 3008 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a * UINT64(1));
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3013 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3013 */
#line 3013 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl___ASTERISK_6(int64_t a) {
#line 3014 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp8;
#line 3014 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a * INT64(1));
#line 3013 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 3013 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3034 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3034 */
#line 3034 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t chpl___SLASH_4(uint64_t b,
#line 3034 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               int64_t _ln,
#line 3034 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               int32_t _fn) {
#line 3036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 3038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 3036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_18(b, INT64(0), _ln, _fn);
#line 3036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 3036 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3037 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    halt(&_str_literal_375, _ln, _fn);
#line 3037 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 3038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = (UINT64(18446744073709551615) / b);
#line 3034 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 3034 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3034 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3034 */
#line 3034 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static uint64_t chpl___SLASH_3(uint64_t b,
#line 3034 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               int64_t _ln,
#line 3034 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               int32_t _fn) {
#line 3036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 3038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  uint64_t call_tmp9;
#line 3036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EQUALS_18(b, INT64(0), _ln, _fn);
#line 3036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (call_tmp8) /* ZLINE: 3036 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3037 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    halt(&_str_literal_375, _ln, _fn);
#line 3037 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 3038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp9 = (UINT64(0) / b);
#line 3034 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp9;
#line 3034 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3097 */
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_16(uint8_t a,
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int8_t b,
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int64_t _ln,
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int32_t _fn) {
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T;
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T2;
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___LESS_(b, INT64(0));
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = chpl___EXCLAMATION_(call_tmp8);
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (T) /* ZLINE: 3097 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = chpl___EQUALS_4(a, ((uint8_t)(b)));
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 3097 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = UINT8(false);
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T2;
#line 3097 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3099 */
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_17(uint32_t a,
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int32_t b,
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int64_t _ln,
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int32_t _fn) {
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T;
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T2;
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___LESS_2(b, INT64(0));
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = chpl___EXCLAMATION_(call_tmp8);
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (T) /* ZLINE: 3099 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = chpl___EQUALS_5(a, ((uint32_t)(b)));
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 3099 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = UINT8(false);
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T2;
#line 3099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3100 */
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EQUALS_18(uint64_t a,
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int64_t b,
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int64_t _ln,
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int32_t _fn) {
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T;
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T2;
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___LESS_3(b, INT64(0));
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = chpl___EXCLAMATION_(call_tmp8);
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (T) /* ZLINE: 3100 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = chpl___EQUALS_6(a, ((uint64_t)(b)));
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 3100 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = UINT8(false);
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T2;
#line 3100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3117 */
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_7(uint8_t a,
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int8_t b,
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int64_t _ln,
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int32_t _fn) {
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T;
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T2;
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = chpl___LESS_(b, INT64(0));
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (T) /* ZLINE: 3117 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = UINT8(true);
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 3117 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = chpl___EXCLAMATION__ASSIGN_3(a, ((uint8_t)(b)));
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T2;
#line 3117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3120 */
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_8(uint64_t a,
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int64_t b,
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int64_t _ln,
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                              int32_t _fn) {
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T;
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T2;
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = chpl___LESS_3(b, INT64(0));
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (T) /* ZLINE: 3120 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = UINT8(true);
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 3120 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = chpl___EXCLAMATION__ASSIGN_4(a, ((uint64_t)(b)));
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T2;
#line 3120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3135 */
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___GREATER_4(uint32_t a,
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int32_t b,
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int64_t _ln,
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int32_t _fn) {
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T;
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T2;
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = chpl___LESS_2(b, INT64(0));
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (T) /* ZLINE: 3135 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = UINT8(true);
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 3135 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = chpl___GREATER_2(a, ((uint32_t)(b)));
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T2;
#line 3135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3136 */
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___GREATER_5(uint64_t a,
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int64_t b,
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int64_t _ln,
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                  int32_t _fn) {
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T;
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T2;
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = chpl___LESS_3(b, INT64(0));
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (T) /* ZLINE: 3136 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = UINT8(true);
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 3136 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = chpl___GREATER_3(a, ((uint64_t)(b)));
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T2;
#line 3136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3189 */
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___GREATER__ASSIGN_3(int64_t a,
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                          uint64_t b,
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                          int64_t _ln,
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                          int32_t _fn) {
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T;
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T2;
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___LESS_3(a, INT64(0));
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = chpl___EXCLAMATION_(call_tmp8);
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (T) /* ZLINE: 3189 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = chpl___GREATER__ASSIGN_2(((uint64_t)(a)), b);
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 3189 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = UINT8(false);
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T2;
#line 3189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3225 */
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___GREATER__ASSIGN_5(int64_t a) {
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a >= INT64(0));
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3225 */
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___GREATER__ASSIGN_4(int64_t a) {
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a >= INT64(64));
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3225 */
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___GREATER__ASSIGN_7(int64_t a) {
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a >= INT64(2));
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3225 */
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___GREATER__ASSIGN_6(int64_t a) {
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = (a >= INT64(1));
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 3225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3232 */
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl___LESS__ASSIGN_3(uint64_t a,
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int64_t b,
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int64_t _ln,
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                       int32_t _fn) {
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T;
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool T2;
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___LESS_3(b, INT64(0));
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = chpl___EXCLAMATION_(call_tmp8);
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (T) /* ZLINE: 3232 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = chpl___LESS__ASSIGN_2(a, ((uint64_t)(b)));
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  } else /* ZLINE: 3232 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    T2 = UINT8(false);
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T2;
#line 3232 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3313 */
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void init9(chpl_ModuleDeinit this24,
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                  c_string_rehook moduleName,
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                  c_fn_ptr_rehook deinitFun,
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                  chpl_ModuleDeinit prevModule,
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                  int64_t _ln,
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                  int32_t _fn) {
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  RootClass super_tmp = NULL;
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  super_tmp = &((this24)->super);
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  init5(super_tmp);
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ((RootClass)(((RootClass)(this24))))->chpl__cid = chpl__cid_RootClass;
#line 3314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  (this24)->moduleName = moduleName;
#line 3315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  (this24)->deinitFun = deinitFun;
#line 3316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  (this24)->prevModule = prevModule;
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_chpl_ModuleDeinit;
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3313 */
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__auto_destroy_chpl_ModuleDeinit(chpl_ModuleDeinit this24,
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                 int64_t _ln,
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                 int32_t _fn) {
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3313 */
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_ModuleDeinit _new2(c_string_rehook moduleName,
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               c_fn_ptr_rehook deinitFun,
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               chpl_ModuleDeinit prevModule,
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               int64_t _ln,
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                               int32_t _fn) {
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_ModuleDeinit initTemp = NULL;
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  c_ptr_void cast_tmp = NULL;
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_ModuleDeinit T = NULL;
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_chpl_ModuleDeinit_object), INT16(60), _ln, _fn);
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  initTemp = ((chpl_ModuleDeinit)(cast_tmp));
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_chpl_ModuleDeinit;
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  init9(initTemp, moduleName, deinitFun, prevModule, _ln, _fn);
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  T = initTemp;
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return T;
#line 3313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3315 */
#line 3315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static c_fn_ptr_rehook * chpl_get_chpl_ModuleDeinit_deinitFun(chpl_ModuleDeinit this24,
#line 3315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                              int64_t _ln,
#line 3315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                              int32_t _fn) {
#line 3315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_c_fn_ptr_rehook call_tmp8 = NULL;
#line 3315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = &((this24)->deinitFun);
#line 3315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 3315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3316 */
#line 3316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_ModuleDeinit * chpl_get_chpl_ModuleDeinit_prevModule(chpl_ModuleDeinit this24,
#line 3316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                                 int64_t _ln,
#line 3316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                                                 int32_t _fn) {
#line 3316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_chpl_ModuleDeinit call_tmp8 = NULL;
#line 3316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = &((this24)->prevModule);
#line 3316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 3316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static PermissionError _to_unmanaged20(PermissionError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error _to_unmanaged12(Error arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BrokenPipeError _to_unmanaged60(BrokenPipeError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionAbortedError _to_unmanaged64(ConnectionAbortedError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionRefusedError _to_unmanaged51(ConnectionRefusedError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionResetError _to_unmanaged50(ConnectionResetError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static FileExistsError _to_unmanaged44(FileExistsError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static FileNotFoundError _to_unmanaged40(FileNotFoundError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static InterruptedError _to_unmanaged33(InterruptedError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IsADirectoryError _to_unmanaged19(IsADirectoryError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static NotADirectoryError _to_unmanaged7(NotADirectoryError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BlockingIoError _to_unmanaged57(BlockingIoError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ProcessLookupError _to_unmanaged54(ProcessLookupError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static TimeoutError _to_unmanaged56(TimeoutError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IoError _to_unmanaged49(IoError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static EofError _to_unmanaged36(EofError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static UnexpectedEofError _to_unmanaged28(UnexpectedEofError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BadFormatError _to_unmanaged29(BadFormatError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static SystemError _to_unmanaged23(SystemError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _serializeWrapper_defaultDeserializer _to_unmanaged4(_serializeWrapper_defaultDeserializer arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _serializeWrapper_defaultSerializer _to_unmanaged38(_serializeWrapper_defaultSerializer arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static DefaultDist _to_unmanaged41(DefaultDist arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static DefaultDist _to_unmanaged6(DefaultDist arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static DefaultRectangularDom_1_int64_t_one _to_unmanaged24(DefaultRectangularDom_1_int64_t_one arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseArrOverRectangularDom_1_int64_t_one _to_unmanaged22(BaseArrOverRectangularDom_1_int64_t_one arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl___EndCount_AtomicT_int64_t_int64_t _to_unmanaged17(chpl___EndCount_AtomicT_int64_t_int64_t arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static TaskErrors _to_unmanaged62(TaskErrors arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static AbstractLocaleModel _to_unmanaged21(AbstractLocaleModel arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseLocale _to_unmanaged55(BaseLocale arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseLocale _to_unmanaged18(BaseLocale arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl___RemoteVarContainer_R _to_unmanaged45(chpl___RemoteVarContainer_R arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl___RemoteVarContainer_R _to_unmanaged46(chpl___RemoteVarContainer_R arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseArr _to_unmanaged34(BaseArr arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseDom _to_unmanaged8(BaseDom arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseDist _to_unmanaged48(BaseDist arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IllegalArgumentError _to_unmanaged25(IllegalArgumentError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static DecodeError _to_unmanaged59(DecodeError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static EofError _to_unmanaged42(EofError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static UnexpectedEofError _to_unmanaged32(UnexpectedEofError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BadFormatError _to_unmanaged26(BadFormatError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BlockingIoError _to_unmanaged5(BlockingIoError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ChildProcessError _to_unmanaged66(ChildProcessError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BrokenPipeError _to_unmanaged47(BrokenPipeError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionAbortedError _to_unmanaged52(ConnectionAbortedError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionRefusedError _to_unmanaged61(ConnectionRefusedError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionResetError _to_unmanaged2(ConnectionResetError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static FileExistsError _to_unmanaged(FileExistsError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static FileNotFoundError _to_unmanaged43(FileNotFoundError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static InterruptedError _to_unmanaged39(InterruptedError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IsADirectoryError _to_unmanaged35(IsADirectoryError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static NotADirectoryError _to_unmanaged31(NotADirectoryError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static PermissionError _to_unmanaged27(PermissionError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ProcessLookupError _to_unmanaged3(ProcessLookupError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static TimeoutError _to_unmanaged10(TimeoutError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IoError _to_unmanaged13(IoError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static SystemError _to_unmanaged16(SystemError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static CodepointSplitError _to_unmanaged14(CodepointSplitError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static TaskErrors _to_unmanaged30(TaskErrors arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Remote_R _to_unmanaged65(Remote_R arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static NilClassError _to_unmanaged53(NilClassError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseRectangularArr_1_int64_t_one_locale _to_unmanaged9(BaseRectangularArr_1_int64_t_one_locale arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseRectangularArr_1_int64_t_one_int64_t _to_unmanaged11(BaseRectangularArr_1_int64_t_one_int64_t arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseRectangularArr_1_int64_t_one_uint64_t _to_unmanaged15(BaseRectangularArr_1_int64_t_one_uint64_t arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IllegalArgumentError _to_unmanaged37(IllegalArgumentError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error _to_unmanaged63(Error arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3368 */
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ChildProcessError _to_unmanaged58(ChildProcessError arg) {
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static TimeoutError _to_borrowed11(TimeoutError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error _to_borrowed(Error arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static AbstractRootLocale _to_borrowed23(AbstractRootLocale arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static EofError _to_borrowed33(EofError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static UnexpectedEofError _to_borrowed32(UnexpectedEofError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BadFormatError _to_borrowed31(BadFormatError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BlockingIoError _to_borrowed30(BlockingIoError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ChildProcessError _to_borrowed29(ChildProcessError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BrokenPipeError _to_borrowed28(BrokenPipeError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionAbortedError _to_borrowed24(ConnectionAbortedError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionRefusedError _to_borrowed22(ConnectionRefusedError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionResetError _to_borrowed21(ConnectionResetError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static FileExistsError _to_borrowed19(FileExistsError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static FileNotFoundError _to_borrowed18(FileNotFoundError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static InterruptedError _to_borrowed15(InterruptedError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IsADirectoryError _to_borrowed14(IsADirectoryError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static NotADirectoryError _to_borrowed13(NotADirectoryError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static PermissionError _to_borrowed12(PermissionError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ProcessLookupError _to_borrowed7(ProcessLookupError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static DecodeError _to_borrowed9(DecodeError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IoError _to_borrowed8(IoError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static SystemError _to_borrowed5(SystemError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _serializeWrapper_defaultDeserializer _to_borrowed16(_serializeWrapper_defaultDeserializer arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ReferenceCount _to_borrowed35(ReferenceCount arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _serializeWrapper_defaultSerializer _to_borrowed20(_serializeWrapper_defaultSerializer arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static CodepointSplitError _to_borrowed27(CodepointSplitError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseArr _to_borrowed26(BaseArr arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseArrOverRectangularDom_1_int64_t_one _to_borrowed34(BaseArrOverRectangularDom_1_int64_t_one arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static TaskErrors _to_borrowed40(TaskErrors arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static RootLocale _to_borrowed17(RootLocale arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static AbstractLocaleModel _to_borrowed42(AbstractLocaleModel arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl___RemoteVarContainer_R _to_borrowed41(chpl___RemoteVarContainer_R arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl___RemoteVarContainer_R _to_borrowed10(chpl___RemoteVarContainer_R arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static NilClassError _to_borrowed6(NilClassError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Remote_R _to_borrowed2(Remote_R arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_ModuleDeinit _to_borrowed4(chpl_ModuleDeinit arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static QioPluginFile _to_borrowed38(QioPluginFile arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static QioPluginChannel _to_borrowed37(QioPluginChannel arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseDom _to_borrowed36(BaseDom arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IllegalArgumentError _to_borrowed25(IllegalArgumentError arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error _to_borrowed3(Error arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3378 */
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseLocale _to_borrowed39(BaseLocale arg) {
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static InterruptedError _to_nonnil34(InterruptedError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error _to_nonnil24(Error arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BlockingIoError _to_nonnil2(BlockingIoError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ChildProcessError _to_nonnil32(ChildProcessError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BrokenPipeError _to_nonnil28(BrokenPipeError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionAbortedError _to_nonnil19(ConnectionAbortedError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionRefusedError _to_nonnil38(ConnectionRefusedError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ConnectionResetError _to_nonnil17(ConnectionResetError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static FileExistsError _to_nonnil26(FileExistsError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static FileNotFoundError _to_nonnil31(FileNotFoundError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseLocale _to_nonnil11(BaseLocale arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IsADirectoryError _to_nonnil22(IsADirectoryError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static NotADirectoryError _to_nonnil8(NotADirectoryError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static PermissionError _to_nonnil21(PermissionError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ProcessLookupError _to_nonnil3(ProcessLookupError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static TimeoutError _to_nonnil33(TimeoutError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IoError _to_nonnil35(IoError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static EofError _to_nonnil36(EofError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static UnexpectedEofError _to_nonnil7(UnexpectedEofError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BadFormatError _to_nonnil25(BadFormatError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static SystemError _to_nonnil20(SystemError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static ReferenceCount _to_nonnil29(ReferenceCount arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _serializeWrapper_defaultDeserializer _to_nonnil9(_serializeWrapper_defaultDeserializer arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static _serializeWrapper_defaultSerializer _to_nonnil23(_serializeWrapper_defaultSerializer arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseArr _to_nonnil27(BaseArr arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseArrOverRectangularDom_1_int64_t_one _to_nonnil13(BaseArrOverRectangularDom_1_int64_t_one arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static RootLocale _to_nonnil(RootLocale arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static AbstractLocaleModel _to_nonnil37(AbstractLocaleModel arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl___RemoteVarContainer_R _to_nonnil18(chpl___RemoteVarContainer_R arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl___RemoteVarContainer_R _to_nonnil5(chpl___RemoteVarContainer_R arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Remote_R _to_nonnil15(Remote_R arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_ModuleDeinit _to_nonnil30(chpl_ModuleDeinit arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static QioPluginFile _to_nonnil6(QioPluginFile arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static QioPluginChannel _to_nonnil16(QioPluginChannel arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseDom _to_nonnil12(BaseDom arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IllegalArgumentError _to_nonnil4(IllegalArgumentError arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error _to_nonnil14(Error arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3388 */
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static AbstractRootLocale _to_nonnil10(AbstractRootLocale arg) {
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3397 */
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static RootLocale _to_nilable(RootLocale arg) {
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3397 */
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static AbstractLocaleModel _to_nilable4(AbstractLocaleModel arg) {
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3397 */
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static TaskErrors _to_nilable5(TaskErrors arg) {
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3397 */
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseArrOverRectangularDom_1_int64_t_one _to_nilable3(BaseArrOverRectangularDom_1_int64_t_one arg) {
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3397 */
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static AbstractRootLocale _to_nilable2(AbstractRootLocale arg) {
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3402 */
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static IllegalArgumentError chpl_checkBorrowIfVar2(_owned_IllegalArgumentError2 * arg) {
#line 3406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  IllegalArgumentError call_tmp8 = NULL;
#line 3406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = borrow4(arg);
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3402 */
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseArr chpl_checkBorrowIfVar4(BaseArr arg) {
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3402 */
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static BaseArrOverRectangularDom_1_int64_t_one chpl_checkBorrowIfVar(BaseArrOverRectangularDom_1_int64_t_one arg) {
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3402 */
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static Error chpl_checkBorrowIfVar3(Error arg) {
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3402 */
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static TaskErrors chpl_checkBorrowIfVar5(TaskErrors arg) {
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return arg;
#line 3402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3418 */
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static string _removed_cast(string * x2) {
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  string _formal_tmp_x;
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _formal_tmp_x = *(x2);
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return _formal_tmp_x;
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3418 */
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static range_int64_t_both_one _removed_cast3(range_int64_t_both_one * x2) {
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  range_int64_t_both_one _formal_tmp_x;
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _formal_tmp_x = *(x2);
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return _formal_tmp_x;
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3418 */
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static range_int64_t_low_one _removed_cast2(range_int64_t_low_one * x2) {
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  range_int64_t_low_one _formal_tmp_x;
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _formal_tmp_x = *(x2);
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return _formal_tmp_x;
#line 3418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3435 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3435 */
#line 3435 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static int64_t chpl_boundedCoforallSize(range_int64_t_both_one iterable,
#line 3435 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                        int64_t _ln,
#line 3435 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                        int32_t _fn) {
#line 3439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  int64_t call_tmp8;
#line 3439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = size3(iterable, _ln, _fn);
#line 3435 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 3435 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:3451 */
#line 3451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static chpl_bool chpl_field_neq(BaseLocale a,
#line 3451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                BaseLocale b,
#line 3451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int64_t _ln,
#line 3451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                int32_t _fn) {
#line 3452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 3452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_5(((RootClass)(a)), ((RootClass)(b)));
#line 3451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return call_tmp8;
#line 3451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3537 */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void coforall_fn(int64_t len,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                        int64_t numChunks,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                        range_int64_t_both_one this24,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                        chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                        int64_t chunk,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                        _ddata_locale x2,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                        int64_t _ln,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                        int32_t _fn) {
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _tuple_2_star_int64_t ret_tmp;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _tuple_2_star_int64_t T;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_range_iter3 _iterator = NULL;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_range_iter3 call_tmp11;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_range_iter3 ret_tmp2;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one taskInd_this;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator2 = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp12;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp3;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low3;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 3553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp13;
#line 1571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  locale y;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__high3(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_get_range__low2(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl_get_range__low2(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _computeBlock2(len, numChunks, chunk, *(call_tmp8), *(call_tmp9), *(call_tmp10), &ret_tmp, _ln, _fn);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  *(T + INT64(0)) = *(ret_tmp + INT64(0));
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  *(T + INT64(1)) = *(ret_tmp + INT64(1));
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_range_iter3(*(T + INT64(0)), *(T + INT64(1)), &ret_tmp2);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = ret_tmp2;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator = _getIterator9(&call_tmp11, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  taskInd_this = this24;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low3 = (_iterator)->F0_low;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_param_stride_range_iter(low3, (_iterator)->F1_high, &ret_tmp3);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = ret_tmp3;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator2 = _getIterator13(&call_tmp12, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator2)->F0_low);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator2)->F1_high);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low4 = (_iterator2)->F0_low;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_checkIfRangeIterWillOverflow(low4, (_iterator2)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  high2 = (_iterator2)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (chpl_check_nil(_iterator2, _ln, _fn),i = (_iterator2)->F0_low; ((i <= high2)); i += INT64(1)) {
#line 3553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp13 = chpl_intToIdx3(taskInd_this, i);
#line 1571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    init24(&y, _ln, _fn);
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    *(x2 + call_tmp13) = y;
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator19(_iterator2, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator10(_iterator, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy58(&T);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__autoDestroy27(x2);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3537 */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void coforall_fn2(int64_t len,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         int64_t numChunks,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         range_int64_t_both_one this24,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         int64_t chunk,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         _ddata_int64_t x2,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         int64_t _ln,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         int32_t _fn) {
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _tuple_2_star_int64_t ret_tmp;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _tuple_2_star_int64_t T;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_range_iter3 _iterator = NULL;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_range_iter3 call_tmp11;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_range_iter3 ret_tmp2;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one taskInd_this;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator2 = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp12;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp3;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low3;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 3553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp13;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__high3(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_get_range__low2(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl_get_range__low2(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _computeBlock2(len, numChunks, chunk, *(call_tmp8), *(call_tmp9), *(call_tmp10), &ret_tmp, _ln, _fn);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  *(T + INT64(0)) = *(ret_tmp + INT64(0));
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  *(T + INT64(1)) = *(ret_tmp + INT64(1));
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_range_iter3(*(T + INT64(0)), *(T + INT64(1)), &ret_tmp2);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = ret_tmp2;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator = _getIterator9(&call_tmp11, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  taskInd_this = this24;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low3 = (_iterator)->F0_low;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_param_stride_range_iter(low3, (_iterator)->F1_high, &ret_tmp3);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = ret_tmp3;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator2 = _getIterator13(&call_tmp12, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator2)->F0_low);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator2)->F1_high);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low4 = (_iterator2)->F0_low;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_checkIfRangeIterWillOverflow(low4, (_iterator2)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  high2 = (_iterator2)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (chpl_check_nil(_iterator2, _ln, _fn),i = (_iterator2)->F0_low; ((i <= high2)); i += INT64(1)) {
#line 3553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp13 = chpl_intToIdx3(taskInd_this, i);
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    *(x2 + call_tmp13) = INT64(0);
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator19(_iterator2, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator10(_iterator, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy58(&T);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__autoDestroy18(x2);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3537 */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void coforall_fn4(int64_t len,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         int64_t numChunks,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         range_int64_t_both_one this24,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         int64_t chunk,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         _ddata_uint64_t x2,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         int64_t _ln,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         int32_t _fn) {
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _tuple_2_star_int64_t ret_tmp;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _tuple_2_star_int64_t T;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_range_iter3 _iterator = NULL;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_range_iter3 call_tmp11;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_range_iter3 ret_tmp2;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one taskInd_this;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator2 = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp12;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp3;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low3;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 3553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp13;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__high3(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_get_range__low2(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl_get_range__low2(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _computeBlock2(len, numChunks, chunk, *(call_tmp8), *(call_tmp9), *(call_tmp10), &ret_tmp, _ln, _fn);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  *(T + INT64(0)) = *(ret_tmp + INT64(0));
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  *(T + INT64(1)) = *(ret_tmp + INT64(1));
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_range_iter3(*(T + INT64(0)), *(T + INT64(1)), &ret_tmp2);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = ret_tmp2;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator = _getIterator9(&call_tmp11, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  taskInd_this = this24;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low3 = (_iterator)->F0_low;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_param_stride_range_iter(low3, (_iterator)->F1_high, &ret_tmp3);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = ret_tmp3;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator2 = _getIterator13(&call_tmp12, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator2)->F0_low);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator2)->F1_high);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low4 = (_iterator2)->F0_low;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_checkIfRangeIterWillOverflow(low4, (_iterator2)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  high2 = (_iterator2)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (chpl_check_nil(_iterator2, _ln, _fn),i = (_iterator2)->F0_low; ((i <= high2)); i += INT64(1)) {
#line 3553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp13 = chpl_intToIdx3(taskInd_this, i);
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    *(x2 + call_tmp13) = UINT64(0);
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator19(_iterator2, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator10(_iterator, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy58(&T);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__autoDestroy42(x2);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3537 */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void coforall_fn3(int64_t len,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         int64_t numChunks,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         range_int64_t_both_one this24,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         int64_t chunk,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         _ddata_locale oldDdata,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         int64_t _ln,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         int32_t _fn) {
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _tuple_2_star_int64_t ret_tmp;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _tuple_2_star_int64_t T;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_range_iter3 _iterator = NULL;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_range_iter3 call_tmp11;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_range_iter3 ret_tmp2;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one taskInd_this;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator2 = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp12;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp3;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low3;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 3553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp13;
#line 1772 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_locale call_tmp14 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__high3(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_get_range__low2(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl_get_range__low2(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _computeBlock2(len, numChunks, chunk, *(call_tmp8), *(call_tmp9), *(call_tmp10), &ret_tmp, _ln, _fn);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  *(T + INT64(0)) = *(ret_tmp + INT64(0));
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  *(T + INT64(1)) = *(ret_tmp + INT64(1));
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_range_iter3(*(T + INT64(0)), *(T + INT64(1)), &ret_tmp2);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = ret_tmp2;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator = _getIterator9(&call_tmp11, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  taskInd_this = this24;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low3 = (_iterator)->F0_low;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_param_stride_range_iter(low3, (_iterator)->F1_high, &ret_tmp3);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = ret_tmp3;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator2 = _getIterator13(&call_tmp12, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator2)->F0_low);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator2)->F1_high);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low4 = (_iterator2)->F0_low;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_checkIfRangeIterWillOverflow(low4, (_iterator2)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  high2 = (_iterator2)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (chpl_check_nil(_iterator2, _ln, _fn),i = (_iterator2)->F0_low; ((i <= high2)); i += INT64(1)) {
#line 3553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp13 = chpl_intToIdx3(taskInd_this, i);
#line 1772 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl_check_nil(oldDdata, _ln, _fn);
#line 1772 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    call_tmp14 = this7(oldDdata, call_tmp13);
#line 1772 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__autoDestroy45(call_tmp14);
#line 1772 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator19(_iterator2, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator10(_iterator, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy58(&T);
#line 1771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__autoDestroy27(oldDdata);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3537 */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void wrapcoforall_fn3(_class_localscoforall_fn c) {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int32_t _fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _0_len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _1_numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one _2_call_tmp;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _4_chunk;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _fn = (c)->_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ln = (c)->_ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_rmem_consist_acquire(_ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _0_len = (c)->_0_len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _1_numChunks = (c)->_1_numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _2_call_tmp = (c)->_2_call_tmp;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _3__coforallCount = (c)->_3__coforallCount;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _4_chunk = (c)->_4_chunk;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coforall_fn(_0_len, _1_numChunks, _2_call_tmp, _3__coforallCount, _4_chunk, (c)->_5_x, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _downEndCount((c)->_3__coforallCount, nil, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3537 */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void wrapcoforall_fn4(_class_localscoforall_fn2 c) {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int32_t _fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _0_len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _1_numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one _2_call_tmp;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _4_chunk;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _fn = (c)->_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ln = (c)->_ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_rmem_consist_acquire(_ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _0_len = (c)->_0_len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _1_numChunks = (c)->_1_numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _2_call_tmp = (c)->_2_call_tmp;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _3__coforallCount = (c)->_3__coforallCount;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _4_chunk = (c)->_4_chunk;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coforall_fn2(_0_len, _1_numChunks, _2_call_tmp, _3__coforallCount, _4_chunk, (c)->_5_x, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _downEndCount((c)->_3__coforallCount, nil, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3537 */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void wrapcoforall_fn2(_class_localscoforall_fn3 c) {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int32_t _fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _0_len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _1_numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one _2_call_tmp;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _4_chunk;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _fn = (c)->_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ln = (c)->_ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_rmem_consist_acquire(_ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _0_len = (c)->_0_len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _1_numChunks = (c)->_1_numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _2_call_tmp = (c)->_2_call_tmp;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _3__coforallCount = (c)->_3__coforallCount;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _4_chunk = (c)->_4_chunk;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coforall_fn4(_0_len, _1_numChunks, _2_call_tmp, _3__coforallCount, _4_chunk, (c)->_5_x, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _downEndCount((c)->_3__coforallCount, nil, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3537 */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void wrapcoforall_fn(_class_localscoforall_fn4 c) {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int32_t _fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _0_len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _1_numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one _2_call_tmp;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _4_chunk;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _fn = (c)->_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ln = (c)->_ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_rmem_consist_acquire(_ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _0_len = (c)->_0_len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _1_numChunks = (c)->_1_numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _2_call_tmp = (c)->_2_call_tmp;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _3__coforallCount = (c)->_3__coforallCount;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _4_chunk = (c)->_4_chunk;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coforall_fn3(_0_len, _1_numChunks, _2_call_tmp, _3__coforallCount, _4_chunk, (c)->_5_oldDdata, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _downEndCount((c)->_3__coforallCount, nil, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

