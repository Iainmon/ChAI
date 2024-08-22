#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:22 */
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void chpl__init_SharedObject(int64_t _ln,
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                    int32_t _fn) {
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (chpl__init_SharedObject_p) /* ZLINE: 22 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    goto _exit_chpl__init_SharedObject;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  printModuleInit("%*s\n", "SharedObject", INT64(12), _ln, _fn);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  refIndentLevel = &moduleInitLevel;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  *(refIndentLevel) += INT64(1);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl__init_SharedObject_p = UINT8(true);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl__init_Errors(_ln, _fn);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl__init_Atomics(_ln, _fn);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl__init_OwnedObject(_ln, _fn);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  *(refIndentLevel) -= INT64(1);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _exit_chpl__init_SharedObject:;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:33 */
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void chpl__auto_destroy_ReferenceCount(ReferenceCount this24,
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                              int64_t _ln,
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                              int32_t _fn) {
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_AtomicT_int64_t _field_destructor_tmp_ = NULL;
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_AtomicT_int64_t _field_destructor_tmp_2 = NULL;
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _field_destructor_tmp_ = &((this24)->totalCount);
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  deinit2(_field_destructor_tmp_);
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _field_destructor_tmp_2 = &((this24)->strongCount);
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  deinit2(_field_destructor_tmp_2);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:35 */
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static AtomicT_int64_t * chpl_get_ReferenceCount_strongCount(ReferenceCount this24,
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                                             int64_t _ln,
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                                             int32_t _fn) {
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = &((this24)->strongCount);
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return call_tmp8;
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:37 */
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static AtomicT_int64_t * chpl_get_ReferenceCount_totalCount(ReferenceCount this24,
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                                            int64_t _ln,
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                                            int32_t _fn) {
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = &((this24)->totalCount);
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return call_tmp8;
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:43 */
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void init89(ReferenceCount this24,
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                   int64_t _ln,
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                   int32_t _fn) {
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  RootClass super_tmp = NULL;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  AtomicT_int64_t strongCount;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  AtomicT_int64_t totalCount;
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_AtomicT_int64_t call_tmp9 = NULL;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  super_tmp = &((this24)->super);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  init5(super_tmp);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ((RootClass)(((RootClass)(this24))))->chpl__cid = chpl__cid_RootClass;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  init2(&strongCount);
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  (this24)->strongCount = strongCount;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  init2(&totalCount);
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  (this24)->totalCount = totalCount;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_ReferenceCount;
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get_ReferenceCount_strongCount(this24, _ln, _fn);
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  write3(call_tmp8, INT64(1), _ln, _fn);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp9 = chpl_get_ReferenceCount_totalCount(this24, _ln, _fn);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  write3(call_tmp9, INT64(1), _ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:43 */
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static ReferenceCount _new11(int64_t _ln,
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                             int32_t _fn) {
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount initTemp = NULL;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  c_ptr_void cast_tmp = NULL;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount T = NULL;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_ReferenceCount_object), INT16(28), _ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  initTemp = ((ReferenceCount)(cast_tmp));
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_ReferenceCount;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  init89(initTemp, _ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  T = initTemp;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return T;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:50 */
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void retain(ReferenceCount this24,
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                   int64_t _ln,
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                   int32_t _fn) {
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_AtomicT_int64_t call_tmp9 = NULL;
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get_ReferenceCount_strongCount(this24, _ln, _fn);
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  add3(call_tmp8, INT64(1), _ln, _fn);
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp9 = chpl_get_ReferenceCount_totalCount(this24, _ln, _fn);
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  add3(call_tmp9, INT64(1), _ln, _fn);
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:56 */
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static int64_t releaseStrong(ReferenceCount this24,
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                             int64_t _ln,
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                             int32_t _fn) {
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  int64_t call_tmp9;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  int64_t call_tmp10;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get_ReferenceCount_strongCount(this24, _ln, _fn);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp9 = fetchSub(call_tmp8, INT64(1), _ln, _fn);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp10 = chpl___HYPHEN_6(call_tmp9);
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return call_tmp10;
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:61 */
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static int64_t releaseTotal(ReferenceCount this24,
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                            int64_t _ln,
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                            int32_t _fn) {
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  int64_t call_tmp9;
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  int64_t call_tmp10;
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get_ReferenceCount_totalCount(this24, _ln, _fn);
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp9 = fetchSub(call_tmp8, INT64(1), _ln, _fn);
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp10 = chpl___HYPHEN_6(call_tmp9);
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return call_tmp10;
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:125 */
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static _serializeWrapper_defaultDeserializer * chpl_get__shared_chpl_p(_shared__serializeWrapper_defaultDeserializer * this24) {
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultDeserializer call_tmp8 = NULL;
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return call_tmp8;
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:125 */
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static _serializeWrapper_defaultDeserializer * chpl_get__shared_chpl_p3(_shared__serializeWrapper_defaultDeserializer2 * this24) {
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultDeserializer call_tmp8 = NULL;
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return call_tmp8;
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:125 */
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static _serializeWrapper_defaultSerializer * chpl_get__shared_chpl_p2(_shared__serializeWrapper_defaultSerializer2 * this24) {
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultSerializer call_tmp8 = NULL;
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return call_tmp8;
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:125 */
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static _serializeWrapper_defaultSerializer * chpl_get__shared_chpl_p4(_shared__serializeWrapper_defaultSerializer * this24) {
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultSerializer call_tmp8 = NULL;
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return call_tmp8;
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:131 */
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static ReferenceCount * chpl_get__shared_chpl_pn2(_shared__serializeWrapper_defaultDeserializer * this24) {
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp8 = NULL;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = &((this24)->chpl_pn);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return call_tmp8;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:131 */
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static ReferenceCount * chpl_get__shared_chpl_pn3(_shared__serializeWrapper_defaultDeserializer2 * this24) {
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp8 = NULL;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = &((this24)->chpl_pn);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return call_tmp8;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:131 */
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static ReferenceCount * chpl_get__shared_chpl_pn4(_shared__serializeWrapper_defaultSerializer2 * this24) {
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp8 = NULL;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = &((this24)->chpl_pn);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return call_tmp8;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:131 */
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static ReferenceCount * chpl_get__shared_chpl_pn(_shared__serializeWrapper_defaultSerializer * this24) {
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp8 = NULL;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = &((this24)->chpl_pn);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return call_tmp8;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:137 */
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void init90(_shared__serializeWrapper_defaultDeserializer2 * this24,
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                   int64_t _ln,
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                   int32_t _fn) {
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _serializeWrapper_defaultDeserializer init_coerce_tmp = NULL;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount init_coerce_tmp2 = NULL;
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  init_coerce_tmp = ((_serializeWrapper_defaultDeserializer)(nil));
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  init_coerce_tmp2 = ((ReferenceCount)(nil));
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  (this24)->chpl_pn = init_coerce_tmp2;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:137 */
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void init91(_shared__serializeWrapper_defaultSerializer * this24,
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                   int64_t _ln,
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                   int32_t _fn) {
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _serializeWrapper_defaultSerializer init_coerce_tmp = NULL;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount init_coerce_tmp2 = NULL;
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  init_coerce_tmp = ((_serializeWrapper_defaultSerializer)(nil));
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  init_coerce_tmp2 = ((ReferenceCount)(nil));
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  (this24)->chpl_pn = init_coerce_tmp2;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:157 */
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void init92(_shared__serializeWrapper_defaultDeserializer * this24,
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                   _serializeWrapper_defaultDeserializer p,
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                   int64_t _ln,
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                   int32_t _fn) {
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount rc = NULL;
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount init_coerce_tmp = NULL;
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp8;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount new_temp = NULL;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _serializeWrapper_defaultDeserializer call_tmp9 = NULL;
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount chpl_pn = NULL;
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  init_coerce_tmp = ((ReferenceCount)(nil));
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  rc = init_coerce_tmp;
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(p)), nil);
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (call_tmp8) /* ZLINE: 165 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    new_temp = _new11(_ln, _fn);
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl___ASSIGN_51(&rc, new_temp);
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp9 = _to_borrowed16(p);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  (this24)->chpl_p = call_tmp9;
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_pn = rc;
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  (this24)->chpl_pn = chpl_pn;
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:157 */
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void init93(_shared__serializeWrapper_defaultSerializer2 * this24,
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                   _serializeWrapper_defaultSerializer p,
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                   int64_t _ln,
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                   int32_t _fn) {
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount rc = NULL;
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount init_coerce_tmp = NULL;
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp8;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount new_temp = NULL;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _serializeWrapper_defaultSerializer call_tmp9 = NULL;
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount chpl_pn = NULL;
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  init_coerce_tmp = ((ReferenceCount)(nil));
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  rc = init_coerce_tmp;
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(p)), nil);
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (call_tmp8) /* ZLINE: 165 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    new_temp = _new11(_ln, _fn);
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl___ASSIGN_51(&rc, new_temp);
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp9 = _to_borrowed20(p);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  (this24)->chpl_p = call_tmp9;
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_pn = rc;
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  (this24)->chpl_pn = chpl_pn;
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:273 */
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void init_ASSIGN_23(_shared__serializeWrapper_defaultSerializer * this24,
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                           _shared__serializeWrapper_defaultSerializer2 * src,
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                           int64_t _ln,
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                           int32_t _fn) {
#line 281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultSerializer call_tmp8 = NULL;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp9 = NULL;
#line 286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp10 = NULL;
#line 286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp11;
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp12 = NULL;
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount call_tmp13 = NULL;
#line 281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get__shared_chpl_p2(src);
#line 281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  (this24)->chpl_p = *(call_tmp8);
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp9 = chpl_get__shared_chpl_pn4(src);
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  (this24)->chpl_pn = *(call_tmp9);
#line 286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp10 = chpl_get__shared_chpl_pn(this24);
#line 286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp11 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp10))), nil);
#line 286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (call_tmp11) /* ZLINE: 286 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp12 = chpl_get__shared_chpl_pn(this24);
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp13 = postfix_EXCLAMATION_2(*(call_tmp12), _ln, _fn);
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl_check_nil(call_tmp13, _ln, _fn);
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    retain(call_tmp13, _ln, _fn);
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:324 */
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void doClear2(_shared__serializeWrapper_defaultDeserializer2 * this24,
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                     int64_t _ln,
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                     int32_t _fn) {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool T;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultDeserializer call_tmp8 = NULL;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool T2;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp9 = NULL;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp10 = NULL;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount call_tmp11 = NULL;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  int64_t call_tmp12;
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp13;
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultDeserializer call_tmp14 = NULL;
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _serializeWrapper_defaultDeserializer call_tmp15 = NULL;
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp16 = NULL;
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount call_tmp17 = NULL;
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  int64_t call_tmp18;
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp19;
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp20 = NULL;
#line 334 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultDeserializer call_tmp21 = NULL;
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp22 = NULL;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get__shared_chpl_p3(this24);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  T = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (T) /* ZLINE: 325 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp9 = chpl_get__shared_chpl_pn3(this24);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    T2 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp9))), nil);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  } else /* ZLINE: 325 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    T2 = UINT8(false);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (T2) /* ZLINE: 325 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp10 = chpl_get__shared_chpl_pn3(this24);
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp11 = postfix_EXCLAMATION_2(*(call_tmp10), _ln, _fn);
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl_check_nil(call_tmp11, _ln, _fn);
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp12 = releaseStrong(call_tmp11, _ln, _fn);
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp13 = chpl___EQUALS_3(call_tmp12, INT64(0));
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    if (call_tmp13) /* ZLINE: 327 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    {
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      call_tmp14 = chpl_get__shared_chpl_p3(this24);
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      call_tmp15 = _to_unmanaged4(*(call_tmp14));
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      chpl__delete41(call_tmp15, _ln, _fn);
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    }
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp16 = chpl_get__shared_chpl_pn3(this24);
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp17 = postfix_EXCLAMATION_2(*(call_tmp16), _ln, _fn);
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl_check_nil(call_tmp17, _ln, _fn);
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp18 = releaseTotal(call_tmp17, _ln, _fn);
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp19 = chpl___EQUALS_3(call_tmp18, INT64(0));
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    if (call_tmp19) /* ZLINE: 331 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    {
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      call_tmp20 = chpl_get__shared_chpl_pn3(this24);
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      chpl__delete23(*(call_tmp20), _ln, _fn);
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    }
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 334 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp21 = chpl_get__shared_chpl_p3(this24);
#line 334 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl___ASSIGN_9(call_tmp21, nil, _ln, _fn);
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp22 = chpl_get__shared_chpl_pn3(this24);
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl___ASSIGN_46(call_tmp22, nil, _ln, _fn);
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:324 */
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void doClear(_shared__serializeWrapper_defaultSerializer * this24,
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                    int64_t _ln,
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                    int32_t _fn) {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool T;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultSerializer call_tmp8 = NULL;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool T2;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp9 = NULL;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp10 = NULL;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount call_tmp11 = NULL;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  int64_t call_tmp12;
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp13;
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultSerializer call_tmp14 = NULL;
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _serializeWrapper_defaultSerializer call_tmp15 = NULL;
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp16 = NULL;
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount call_tmp17 = NULL;
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  int64_t call_tmp18;
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp19;
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp20 = NULL;
#line 334 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultSerializer call_tmp21 = NULL;
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp22 = NULL;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get__shared_chpl_p4(this24);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  T = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (T) /* ZLINE: 325 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp9 = chpl_get__shared_chpl_pn(this24);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    T2 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp9))), nil);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  } else /* ZLINE: 325 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    T2 = UINT8(false);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (T2) /* ZLINE: 325 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp10 = chpl_get__shared_chpl_pn(this24);
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp11 = postfix_EXCLAMATION_2(*(call_tmp10), _ln, _fn);
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl_check_nil(call_tmp11, _ln, _fn);
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp12 = releaseStrong(call_tmp11, _ln, _fn);
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp13 = chpl___EQUALS_3(call_tmp12, INT64(0));
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    if (call_tmp13) /* ZLINE: 327 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    {
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      call_tmp14 = chpl_get__shared_chpl_p4(this24);
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      call_tmp15 = _to_unmanaged38(*(call_tmp14));
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      chpl__delete6(call_tmp15, _ln, _fn);
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    }
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp16 = chpl_get__shared_chpl_pn(this24);
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp17 = postfix_EXCLAMATION_2(*(call_tmp16), _ln, _fn);
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl_check_nil(call_tmp17, _ln, _fn);
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp18 = releaseTotal(call_tmp17, _ln, _fn);
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp19 = chpl___EQUALS_3(call_tmp18, INT64(0));
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    if (call_tmp19) /* ZLINE: 331 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    {
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      call_tmp20 = chpl_get__shared_chpl_pn(this24);
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      chpl__delete23(*(call_tmp20), _ln, _fn);
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    }
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 334 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp21 = chpl_get__shared_chpl_p4(this24);
#line 334 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl___ASSIGN_22(call_tmp21, nil, _ln, _fn);
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp22 = chpl_get__shared_chpl_pn(this24);
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl___ASSIGN_46(call_tmp22, nil, _ln, _fn);
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:324 */
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void doClear4(_shared__serializeWrapper_defaultDeserializer * this24,
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                     int64_t _ln,
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                     int32_t _fn) {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool T;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultDeserializer call_tmp8 = NULL;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool T2;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp9 = NULL;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp10 = NULL;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount call_tmp11 = NULL;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  int64_t call_tmp12;
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp13;
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultDeserializer call_tmp14 = NULL;
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _serializeWrapper_defaultDeserializer call_tmp15 = NULL;
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp16 = NULL;
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount call_tmp17 = NULL;
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  int64_t call_tmp18;
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp19;
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp20 = NULL;
#line 334 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultDeserializer call_tmp21 = NULL;
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp22 = NULL;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get__shared_chpl_p(this24);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  T = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (T) /* ZLINE: 325 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp9 = chpl_get__shared_chpl_pn2(this24);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    T2 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp9))), nil);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  } else /* ZLINE: 325 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    T2 = UINT8(false);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (T2) /* ZLINE: 325 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp10 = chpl_get__shared_chpl_pn2(this24);
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp11 = postfix_EXCLAMATION_2(*(call_tmp10), _ln, _fn);
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl_check_nil(call_tmp11, _ln, _fn);
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp12 = releaseStrong(call_tmp11, _ln, _fn);
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp13 = chpl___EQUALS_3(call_tmp12, INT64(0));
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    if (call_tmp13) /* ZLINE: 327 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    {
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      call_tmp14 = chpl_get__shared_chpl_p(this24);
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      call_tmp15 = _to_unmanaged4(*(call_tmp14));
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      chpl__delete41(call_tmp15, _ln, _fn);
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    }
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp16 = chpl_get__shared_chpl_pn2(this24);
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp17 = postfix_EXCLAMATION_2(*(call_tmp16), _ln, _fn);
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl_check_nil(call_tmp17, _ln, _fn);
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp18 = releaseTotal(call_tmp17, _ln, _fn);
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp19 = chpl___EQUALS_3(call_tmp18, INT64(0));
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    if (call_tmp19) /* ZLINE: 331 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    {
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      call_tmp20 = chpl_get__shared_chpl_pn2(this24);
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      chpl__delete23(*(call_tmp20), _ln, _fn);
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    }
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 334 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp21 = chpl_get__shared_chpl_p(this24);
#line 334 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl___ASSIGN_9(call_tmp21, nil, _ln, _fn);
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp22 = chpl_get__shared_chpl_pn2(this24);
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl___ASSIGN_46(call_tmp22, nil, _ln, _fn);
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:324 */
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void doClear3(_shared__serializeWrapper_defaultSerializer2 * this24,
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                     int64_t _ln,
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                     int32_t _fn) {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool T;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultSerializer call_tmp8 = NULL;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool T2;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp9 = NULL;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp10 = NULL;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount call_tmp11 = NULL;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  int64_t call_tmp12;
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp13;
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultSerializer call_tmp14 = NULL;
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _serializeWrapper_defaultSerializer call_tmp15 = NULL;
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp16 = NULL;
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount call_tmp17 = NULL;
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  int64_t call_tmp18;
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp19;
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp20 = NULL;
#line 334 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultSerializer call_tmp21 = NULL;
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp22 = NULL;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get__shared_chpl_p2(this24);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  T = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (T) /* ZLINE: 325 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp9 = chpl_get__shared_chpl_pn4(this24);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    T2 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp9))), nil);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  } else /* ZLINE: 325 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    T2 = UINT8(false);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (T2) /* ZLINE: 325 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp10 = chpl_get__shared_chpl_pn4(this24);
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp11 = postfix_EXCLAMATION_2(*(call_tmp10), _ln, _fn);
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl_check_nil(call_tmp11, _ln, _fn);
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp12 = releaseStrong(call_tmp11, _ln, _fn);
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp13 = chpl___EQUALS_3(call_tmp12, INT64(0));
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    if (call_tmp13) /* ZLINE: 327 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    {
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      call_tmp14 = chpl_get__shared_chpl_p2(this24);
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      call_tmp15 = _to_unmanaged38(*(call_tmp14));
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      chpl__delete6(call_tmp15, _ln, _fn);
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    }
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp16 = chpl_get__shared_chpl_pn4(this24);
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp17 = postfix_EXCLAMATION_2(*(call_tmp16), _ln, _fn);
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl_check_nil(call_tmp17, _ln, _fn);
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp18 = releaseTotal(call_tmp17, _ln, _fn);
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp19 = chpl___EQUALS_3(call_tmp18, INT64(0));
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    if (call_tmp19) /* ZLINE: 331 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    {
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      call_tmp20 = chpl_get__shared_chpl_pn4(this24);
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
      chpl__delete23(*(call_tmp20), _ln, _fn);
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    }
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 334 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp21 = chpl_get__shared_chpl_p2(this24);
#line 334 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl___ASSIGN_22(call_tmp21, nil, _ln, _fn);
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp22 = chpl_get__shared_chpl_pn4(this24);
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl___ASSIGN_46(call_tmp22, nil, _ln, _fn);
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:373 */
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void deinit48(_shared__serializeWrapper_defaultDeserializer2 * this24,
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                     int64_t _ln,
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                     int32_t _fn) {
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_get__shared_chpl_p3(this24);
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  doClear2(this24, _ln, _fn);
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:373 */
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void deinit51(_shared__serializeWrapper_defaultDeserializer * this24,
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                     int64_t _ln,
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                     int32_t _fn) {
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_get__shared_chpl_p(this24);
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  doClear4(this24, _ln, _fn);
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:373 */
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void deinit50(_shared__serializeWrapper_defaultSerializer * this24,
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                     int64_t _ln,
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                     int32_t _fn) {
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_get__shared_chpl_p4(this24);
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  doClear(this24, _ln, _fn);
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:373 */
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void deinit49(_shared__serializeWrapper_defaultSerializer2 * this24,
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                     int64_t _ln,
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                     int32_t _fn) {
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_get__shared_chpl_p2(this24);
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  doClear3(this24, _ln, _fn);
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:390 */
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static _serializeWrapper_defaultDeserializer borrow6(_shared__serializeWrapper_defaultDeserializer2 * this24) {
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _serializeWrapper_defaultDeserializer ret = NULL;
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultDeserializer call_tmp8 = NULL;
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get__shared_chpl_p3(this24);
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ret = *(call_tmp8);
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return ret;
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:390 */
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static _serializeWrapper_defaultSerializer borrow5(_shared__serializeWrapper_defaultSerializer * this24) {
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _serializeWrapper_defaultSerializer ret = NULL;
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultSerializer call_tmp8 = NULL;
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get__shared_chpl_p4(this24);
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ret = *(call_tmp8);
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return ret;
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:412 */
#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void chpl___ASSIGN_68(_shared__serializeWrapper_defaultDeserializer2 * lhs,
#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                             _shared__serializeWrapper_defaultDeserializer * rhs,
#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                             int64_t _ln,
#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                             int32_t _fn) {
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp8 = NULL;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp9;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp10 = NULL;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount call_tmp11 = NULL;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultDeserializer call_tmp12 = NULL;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _serializeWrapper_defaultDeserializer coerce_tmp2 = NULL;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp13 = NULL;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount coerce_tmp3 = NULL;
#line 421 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultDeserializer call_tmp14 = NULL;
#line 422 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp15 = NULL;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get__shared_chpl_pn2(rhs);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (call_tmp9) /* ZLINE: 416 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp10 = chpl_get__shared_chpl_pn2(rhs);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp11 = postfix_EXCLAMATION_2(*(call_tmp10), _ln, _fn);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl_check_nil(call_tmp11, _ln, _fn);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    retain(call_tmp11, _ln, _fn);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp12 = chpl_get__shared_chpl_p(rhs);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  coerce_tmp2 = *(call_tmp12);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp13 = chpl_get__shared_chpl_pn2(rhs);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  coerce_tmp3 = *(call_tmp13);
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  doClear2(lhs, _ln, _fn);
#line 421 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp14 = chpl_get__shared_chpl_p3(lhs);
#line 421 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl___ASSIGN_16(call_tmp14, coerce_tmp2);
#line 422 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp15 = chpl_get__shared_chpl_pn3(lhs);
#line 422 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl___ASSIGN_51(call_tmp15, coerce_tmp3);
#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:412 */
#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void chpl___ASSIGN_67(_shared__serializeWrapper_defaultSerializer * lhs,
#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                             _shared__serializeWrapper_defaultSerializer2 * rhs,
#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                             int64_t _ln,
#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                             int32_t _fn) {
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp8 = NULL;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp9;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp10 = NULL;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount call_tmp11 = NULL;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultSerializer call_tmp12 = NULL;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _serializeWrapper_defaultSerializer coerce_tmp2 = NULL;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp13 = NULL;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  ReferenceCount coerce_tmp3 = NULL;
#line 421 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultSerializer call_tmp14 = NULL;
#line 422 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref_ReferenceCount call_tmp15 = NULL;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get__shared_chpl_pn4(rhs);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (call_tmp9) /* ZLINE: 416 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp10 = chpl_get__shared_chpl_pn4(rhs);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    call_tmp11 = postfix_EXCLAMATION_2(*(call_tmp10), _ln, _fn);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    chpl_check_nil(call_tmp11, _ln, _fn);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    retain(call_tmp11, _ln, _fn);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp12 = chpl_get__shared_chpl_p2(rhs);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  coerce_tmp2 = *(call_tmp12);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp13 = chpl_get__shared_chpl_pn4(rhs);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  coerce_tmp3 = *(call_tmp13);
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  doClear(lhs, _ln, _fn);
#line 421 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp14 = chpl_get__shared_chpl_p4(lhs);
#line 421 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl___ASSIGN_23(call_tmp14, coerce_tmp2);
#line 422 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp15 = chpl_get__shared_chpl_pn(lhs);
#line 422 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl___ASSIGN_51(call_tmp15, coerce_tmp3);
#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:445 */
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void chpl__autoDestroy99(_shared__serializeWrapper_defaultDeserializer * x2,
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                int64_t _ln,
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                int32_t _fn) {
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _shared__serializeWrapper_defaultDeserializer call_tmp8;
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = *(x2);
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  deinit51(&call_tmp8, _ln, _fn);
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:445 */
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static void chpl__autoDestroy100(_shared__serializeWrapper_defaultSerializer2 * x2,
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                 int64_t _ln,
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                 int32_t _fn) {
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _shared__serializeWrapper_defaultSerializer2 call_tmp8;
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = *(x2);
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  deinit49(&call_tmp8, _ln, _fn);
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return;
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:577 */
#line 577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static _serializeWrapper_defaultDeserializer postfix_EXCLAMATION_38(_shared__serializeWrapper_defaultDeserializer2 * x2,
#line 577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                                                    int64_t _ln,
#line 577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                                                    int32_t _fn) {
#line 583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultDeserializer call_tmp8 = NULL;
#line 583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp9;
#line 588 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultDeserializer call_tmp10 = NULL;
#line 588 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _serializeWrapper_defaultDeserializer call_tmp11 = NULL;
#line 583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get__shared_chpl_p3(x2);
#line 583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp9 = chpl___EQUALS_8(((RootClass)(*(call_tmp8))), nil);
#line 583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (call_tmp9) /* ZLINE: 583 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 584 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 584 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 588 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp10 = chpl_get__shared_chpl_p3(x2);
#line 588 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp11 = _to_nonnil9(*(call_tmp10));
#line 577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return call_tmp11;
#line 577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

#line 577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
/* SharedObject.chpl:577 */
#line 577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
static _serializeWrapper_defaultSerializer postfix_EXCLAMATION_39(_shared__serializeWrapper_defaultSerializer * x2,
#line 577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                                                  int64_t _ln,
#line 577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
                                                                  int32_t _fn) {
#line 583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultSerializer call_tmp8 = NULL;
#line 583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  chpl_bool call_tmp9;
#line 588 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _ref__serializeWrapper_defaultSerializer call_tmp10 = NULL;
#line 588 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  _serializeWrapper_defaultSerializer call_tmp11 = NULL;
#line 583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp8 = chpl_get__shared_chpl_p4(x2);
#line 583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp9 = chpl___EQUALS_8(((RootClass)(*(call_tmp8))), nil);
#line 583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  if (call_tmp9) /* ZLINE: 583 /Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl */
#line 583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  {
#line 584 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 584 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  }
#line 588 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp10 = chpl_get__shared_chpl_p4(x2);
#line 588 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  call_tmp11 = _to_nonnil23(*(call_tmp10));
#line 577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
  return call_tmp11;
#line 577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/SharedObject.chpl"
}

