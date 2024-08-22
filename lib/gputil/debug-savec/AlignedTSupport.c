#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
/* ChapelSyncvar.chpl:1217 */
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
static void chpl__init_AlignedTSupport(int64_t _ln,
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
                                       int32_t _fn) {
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
  if (chpl__init_AlignedTSupport_p) /* ZLINE: 1217 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl */
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
  {
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
    goto _exit_chpl__init_AlignedTSupport;
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
  }
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
  printModuleInit("%*s\n", "AlignedTSupport", INT64(15), _ln, _fn);
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
  refIndentLevel = &moduleInitLevel;
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
  *(refIndentLevel) += INT64(1);
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
  chpl__init_AlignedTSupport_p = UINT8(true);
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
  *(refIndentLevel) -= INT64(1);
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
  _exit_chpl__init_AlignedTSupport:;
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
  return;
#line 1217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelSyncvar.chpl"
}

