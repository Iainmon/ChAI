#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
/* LocaleModelHelpMem.chpl:30 */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
static void chpl__init_LocaleModelHelpMem(int64_t _ln,
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                                          int32_t _fn) {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  if (chpl__init_LocaleModelHelpMem_p) /* ZLINE: 30 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
    goto _exit_chpl__init_LocaleModelHelpMem;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  }
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  printModuleInit("%*s\n", "LocaleModelHelpMem", INT64(18), _ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  refIndentLevel = &moduleInitLevel;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  *(refIndentLevel) += INT64(1);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  chpl__init_LocaleModelHelpMem_p = UINT8(true);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  }
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  *(refIndentLevel) -= INT64(1);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  _exit_chpl__init_LocaleModelHelpMem:;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  return;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
}

#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
/* LocaleModelHelpMem.chpl:53 */
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
static void * chpl_here_alloc(int64_t size5,
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                              int16_t md,
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                              int64_t _ln,
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                              int32_t _fn) {
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  uint64_t call_tmp8;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  int16_t call_tmp9;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  int16_t call_tmp10;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  c_ptr_void call_tmp11 = NULL;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp8 = safeCast5(size5, _ln, _fn);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp9 = chpl_memhook_md_num();
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp10 = chpl___PLUS_(md, call_tmp9);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp11 = chpl_mem_alloc(call_tmp8, call_tmp10, _ln, _fn);
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  return call_tmp11;
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
}

#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
/* LocaleModelHelpMem.chpl:63 */
#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
static void * chpl_here_alloc2(uint64_t size5,
#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                               int16_t md,
#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                               int64_t _ln,
#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                               int32_t _fn) {
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  uint64_t call_tmp8;
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  int16_t call_tmp9;
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  int16_t call_tmp10;
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  c_ptr_void call_tmp11 = NULL;
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp8 = safeCast(size5, _ln, _fn);
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp9 = chpl_memhook_md_num();
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp10 = chpl___PLUS_(md, call_tmp9);
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp11 = chpl_mem_alloc(call_tmp8, call_tmp10, _ln, _fn);
#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  return call_tmp11;
#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
}

#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
/* LocaleModelHelpMem.chpl:73 */
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
static void * chpl_here_aligned_alloc(uint64_t alignment,
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                                      uint64_t size5,
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                                      int16_t md,
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                                      int64_t _ln,
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                                      int32_t _fn) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  uint64_t call_tmp8;
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  uint64_t call_tmp9;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  int16_t call_tmp10;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  int16_t call_tmp11;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  c_ptr_void call_tmp12 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp8 = safeCast(alignment, _ln, _fn);
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp9 = safeCast(size5, _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp10 = chpl_memhook_md_num();
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp11 = chpl___PLUS_(md, call_tmp10);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp12 = chpl_mem_memalign(call_tmp8, call_tmp9, call_tmp11, _ln, _fn);
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  return call_tmp12;
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
}

#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
/* LocaleModelHelpMem.chpl:86 */
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
static void * chpl_here_calloc(uint64_t size5,
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                               int64_t number,
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                               int16_t md,
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                               int64_t _ln,
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                               int32_t _fn) {
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  uint64_t call_tmp8;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  uint64_t call_tmp9;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  int16_t call_tmp10;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  int16_t call_tmp11;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  c_ptr_void call_tmp12 = NULL;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp8 = safeCast5(number, _ln, _fn);
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp9 = safeCast(size5, _ln, _fn);
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp10 = chpl_memhook_md_num();
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp11 = chpl___PLUS_(md, call_tmp10);
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp12 = chpl_mem_calloc(call_tmp8, call_tmp9, call_tmp11, _ln, _fn);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  return call_tmp12;
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
}

#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
/* LocaleModelHelpMem.chpl:95 */
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
static void * chpl_here_realloc(void * ptr,
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                                int64_t size5,
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                                int16_t md,
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                                int64_t _ln,
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                                int32_t _fn) {
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  uint64_t call_tmp8;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  int16_t call_tmp9;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  int16_t call_tmp10;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  c_ptr_void call_tmp11 = NULL;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp8 = safeCast5(size5, _ln, _fn);
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp9 = chpl_memhook_md_num();
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp10 = chpl___PLUS_(md, call_tmp9);
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp11 = chpl_mem_realloc(ptr, call_tmp8, call_tmp10, _ln, _fn);
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  return call_tmp11;
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
}

#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
/* LocaleModelHelpMem.chpl:104 */
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
static int64_t chpl_here_good_alloc_size(int64_t min_size,
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                                         int64_t _ln,
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                                         int32_t _fn) {
#line 108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  uint64_t call_tmp8;
#line 108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  uint64_t call_tmp9;
#line 108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  int64_t call_tmp10;
#line 108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp8 = safeCast5(min_size, _ln, _fn);
#line 108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp9 = chpl_mem_good_alloc_size(call_tmp8, _ln, _fn);
#line 108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  call_tmp10 = safeCast4(call_tmp9, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  return call_tmp10;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
}

#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
/* LocaleModelHelpMem.chpl:113 */
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
static void chpl_here_free(void * ptr,
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                           int64_t _ln,
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
                           int32_t _fn) {
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  chpl_mem_free(ptr, _ln, _fn);
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
  return;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpMem.chpl"
}

