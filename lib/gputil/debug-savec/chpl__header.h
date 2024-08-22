#ifndef CHPL_GEN_HEADER_INCLUDE_GUARD
#define CHPL_GEN_HEADER_INCLUDE_GUARD

#define CHPL_GEN_CODE

#include "sys_basic.h"
#include "wctype.h"
#include "ctype.h"
#include "stdchpl.h"
/*** Class Type Identification Numbers ***/

extern const chpl__class_id chpl__cid__ic_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t;
extern const chpl__class_id chpl__cid_RootClass;
extern const chpl__class_id chpl__cid_chpl___EndCountBase;
extern const chpl__class_id chpl__cid_chpl___EndCount_AtomicT_int64_t_int64_t;
extern const chpl__class_id chpl__cid_chpl_ModuleDeinit;
extern const chpl__class_id chpl__cid_BaseDist;
extern const chpl__class_id chpl__cid_BaseDom;
extern const chpl__class_id chpl__cid__ic__arrs_BaseDom;
extern const chpl__class_id chpl__cid_BaseRectangularDom_1_int64_t_one;
extern const chpl__class_id chpl__cid_BaseArr;
extern const chpl__class_id chpl__cid_BaseArrOverRectangularDom_1_int64_t_one;
extern const chpl__class_id chpl__cid_BaseRectangularArr_1_int64_t_one_int64_t;
extern const chpl__class_id chpl__cid_BaseRectangularArr_1_int64_t_one_locale;
extern const chpl__class_id chpl__cid_BaseRectangularArr_1_int64_t_one_uint64_t;
extern const chpl__class_id chpl__cid_BaseLocale;
extern const chpl__class_id chpl__cid_DummyLocale;
extern const chpl__class_id chpl__cid_AbstractLocaleModel;
extern const chpl__class_id chpl__cid_AbstractRootLocale;
extern const chpl__class_id chpl__cid__ic_chpl_direct_range_iter;
extern const chpl__class_id chpl__cid__ic_chpl_direct_range_iter2;
extern const chpl__class_id chpl__cid__ic_chpl_direct_range_iter3;
extern const chpl__class_id chpl__cid__ic_chpl_direct_counted_range_iter;
extern const chpl__class_id chpl__cid__ic_chpl_direct_counted_range_iter_helper;
extern const chpl__class_id chpl__cid__ic_chpl_direct_pos_stride_range_iter;
extern const chpl__class_id chpl__cid__ic_chpl_direct_param_stride_range_iter;
extern const chpl__class_id chpl__cid__ic_these_range_int64_t_both_one;
extern const chpl__class_id chpl__cid_DefaultDist;
extern const chpl__class_id chpl__cid_DefaultRectangularDom_1_int64_t_one;
extern const chpl__class_id chpl__cid__ic_these_help_DefaultRectangularDom_1_int64_t_one;
extern const chpl__class_id chpl__cid__ic_these_DefaultRectangularDom_1_int64_t_one;
extern const chpl__class_id chpl__cid_DefaultRectangularArr_1_int64_t_one_int64_t_int64_t;
extern const chpl__class_id chpl__cid_DefaultRectangularArr_1_int64_t_one_locale_int64_t;
extern const chpl__class_id chpl__cid_DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t;
extern const chpl__class_id chpl__cid__ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t;
extern const chpl__class_id chpl__cid__ic_chpl__serialViewIter1D;
extern const chpl__class_id chpl__cid__ic_chpl__serialViewIter;
extern const chpl__class_id chpl__cid_LocaleModel;
extern const chpl__class_id chpl__cid_RootLocale;
extern const chpl__class_id chpl__cid_ReferenceCount;
extern const chpl__class_id chpl__cid__ic__cpIndexLen__ref_string;
extern const chpl__class_id chpl__cid__ic__indexLen__ref_string;
extern const chpl__class_id chpl__cid__ic_chpl_bytes__ref_string;
extern const chpl__class_id chpl__cid__ic_codepoints__ref_string;
extern const chpl__class_id chpl__cid_Error;
extern const chpl__class_id chpl__cid_NilThrownError;
extern const chpl__class_id chpl__cid_NilClassError;
extern const chpl__class_id chpl__cid_DecodeError;
extern const chpl__class_id chpl__cid_IllegalArgumentError;
extern const chpl__class_id chpl__cid_CodepointSplitError;
extern const chpl__class_id chpl__cid_TaskErrors;
extern const chpl__class_id chpl__cid__ic_these_TaskErrors;
extern const chpl__class_id chpl__cid_QioPluginFile;
extern const chpl__class_id chpl__cid_QioPluginChannel;
extern const chpl__class_id chpl__cid__serializeWrapper_binaryDeserializer;
extern const chpl__class_id chpl__cid__serializeWrapper_binarySerializer;
extern const chpl__class_id chpl__cid__serializeWrapper_defaultDeserializer;
extern const chpl__class_id chpl__cid__serializeWrapper_defaultSerializer;
extern const chpl__class_id chpl__cid_SystemError;
extern const chpl__class_id chpl__cid_BlockingIoError;
extern const chpl__class_id chpl__cid_ChildProcessError;
extern const chpl__class_id chpl__cid_ConnectionError;
extern const chpl__class_id chpl__cid_BrokenPipeError;
extern const chpl__class_id chpl__cid_ConnectionAbortedError;
extern const chpl__class_id chpl__cid_ConnectionRefusedError;
extern const chpl__class_id chpl__cid_ConnectionResetError;
extern const chpl__class_id chpl__cid_FileExistsError;
extern const chpl__class_id chpl__cid_FileNotFoundError;
extern const chpl__class_id chpl__cid_InterruptedError;
extern const chpl__class_id chpl__cid_IsADirectoryError;
extern const chpl__class_id chpl__cid_NotADirectoryError;
extern const chpl__class_id chpl__cid_PermissionError;
extern const chpl__class_id chpl__cid_ProcessLookupError;
extern const chpl__class_id chpl__cid_TimeoutError;
extern const chpl__class_id chpl__cid_IoError;
extern const chpl__class_id chpl__cid_EofError;
extern const chpl__class_id chpl__cid_UnexpectedEofError;
extern const chpl__class_id chpl__cid_BadFormatError;
extern const chpl__class_id chpl__cid_chpl___RemoteVarContainer_R;
extern const chpl__class_id chpl__cid_Remote_R;
extern const chpl__class_id chpl_subclass_max_id[];
extern const c_string_rehook chpl_classNames[];
/*** Class Prototypes ***/

typedef struct chpl__ic_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t_s* _ic_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t;
typedef struct chpl_RootClass_s* RootClass;
typedef struct chpl_chpl___EndCountBase_s* chpl___EndCountBase;
typedef struct chpl_chpl___EndCount_AtomicT_int64_t_int64_t_s* chpl___EndCount_AtomicT_int64_t_int64_t;
typedef struct chpl_chpl_ModuleDeinit_s* chpl_ModuleDeinit;
typedef struct chpl__class_localscoforall_fn_s* _class_localscoforall_fn;
typedef struct chpl__class_localscoforall_fn2_s* _class_localscoforall_fn2;
typedef struct chpl__class_localscoforall_fn3_s* _class_localscoforall_fn3;
typedef struct chpl__class_localscoforall_fn4_s* _class_localscoforall_fn4;
typedef struct chpl_BaseDist_s* BaseDist;
typedef struct chpl_BaseDom_s* BaseDom;
typedef struct chpl__ic__arrs_BaseDom_s* _ic__arrs_BaseDom;
typedef struct chpl_BaseRectangularDom_1_int64_t_one_s* BaseRectangularDom_1_int64_t_one;
typedef struct chpl_BaseArr_s* BaseArr;
typedef struct chpl_BaseArrOverRectangularDom_1_int64_t_one_s* BaseArrOverRectangularDom_1_int64_t_one;
typedef struct chpl_BaseRectangularArr_1_int64_t_one_int64_t_s* BaseRectangularArr_1_int64_t_one_int64_t;
typedef struct chpl_BaseRectangularArr_1_int64_t_one_locale_s* BaseRectangularArr_1_int64_t_one_locale;
typedef struct chpl_BaseRectangularArr_1_int64_t_one_uint64_t_s* BaseRectangularArr_1_int64_t_one_uint64_t;
typedef struct chpl_BaseLocale_s* BaseLocale;
typedef struct chpl_DummyLocale_s* DummyLocale;
typedef struct chpl_AbstractLocaleModel_s* AbstractLocaleModel;
typedef struct chpl_AbstractRootLocale_s* AbstractRootLocale;
typedef struct chpl__class_localscoforall_fn5_s* _class_localscoforall_fn5;
typedef struct chpl__ic_chpl_direct_range_iter_s* _ic_chpl_direct_range_iter;
typedef struct chpl__ic_chpl_direct_range_iter2_s* _ic_chpl_direct_range_iter2;
typedef struct chpl__ic_chpl_direct_range_iter3_s* _ic_chpl_direct_range_iter3;
typedef struct chpl__ic_chpl_direct_counted_range_iter_s* _ic_chpl_direct_counted_range_iter;
typedef struct chpl__ic_chpl_direct_counted_range_iter_helper_s* _ic_chpl_direct_counted_range_iter_helper;
typedef struct chpl__ic_chpl_direct_pos_stride_range_iter_s* _ic_chpl_direct_pos_stride_range_iter;
typedef struct chpl__ic_chpl_direct_param_stride_range_iter_s* _ic_chpl_direct_param_stride_range_iter;
typedef struct chpl__ic_these_range_int64_t_both_one_s* _ic_these_range_int64_t_both_one;
typedef struct chpl_DefaultDist_s* DefaultDist;
typedef struct chpl_DefaultRectangularDom_1_int64_t_one_s* DefaultRectangularDom_1_int64_t_one;
typedef struct chpl__ic_these_help_DefaultRectangularDom_1_int64_t_one_s* _ic_these_help_DefaultRectangularDom_1_int64_t_one;
typedef struct chpl__ic_these_DefaultRectangularDom_1_int64_t_one_s* _ic_these_DefaultRectangularDom_1_int64_t_one;
typedef struct chpl__class_localscoforall_fn6_s* _class_localscoforall_fn6;
typedef struct chpl__class_localscoforall_fn7_s* _class_localscoforall_fn7;
typedef struct chpl__class_localscoforall_fn8_s* _class_localscoforall_fn8;
typedef struct chpl__class_localscoforall_fn9_s* _class_localscoforall_fn9;
typedef struct chpl_DefaultRectangularArr_1_int64_t_one_int64_t_int64_t_s* DefaultRectangularArr_1_int64_t_one_int64_t_int64_t;
typedef struct chpl_DefaultRectangularArr_1_int64_t_one_locale_int64_t_s* DefaultRectangularArr_1_int64_t_one_locale_int64_t;
typedef struct chpl_DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t_s* DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t;
typedef struct chpl__ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t_s* _ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t;
typedef struct chpl__ic_chpl__serialViewIter1D_s* _ic_chpl__serialViewIter1D;
typedef struct chpl__ic_chpl__serialViewIter_s* _ic_chpl__serialViewIter;
typedef struct chpl__class_localscoforall_fn10_s* _class_localscoforall_fn10;
typedef struct chpl_LocaleModel_s* LocaleModel;
typedef struct chpl_RootLocale_s* RootLocale;
typedef struct chpl__class_localscoforall_fn11_s* _class_localscoforall_fn11;
typedef struct chpl__class_localscoforall_fn12_s* _class_localscoforall_fn12;
typedef struct chpl_ReferenceCount_s* ReferenceCount;
typedef struct chpl__ic__cpIndexLen__ref_string_s* _ic__cpIndexLen__ref_string;
typedef struct chpl__ic__indexLen__ref_string_s* _ic__indexLen__ref_string;
typedef struct chpl__ic_chpl_bytes__ref_string_s* _ic_chpl_bytes__ref_string;
typedef struct chpl__ic_codepoints__ref_string_s* _ic_codepoints__ref_string;
typedef struct chpl_Error_s* Error;
typedef struct chpl_NilThrownError_s* NilThrownError;
typedef struct chpl_NilClassError_s* NilClassError;
typedef struct chpl_DecodeError_s* DecodeError;
typedef struct chpl_IllegalArgumentError_s* IllegalArgumentError;
typedef struct chpl_CodepointSplitError_s* CodepointSplitError;
typedef struct chpl_TaskErrors_s* TaskErrors;
typedef struct chpl__ic_these_TaskErrors_s* _ic_these_TaskErrors;
typedef struct chpl_QioPluginFile_s* QioPluginFile;
typedef struct chpl_QioPluginChannel_s* QioPluginChannel;
typedef struct chpl__serializeWrapper_binaryDeserializer_s* _serializeWrapper_binaryDeserializer;
typedef struct chpl__serializeWrapper_binarySerializer_s* _serializeWrapper_binarySerializer;
typedef struct chpl__serializeWrapper_defaultDeserializer_s* _serializeWrapper_defaultDeserializer;
typedef struct chpl__serializeWrapper_defaultSerializer_s* _serializeWrapper_defaultSerializer;
typedef struct chpl_SystemError_s* SystemError;
typedef struct chpl_BlockingIoError_s* BlockingIoError;
typedef struct chpl_ChildProcessError_s* ChildProcessError;
typedef struct chpl_ConnectionError_s* ConnectionError;
typedef struct chpl_BrokenPipeError_s* BrokenPipeError;
typedef struct chpl_ConnectionAbortedError_s* ConnectionAbortedError;
typedef struct chpl_ConnectionRefusedError_s* ConnectionRefusedError;
typedef struct chpl_ConnectionResetError_s* ConnectionResetError;
typedef struct chpl_FileExistsError_s* FileExistsError;
typedef struct chpl_FileNotFoundError_s* FileNotFoundError;
typedef struct chpl_InterruptedError_s* InterruptedError;
typedef struct chpl_IsADirectoryError_s* IsADirectoryError;
typedef struct chpl_NotADirectoryError_s* NotADirectoryError;
typedef struct chpl_PermissionError_s* PermissionError;
typedef struct chpl_ProcessLookupError_s* ProcessLookupError;
typedef struct chpl_TimeoutError_s* TimeoutError;
typedef struct chpl_IoError_s* IoError;
typedef struct chpl_EofError_s* EofError;
typedef struct chpl_UnexpectedEofError_s* UnexpectedEofError;
typedef struct chpl_BadFormatError_s* BadFormatError;
typedef struct chpl_chpl___RemoteVarContainer_R_s* chpl___RemoteVarContainer_R;
typedef struct chpl_Remote_R_s* Remote_R;
/*** Enumerated Types ***/

typedef enum {decodePolicy_strict, decodePolicy_replace, decodePolicy_drop, decodePolicy_escape} decodePolicy;
typedef enum {encodePolicy_unescape, encodePolicy_pass} encodePolicy;
typedef enum {_tElt_move, _tElt_initCopy, _tElt_assign} _tElt;
typedef enum {iterKind_leader, iterKind_follower, iterKind_standalone} iterKind;
typedef enum {ArrayInit_heuristicInit, ArrayInit_noInit, ArrayInit_serialInit, ArrayInit_parallelInit, ArrayInit_gpuInit} ArrayInit;
typedef enum {chpl_ddataResizePolicy_normalInit, chpl_ddataResizePolicy_skipInit, chpl_ddataResizePolicy_skipInitButClearMem} chpl_ddataResizePolicy;
typedef enum {chpl__hash_status_empty = INT64(0), chpl__hash_status_full = INT32(1), chpl__hash_status_deleted = INT32(2)} chpl__hash_status;
typedef enum {localeKind_regular, localeKind_any, localeKind_nilLocale, localeKind_dummy, localeKind_default} localeKind;
typedef enum {boundKind_both, boundKind_low, boundKind_high, boundKind_neither} boundKind;
typedef enum {strideKind_one, strideKind_negOne, strideKind_positive, strideKind_negative, strideKind_any} strideKind;
typedef enum {sharingKind_computeOrRetrieve, sharingKind_computePerLocale} sharingKind;
typedef enum {ArrayStorageOrder_RMO, ArrayStorageOrder_CMO} ArrayStorageOrder;
typedef enum {memoryOrder_seqCst, memoryOrder_acqRel, memoryOrder_release, memoryOrder_acquire, memoryOrder_relaxed} memoryOrder;
typedef enum {ioMode_r = INT64(1), ioMode_cw = INT64(2), ioMode_rw = INT64(3), ioMode_cwr = INT64(4), ioMode_a = INT64(5)} ioMode;
typedef enum {_iokind_dynamic = INT64(0), _iokind_native = INT64(1), _iokind_big = INT64(2), _iokind_little = INT64(3)} _iokind;
typedef enum {endianness_native = INT64(0), endianness_big = INT64(1), endianness_little = INT64(2)} endianness;
typedef enum {iostringstyleInternal_len1b_data = INT64(-1), iostringstyleInternal_len2b_data = INT64(-2), iostringstyleInternal_len4b_data = INT64(-4), iostringstyleInternal_len8b_data = INT64(-8), iostringstyleInternal_lenVb_data = INT64(-10), iostringstyleInternal_data_toeof = INT64(-65280), iostringstyleInternal_data_null = INT64(-256)} iostringstyleInternal;
typedef enum {iostringformatInternal_word = INT64(0), iostringformatInternal_basic = INT64(1), iostringformatInternal_chpl = INT64(2), iostringformatInternal_json = INT64(3), iostringformatInternal_toend = INT64(4), iostringformatInternal_toeof = INT64(5)} iostringformatInternal;
typedef enum {RemElems_Thru, RemElems_Pack, RemElems_Mod} RemElems;
/*** Records, Unions, Data Class, References (Hierarchically) ***/

typedef struct chpl_AtomicBool_s {
  atomic_bool _v;
} AtomicBool;

typedef struct chpl_AtomicT_int64_t_s {
  atomic_int_least64_t _v;
} AtomicT_int64_t;

typedef uint8_t *c_ptr_uint8_t;
typedef struct chpl_bytes_s {
  int64_t buffLen;
  int64_t buffSize;
  c_ptr_uint8_t buff;
  chpl_bool isOwned;
  int32_t locale_id;
} bytes;

typedef struct chpl__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t_s {
  int64_t _pid;
  DefaultRectangularArr_1_int64_t_one_locale_int64_t _instance;
  chpl_bool _unowned;
} _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t;

typedef struct chpl__ir_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t_s {
  _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t F0_this;
} _ir_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t;

typedef int64_t *_ddata_int64_t;
typedef struct chpl_locale_s {
  BaseLocale _instance;
} locale;

typedef locale *_ddata_locale;
typedef uint64_t *_ddata_uint64_t;
typedef AbstractLocaleModel *_ref_AbstractLocaleModel;
typedef AbstractRootLocale *_ref_AbstractRootLocale;
typedef qio_channel_t *c_ptr_qio_channel_t;
typedef struct chpl__shared__serializeWrapper_defaultSerializer_s {
  _serializeWrapper_defaultSerializer chpl_p;
  ReferenceCount chpl_pn;
} _shared__serializeWrapper_defaultSerializer;

typedef struct chpl_fileWriter_F_defaultSerializer_s {
  locale _home;
  c_ptr_qio_channel_t _channel_internal;
  _shared__serializeWrapper_defaultSerializer _serializer;
  locale _readWriteThisFromLocale;
} fileWriter_F_defaultSerializer;

typedef struct chpl_string_s {
  int64_t buffLen;
  int64_t buffSize;
  int64_t cachedNumCodepoints;
  c_ptr_uint8_t buff;
  chpl_bool isOwned;
  chpl_bool hasEscapes;
  int32_t locale_id;
} string;

typedef chpl_bool *c_ptr_chpl_bool;
typedef struct chpl_AggregateSerializer_fileWriter_F_defaultSerializer_s {
  fileWriter_F_defaultSerializer writer;
  chpl_bool _parent;
  chpl_bool _first;
  string _ending;
  c_ptr_chpl_bool _firstPtr;
} AggregateSerializer_fileWriter_F_defaultSerializer;

typedef AggregateSerializer_fileWriter_F_defaultSerializer *_ref_AggregateSerializer_fileWriter_F_defaultSerializer;
typedef ArrayInit *_ref_ArrayInit;
typedef AtomicBool *_ref_AtomicBool;
typedef AtomicT_int64_t *_ref_AtomicT_int64_t;
typedef BadFormatError *_ref_BadFormatError;
typedef BaseArr *_ref_BaseArr;
typedef BaseArrOverRectangularDom_1_int64_t_one *_ref_BaseArrOverRectangularDom_1_int64_t_one;
typedef BaseDist *_ref_BaseDist;
typedef BaseDom *_ref_BaseDom;
typedef BaseLocale *_ref_BaseLocale;
typedef BaseRectangularArr_1_int64_t_one_int64_t *_ref_BaseRectangularArr_1_int64_t_one_int64_t;
typedef BaseRectangularArr_1_int64_t_one_locale *_ref_BaseRectangularArr_1_int64_t_one_locale;
typedef BaseRectangularArr_1_int64_t_one_uint64_t *_ref_BaseRectangularArr_1_int64_t_one_uint64_t;
typedef BaseRectangularDom_1_int64_t_one *_ref_BaseRectangularDom_1_int64_t_one;
typedef BlockingIoError *_ref_BlockingIoError;
typedef BrokenPipeError *_ref_BrokenPipeError;
typedef ChildProcessError *_ref_ChildProcessError;
typedef CodepointSplitError *_ref_CodepointSplitError;
typedef ConnectionAbortedError *_ref_ConnectionAbortedError;
typedef ConnectionError *_ref_ConnectionError;
typedef ConnectionRefusedError *_ref_ConnectionRefusedError;
typedef ConnectionResetError *_ref_ConnectionResetError;
typedef DecodeError *_ref_DecodeError;
typedef struct chpl_DefaultComparator_s {
  uint8_t dummyFieldToAvoidWarning;
} DefaultComparator;

typedef DefaultComparator *_ref_DefaultComparator;
typedef DefaultDist *_ref_DefaultDist;
typedef DefaultRectangularArr_1_int64_t_one_int64_t_int64_t *_ref_DefaultRectangularArr_1_int64_t_one_int64_t_int64_t;
typedef DefaultRectangularArr_1_int64_t_one_locale_int64_t *_ref_DefaultRectangularArr_1_int64_t_one_locale_int64_t;
typedef DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t *_ref_DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t;
typedef DefaultRectangularDom_1_int64_t_one *_ref_DefaultRectangularDom_1_int64_t_one;
typedef DummyLocale *_ref_DummyLocale;
typedef EofError *_ref_EofError;
typedef Error *_ref_Error;
typedef FileExistsError *_ref_FileExistsError;
typedef FileNotFoundError *_ref_FileNotFoundError;
typedef IllegalArgumentError *_ref_IllegalArgumentError;
typedef InterruptedError *_ref_InterruptedError;
typedef IoError *_ref_IoError;
typedef IsADirectoryError *_ref_IsADirectoryError;
typedef LocaleModel *_ref_LocaleModel;
typedef NilClassError *_ref_NilClassError;
typedef NilThrownError *_ref_NilThrownError;
typedef NotADirectoryError *_ref_NotADirectoryError;
typedef PermissionError *_ref_PermissionError;
typedef ProcessLookupError *_ref_ProcessLookupError;
typedef QioPluginChannel *_ref_QioPluginChannel;
typedef QioPluginFile *_ref_QioPluginFile;
typedef struct chpl_R_s {
  int64_t n;
} R;

typedef R *_ref_R;
typedef ReferenceCount *_ref_ReferenceCount;
typedef Remote_R *_ref_Remote_R;
typedef struct chpl_ReverseComparator_DefaultComparator_s {
  DefaultComparator comparator;
} ReverseComparator_DefaultComparator;

typedef ReverseComparator_DefaultComparator *_ref_ReverseComparator_DefaultComparator;
typedef RootClass *_ref_RootClass;
typedef RootLocale *_ref_RootLocale;
typedef SystemError *_ref_SystemError;
typedef TaskErrors *_ref_TaskErrors;
typedef TimeoutError *_ref_TimeoutError;
typedef UnexpectedEofError *_ref_UnexpectedEofError;
typedef chpl___EndCountBase *_ref__EndCountBase;
typedef chpl___EndCount_AtomicT_int64_t_int64_t *_ref__EndCount_AtomicT_int64_t_int64_t;
typedef chpl___RemoteVarContainer_R *_ref__RemoteVarContainer_R;
typedef struct chpl__distribution_DefaultDist_s {
  int64_t _pid;
  DefaultDist _instance;
  chpl_bool _unowned;
} _distribution_DefaultDist;

typedef struct chpl_chpl___RuntimeTypeInfo_s {
  _distribution_DefaultDist dist;
} chpl___RuntimeTypeInfo;

typedef chpl___RuntimeTypeInfo *_ref__RuntimeTypeInfo;
typedef struct chpl__domain_DefaultRectangularDom_1_int64_t_one_s {
  int64_t _pid;
  DefaultRectangularDom_1_int64_t_one _instance;
  chpl_bool _unowned;
} _domain_DefaultRectangularDom_1_int64_t_one;

typedef struct chpl_chpl___RuntimeTypeInfo2_s {
  _domain_DefaultRectangularDom_1_int64_t_one dom;
} chpl___RuntimeTypeInfo2;

typedef chpl___RuntimeTypeInfo2 *_ref__RuntimeTypeInfo2;
typedef _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t *_ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t;
typedef _ddata_int64_t *_ref__ddata_int64_t;
typedef _ddata_locale *_ref__ddata_locale;
typedef _ddata_uint64_t *_ref__ddata_uint64_t;
typedef _distribution_DefaultDist *_ref__distribution_DefaultDist;
typedef _domain_DefaultRectangularDom_1_int64_t_one *_ref__domain_DefaultRectangularDom_1_int64_t_one;
typedef _ic__arrs_BaseDom *_ref__ic__arrs_BaseDom;
typedef _ic__cpIndexLen__ref_string *_ref__ic__cpIndexLen__ref_string;
typedef _ic__indexLen__ref_string *_ref__ic__indexLen__ref_string;
typedef _ic_chpl__serialViewIter *_ref__ic_chpl__serialViewIter;
typedef _ic_chpl__serialViewIter1D *_ref__ic_chpl__serialViewIter1D;
typedef _ic_chpl_bytes__ref_string *_ref__ic_chpl_bytes__ref_string;
typedef _ic_chpl_direct_counted_range_iter *_ref__ic_chpl_direct_counted_range_iter;
typedef _ic_chpl_direct_counted_range_iter_helper *_ref__ic_chpl_direct_counted_range_iter_helper;
typedef _ic_chpl_direct_param_stride_range_iter *_ref__ic_chpl_direct_param_stride_range_iter;
typedef _ic_chpl_direct_pos_stride_range_iter *_ref__ic_chpl_direct_pos_stride_range_iter;
typedef _ic_chpl_direct_range_iter3 *_ref__ic_chpl_direct_range_iter;
typedef _ic_chpl_direct_range_iter2 *_ref__ic_chpl_direct_range_iter2;
typedef _ic_chpl_direct_range_iter *_ref__ic_chpl_direct_range_iter3;
typedef _ic_codepoints__ref_string *_ref__ic_codepoints__ref_string;
typedef _ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t *_ref__ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t;
typedef _ic_these_DefaultRectangularDom_1_int64_t_one *_ref__ic_these_DefaultRectangularDom_1_int64_t_one;
typedef _ic_these_TaskErrors *_ref__ic_these_TaskErrors;
typedef _ic_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t *_ref__ic_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t;
typedef _ic_these_help_DefaultRectangularDom_1_int64_t_one *_ref__ic_these_help_DefaultRectangularDom_1_int64_t_one;
typedef _ic_these_range_int64_t_both_one *_ref__ic_these_range_int64_t_both_one;
typedef struct chpl__ir__arrs_BaseDom_s {
  BaseDom F0_this;
} _ir__arrs_BaseDom;

typedef _ir__arrs_BaseDom *_ref__ir__arrs_BaseDom;
typedef string *_ref_string;
typedef struct chpl_byteIndex_s {
  int64_t _bindex;
} byteIndex;

typedef byteIndex *_ref_byteIndex;
typedef struct chpl__ir__cpIndexLen__ref_string_s {
  _ref_string F0_this;
  _ref_byteIndex F1_start;
} _ir__cpIndexLen__ref_string;

typedef _ir__cpIndexLen__ref_string *_ref__ir__cpIndexLen__ref_string;
typedef struct chpl__ir__indexLen__ref_string_s {
  _ref_string F0_this;
  _ref_byteIndex F1_start;
} _ir__indexLen__ref_string;

typedef _ir__indexLen__ref_string *_ref__ir__indexLen__ref_string;
typedef struct chpl__ir_chpl__serialViewIter_s {
  DefaultRectangularArr_1_int64_t_one_locale_int64_t F0_arr;
  DefaultRectangularDom_1_int64_t_one F1_viewDom;
} _ir_chpl__serialViewIter;

typedef _ir_chpl__serialViewIter *_ref__ir_chpl__serialViewIter;
typedef struct chpl_range_int64_t_both_one_s {
  int64_t _low;
  int64_t _high;
} range_int64_t_both_one;

typedef struct chpl__ir_chpl__serialViewIter1D_s {
  DefaultRectangularArr_1_int64_t_one_locale_int64_t F0_arr;
  range_int64_t_both_one F1_viewRange;
} _ir_chpl__serialViewIter1D;

typedef _ir_chpl__serialViewIter1D *_ref__ir_chpl__serialViewIter1D;
typedef struct chpl__ir_chpl_bytes__ref_string_s {
  _ref_string F0_this;
} _ir_chpl_bytes__ref_string;

typedef _ir_chpl_bytes__ref_string *_ref__ir_chpl_bytes__ref_string;
typedef struct chpl__ir_chpl_direct_counted_range_iter_s {
  int64_t F0_low;
  int64_t F1_count;
} _ir_chpl_direct_counted_range_iter;

typedef _ir_chpl_direct_counted_range_iter *_ref__ir_chpl_direct_counted_range_iter;
typedef struct chpl__ir_chpl_direct_counted_range_iter_helper_s {
  int64_t F0_low;
  int64_t F1_count;
} _ir_chpl_direct_counted_range_iter_helper;

typedef _ir_chpl_direct_counted_range_iter_helper *_ref__ir_chpl_direct_counted_range_iter_helper;
typedef struct chpl__ir_chpl_direct_param_stride_range_iter_s {
  int64_t F0_low;
  int64_t F1_high;
} _ir_chpl_direct_param_stride_range_iter;

typedef _ir_chpl_direct_param_stride_range_iter *_ref__ir_chpl_direct_param_stride_range_iter;
typedef struct chpl__ir_chpl_direct_pos_stride_range_iter_s {
  int64_t F0_low;
  int64_t F1_high;
  int64_t F2_stride;
} _ir_chpl_direct_pos_stride_range_iter;

typedef _ir_chpl_direct_pos_stride_range_iter *_ref__ir_chpl_direct_pos_stride_range_iter;
typedef struct chpl__ir_chpl_direct_range_iter3_s {
  int64_t F0_low;
  int64_t F1_high;
} _ir_chpl_direct_range_iter3;

typedef _ir_chpl_direct_range_iter3 *_ref__ir_chpl_direct_range_iter;
typedef struct chpl__ir_chpl_direct_range_iter2_s {
  uint8_t dummyFieldToAvoidWarning;
} _ir_chpl_direct_range_iter2;

typedef _ir_chpl_direct_range_iter2 *_ref__ir_chpl_direct_range_iter2;
typedef struct chpl__ir_chpl_direct_range_iter_s {
  uint8_t dummyFieldToAvoidWarning;
} _ir_chpl_direct_range_iter;

typedef _ir_chpl_direct_range_iter *_ref__ir_chpl_direct_range_iter3;
typedef struct chpl__ir_codepoints__ref_string_s {
  _ref_string F0_this;
} _ir_codepoints__ref_string;

typedef _ir_codepoints__ref_string *_ref__ir_codepoints__ref_string;
typedef struct chpl__ir_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t_s {
  DefaultRectangularArr_1_int64_t_one_locale_int64_t F0_this;
  int64_t F1_tasksPerLocale;
  chpl_bool F2_ignoreRunning;
  int64_t F3_minIndicesPerTask;
} _ir_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t;

typedef _ir_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t *_ref__ir_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t;
typedef int64_t _tuple_1_star_int64_t[1];

typedef _tuple_1_star_int64_t *_ref__tuple_1_star_int64_t;
typedef struct chpl__ir_these_DefaultRectangularDom_1_int64_t_one_s {
  DefaultRectangularDom_1_int64_t_one F0_this;
  int64_t F1_tasksPerLocale;
  chpl_bool F2_ignoreRunning;
  int64_t F3_minIndicesPerTask;
  _ref__tuple_1_star_int64_t F4_offset;
} _ir_these_DefaultRectangularDom_1_int64_t_one;

typedef _ir_these_DefaultRectangularDom_1_int64_t_one *_ref__ir_these_DefaultRectangularDom_1_int64_t_one;
typedef struct chpl__ir_these_TaskErrors_s {
  TaskErrors F0_this;
} _ir_these_TaskErrors;

typedef _ir_these_TaskErrors *_ref__ir_these_TaskErrors;
typedef _ir_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t *_ref__ir_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t;
typedef range_int64_t_both_one _tuple_1_star_range_int64_t_both_one[1];

typedef _tuple_1_star_range_int64_t_both_one *_ref__tuple_1_star_range_int64_t_both_one;
typedef struct chpl__ir_these_help_DefaultRectangularDom_1_int64_t_one_s {
  DefaultRectangularDom_1_int64_t_one F0_this;
  _ref__tuple_1_star_range_int64_t_both_one F1_block;
} _ir_these_help_DefaultRectangularDom_1_int64_t_one;

typedef _ir_these_help_DefaultRectangularDom_1_int64_t_one *_ref__ir_these_help_DefaultRectangularDom_1_int64_t_one;
typedef struct chpl__ir_these_range_int64_t_both_one_s {
  range_int64_t_both_one F0_this;
} _ir_these_range_int64_t_both_one;

typedef _ir_these_range_int64_t_both_one *_ref__ir_these_range_int64_t_both_one;
typedef _nilType *_ref__nilType;
typedef struct chpl__owned_BadFormatError_s {
  BadFormatError chpl_p;
} _owned_BadFormatError;

typedef _owned_BadFormatError *_ref__owned_BadFormatError;
typedef struct chpl__owned_BlockingIoError_s {
  BlockingIoError chpl_p;
} _owned_BlockingIoError;

typedef _owned_BlockingIoError *_ref__owned_BlockingIoError;
typedef struct chpl__owned_BrokenPipeError_s {
  BrokenPipeError chpl_p;
} _owned_BrokenPipeError;

typedef _owned_BrokenPipeError *_ref__owned_BrokenPipeError;
typedef struct chpl__owned_ChildProcessError_s {
  ChildProcessError chpl_p;
} _owned_ChildProcessError;

typedef _owned_ChildProcessError *_ref__owned_ChildProcessError;
typedef struct chpl__owned_CodepointSplitError_s {
  CodepointSplitError chpl_p;
} _owned_CodepointSplitError;

typedef _owned_CodepointSplitError *_ref__owned_CodepointSplitError;
typedef struct chpl__owned_ConnectionAbortedError_s {
  ConnectionAbortedError chpl_p;
} _owned_ConnectionAbortedError;

typedef _owned_ConnectionAbortedError *_ref__owned_ConnectionAbortedError;
typedef struct chpl__owned_ConnectionRefusedError_s {
  ConnectionRefusedError chpl_p;
} _owned_ConnectionRefusedError;

typedef _owned_ConnectionRefusedError *_ref__owned_ConnectionRefusedError;
typedef struct chpl__owned_ConnectionResetError_s {
  ConnectionResetError chpl_p;
} _owned_ConnectionResetError;

typedef _owned_ConnectionResetError *_ref__owned_ConnectionResetError;
typedef struct chpl__owned_DecodeError_s {
  DecodeError chpl_p;
} _owned_DecodeError;

typedef _owned_DecodeError *_ref__owned_DecodeError;
typedef struct chpl__owned_EofError_s {
  EofError chpl_p;
} _owned_EofError;

typedef _owned_EofError *_ref__owned_EofError;
typedef struct chpl__owned_Error_s {
  Error chpl_p;
} _owned_Error;

typedef _owned_Error *_ref__owned_Error;
typedef struct chpl__owned_Error2_s {
  Error chpl_p;
} _owned_Error2;

typedef _owned_Error2 *_ref__owned_Error2;
typedef struct chpl__owned_FileExistsError_s {
  FileExistsError chpl_p;
} _owned_FileExistsError;

typedef _owned_FileExistsError *_ref__owned_FileExistsError;
typedef struct chpl__owned_FileNotFoundError_s {
  FileNotFoundError chpl_p;
} _owned_FileNotFoundError;

typedef _owned_FileNotFoundError *_ref__owned_FileNotFoundError;
typedef struct chpl__owned_IllegalArgumentError_s {
  IllegalArgumentError chpl_p;
} _owned_IllegalArgumentError;

typedef _owned_IllegalArgumentError *_ref__owned_IllegalArgumentError;
typedef struct chpl__owned_IllegalArgumentError2_s {
  IllegalArgumentError chpl_p;
} _owned_IllegalArgumentError2;

typedef _owned_IllegalArgumentError2 *_ref__owned_IllegalArgumentError2;
typedef struct chpl__owned_InterruptedError_s {
  InterruptedError chpl_p;
} _owned_InterruptedError;

typedef _owned_InterruptedError *_ref__owned_InterruptedError;
typedef struct chpl__owned_IoError_s {
  IoError chpl_p;
} _owned_IoError;

typedef _owned_IoError *_ref__owned_IoError;
typedef struct chpl__owned_IsADirectoryError_s {
  IsADirectoryError chpl_p;
} _owned_IsADirectoryError;

typedef _owned_IsADirectoryError *_ref__owned_IsADirectoryError;
typedef struct chpl__owned_NilClassError_s {
  NilClassError chpl_p;
} _owned_NilClassError;

typedef _owned_NilClassError *_ref__owned_NilClassError;
typedef struct chpl__owned_NotADirectoryError_s {
  NotADirectoryError chpl_p;
} _owned_NotADirectoryError;

typedef _owned_NotADirectoryError *_ref__owned_NotADirectoryError;
typedef struct chpl__owned_PermissionError_s {
  PermissionError chpl_p;
} _owned_PermissionError;

typedef _owned_PermissionError *_ref__owned_PermissionError;
typedef struct chpl__owned_ProcessLookupError_s {
  ProcessLookupError chpl_p;
} _owned_ProcessLookupError;

typedef _owned_ProcessLookupError *_ref__owned_ProcessLookupError;
typedef struct chpl__owned_Remote_R_s {
  Remote_R chpl_p;
} _owned_Remote_R;

typedef _owned_Remote_R *_ref__owned_Remote_R;
typedef struct chpl__owned_SystemError_s {
  SystemError chpl_p;
} _owned_SystemError;

typedef _owned_SystemError *_ref__owned_SystemError;
typedef struct chpl__owned_TaskErrors_s {
  TaskErrors chpl_p;
} _owned_TaskErrors;

typedef _owned_TaskErrors *_ref__owned_TaskErrors;
typedef struct chpl__owned_TimeoutError_s {
  TimeoutError chpl_p;
} _owned_TimeoutError;

typedef _owned_TimeoutError *_ref__owned_TimeoutError;
typedef struct chpl__owned_UnexpectedEofError_s {
  UnexpectedEofError chpl_p;
} _owned_UnexpectedEofError;

typedef _owned_UnexpectedEofError *_ref__owned_UnexpectedEofError;
typedef struct chpl__owned__RemoteVarContainer_R_s {
  chpl___RemoteVarContainer_R chpl_p;
} _owned__RemoteVarContainer_R;

typedef _owned__RemoteVarContainer_R *_ref__owned__RemoteVarContainer_R;
typedef struct chpl__owned__RemoteVarContainer_R2_s {
  chpl___RemoteVarContainer_R chpl_p;
} _owned__RemoteVarContainer_R2;

typedef _owned__RemoteVarContainer_R2 *_ref__owned__RemoteVarContainer_R2;
typedef _serializeWrapper_binaryDeserializer *_ref__serializeWrapper_binaryDeserializer;
typedef _serializeWrapper_binarySerializer *_ref__serializeWrapper_binarySerializer;
typedef _serializeWrapper_defaultDeserializer *_ref__serializeWrapper_defaultDeserializer;
typedef _serializeWrapper_defaultSerializer *_ref__serializeWrapper_defaultSerializer;
typedef struct chpl__shared__serializeWrapper_defaultDeserializer_s {
  _serializeWrapper_defaultDeserializer chpl_p;
  ReferenceCount chpl_pn;
} _shared__serializeWrapper_defaultDeserializer;

typedef _shared__serializeWrapper_defaultDeserializer *_ref__shared__serializeWrapper_defaultDeserializer;
typedef struct chpl__shared__serializeWrapper_defaultDeserializer2_s {
  _serializeWrapper_defaultDeserializer chpl_p;
  ReferenceCount chpl_pn;
} _shared__serializeWrapper_defaultDeserializer2;

typedef _shared__serializeWrapper_defaultDeserializer2 *_ref__shared__serializeWrapper_defaultDeserializer2;
typedef struct chpl__shared__serializeWrapper_defaultSerializer2_s {
  _serializeWrapper_defaultSerializer chpl_p;
  ReferenceCount chpl_pn;
} _shared__serializeWrapper_defaultSerializer2;

typedef _shared__serializeWrapper_defaultSerializer2 *_ref__shared__serializeWrapper_defaultSerializer;
typedef _shared__serializeWrapper_defaultSerializer *_ref__shared__serializeWrapper_defaultSerializer2;
typedef struct chpl__tr_chpl__thunk2_s {
  uint8_t dummyFieldToAvoidWarning;
} _tr_chpl__thunk2;

typedef _tr_chpl__thunk2 *_ref__tr_chpl__thunk2;
typedef _ref_R _tuple_1_star__ref_R[1];

typedef _tuple_1_star__ref_R *_ref__tuple_1_star__ref_R;
typedef _ref__owned__RemoteVarContainer_R _tuple_1_star__ref__owned__RemoteVarContainer_R[1];

typedef _tuple_1_star__ref__owned__RemoteVarContainer_R *_ref__tuple_1_star__ref__owned__RemoteVarContainer_R;
typedef struct chpl_chpl_ioNewline_s {
  chpl_bool skipWhitespaceOnly;
} chpl_ioNewline;

typedef chpl_ioNewline *_ref_chpl_ioNewline;
typedef _ref_chpl_ioNewline _tuple_1_star__ref_chpl_ioNewline[1];

typedef _tuple_1_star__ref_chpl_ioNewline *_ref__tuple_1_star__ref_chpl_ioNewline;
typedef const int8_t *c_ptrConst_int8_t;
typedef c_ptrConst_int8_t _tuple_1_star_c_ptrConst_int8_t[1];

typedef _tuple_1_star_c_ptrConst_int8_t *_ref__tuple_1_star_c_ptrConst_int8_t;
typedef struct chpl__tuple_2_BaseArr_BaseDom_s {
  BaseArr x0;
  BaseDom x1;
} _tuple_2_BaseArr_BaseDom;

typedef _tuple_2_BaseArr_BaseDom *_ref__tuple_2_BaseArr_BaseDom;
typedef struct chpl__tuple_2_BaseDom_BaseDist_s {
  BaseDom x0;
  BaseDist x1;
} _tuple_2_BaseDom_BaseDist;

typedef _tuple_2_BaseDom_BaseDist *_ref__tuple_2_BaseDom_BaseDist;
typedef struct chpl__tuple_2_Remote_R__ref_chpl_ioNewline_s {
  Remote_R x0;
  _ref_chpl_ioNewline x1;
} _tuple_2_Remote_R__ref_chpl_ioNewline;

typedef _tuple_2_Remote_R__ref_chpl_ioNewline *_ref__tuple_2_Remote_R__ref_chpl_ioNewline;
typedef struct chpl__tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string_s {
  _ic_these_range_int64_t_both_one x0;
  _ic_chpl_bytes__ref_string x1;
} _tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string;

typedef _tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string *_ref__tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string;
typedef struct chpl__tuple_2__ref_byteIndex_int64_t_s {
  _ref_byteIndex x0;
  int64_t x1;
} _tuple_2__ref_byteIndex_int64_t;

typedef _tuple_2__ref_byteIndex_int64_t *_ref__tuple_2__ref_byteIndex_int64_t;
typedef struct chpl__tuple_2__ref_string__ref_chpl_ioNewline_s {
  _ref_string x0;
  _ref_chpl_ioNewline x1;
} _tuple_2__ref_string__ref_chpl_ioNewline;

typedef _tuple_2__ref_string__ref_chpl_ioNewline *_ref__tuple_2__ref_string__ref_chpl_ioNewline;
typedef struct chpl__tuple_2__ref_string_int64_t_s {
  _ref_string x0;
  int64_t x1;
} _tuple_2__ref_string_int64_t;

typedef _tuple_2__ref_string_int64_t *_ref__tuple_2__ref_string_int64_t;
typedef struct chpl__tuple_2__ref_string_uint64_t_s {
  _ref_string x0;
  uint64_t x1;
} _tuple_2__ref_string_uint64_t;

typedef _tuple_2__ref_string_uint64_t *_ref__tuple_2__ref_string_uint64_t;
typedef struct chpl__tuple_2_byteIndex_int64_t_s {
  byteIndex x0;
  int64_t x1;
} _tuple_2_byteIndex_int64_t;

typedef _tuple_2_byteIndex_int64_t *_ref__tuple_2_byteIndex_int64_t;
typedef struct chpl__tuple_2_c_ptr_uint8_t_int64_t_s {
  c_ptr_uint8_t x0;
  int64_t x1;
} _tuple_2_c_ptr_uint8_t_int64_t;

typedef _tuple_2_c_ptr_uint8_t_int64_t *_ref__tuple_2_c_ptr_uint8_t_int64_t;
typedef struct chpl__tuple_2_range_int64_t_both_one_int64_t_s {
  range_int64_t_both_one x0;
  int64_t x1;
} _tuple_2_range_int64_t_both_one_int64_t;

typedef _tuple_2_range_int64_t_both_one_int64_t *_ref__tuple_2_range_int64_t_both_one_int64_t;
typedef int64_t _tuple_2_star_int64_t[2];

typedef _tuple_2_star_int64_t *_ref__tuple_2_star_int64_t;
typedef struct chpl__tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline_s {
  _ref__owned_Remote_R x0;
  Remote_R x1;
  _ref_chpl_ioNewline x2;
} _tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline;

typedef _tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline *_ref__tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline;
typedef struct chpl__tuple_3__ref_string_ArrayInit__ref_string_s {
  _ref_string x0;
  ArrayInit x1;
  _ref_string x2;
} _tuple_3__ref_string_ArrayInit__ref_string;

typedef _tuple_3__ref_string_ArrayInit__ref_string *_ref__tuple_3__ref_string_ArrayInit__ref_string;
typedef struct chpl__tuple_3__ref_string_int64_t__ref_string_s {
  _ref_string x0;
  int64_t x1;
  _ref_string x2;
} _tuple_3__ref_string_int64_t__ref_string;

typedef _tuple_3__ref_string_int64_t__ref_string *_ref__tuple_3__ref_string_int64_t__ref_string;
typedef struct chpl__tuple_3_int32_t__ref_byteIndex_int64_t_s {
  int32_t x0;
  _ref_byteIndex x1;
  int64_t x2;
} _tuple_3_int32_t__ref_byteIndex_int64_t;

typedef _tuple_3_int32_t__ref_byteIndex_int64_t *_ref__tuple_3_int32_t__ref_byteIndex_int64_t;
typedef struct chpl__tuple_3_int32_t_byteIndex_int64_t_s {
  int32_t x0;
  byteIndex x1;
  int64_t x2;
} _tuple_3_int32_t_byteIndex_int64_t;

typedef _tuple_3_int32_t_byteIndex_int64_t *_ref__tuple_3_int32_t_byteIndex_int64_t;
typedef struct chpl__tuple_3_syserr_int32_t_int32_t_s {
  syserr x0;
  int32_t x1;
  int32_t x2;
} _tuple_3_syserr_int32_t_int32_t;

typedef _tuple_3_syserr_int32_t_int32_t *_ref__tuple_3_syserr_int32_t_int32_t;
typedef struct chpl__tuple_4__ref_string_int32_t__ref_string_int64_t_s {
  _ref_string x0;
  int32_t x1;
  _ref_string x2;
  int64_t x3;
} _tuple_4__ref_string_int32_t__ref_string_int64_t;

typedef _tuple_4__ref_string_int32_t__ref_string_int64_t *_ref__tuple_4__ref_string_int32_t__ref_string_int64_t;
typedef struct chpl__tuple_4__ref_string_int64_t__ref_string_int64_t_s {
  _ref_string x0;
  int64_t x1;
  _ref_string x2;
  int64_t x3;
} _tuple_4__ref_string_int64_t__ref_string_int64_t;

typedef _tuple_4__ref_string_int64_t__ref_string_int64_t *_ref__tuple_4__ref_string_int64_t__ref_string_int64_t;
typedef struct chpl_range_byteIndex_both_one_s {
  int64_t _low;
  int64_t _high;
} range_byteIndex_both_one;

typedef struct chpl__tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t_s {
  _ref_string x0;
  range_byteIndex_both_one x1;
  _ref_string x2;
  int64_t x3;
} _tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t;

typedef _tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t *_ref__tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t;
typedef struct chpl_range_byteIndex_high_one_s {
  int64_t _low;
  int64_t _high;
} range_byteIndex_high_one;

typedef struct chpl__tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t_s {
  _ref_string x0;
  range_byteIndex_high_one x1;
  _ref_string x2;
  int64_t x3;
} _tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t;

typedef _tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t *_ref__tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t;
typedef struct chpl_range_byteIndex_low_one_s {
  int64_t _low;
  int64_t _high;
} range_byteIndex_low_one;

typedef struct chpl__tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t_s {
  _ref_string x0;
  range_byteIndex_low_one x1;
  _ref_string x2;
  int64_t x3;
} _tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t;

typedef _tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t *_ref__tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t;
typedef struct chpl__tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t_s {
  _ref_string x0;
  range_int64_t_both_one x1;
  _ref_string x2;
  int64_t x3;
} _tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t;

typedef _tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t *_ref__tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t;
typedef struct chpl_range_int64_t_low_one_s {
  int64_t _low;
  int64_t _high;
} range_int64_t_low_one;

typedef struct chpl__tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t_s {
  _ref_string x0;
  range_int64_t_low_one x1;
  _ref_string x2;
  int64_t x3;
} _tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t;

typedef _tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t *_ref__tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t;
typedef _ref_string _tuple_4_star__ref_string[4];

typedef _tuple_4_star__ref_string *_ref__tuple_4_star__ref_string;
typedef struct chpl__tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one_s {
  _ref_string x0;
  _ref_string x1;
  int64_t x2;
  _ref_string x3;
  range_int64_t_both_one x4;
} _tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one;

typedef _tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one *_ref__tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one;
typedef struct chpl__tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string_s {
  _ref_string x0;
  int64_t x1;
  _ref_string x2;
  int64_t x3;
  _ref_string x4;
} _tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string;

typedef _tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string *_ref__tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string;
typedef _ref_string _tuple_6_star__ref_string[6];

typedef _tuple_6_star__ref_string *_ref__tuple_6_star__ref_string;
typedef string _tuple_6_star_string[6];

typedef _tuple_6_star_string *_ref__tuple_6_star_string;
typedef struct chpl__tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline_s {
  _ref_string x0;
  _ref_string x1;
  _ref_string x2;
  Remote_R x3;
  _ref_string x4;
  _ref_R x5;
  _ref_chpl_ioNewline x6;
} _tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline;

typedef _tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline *_ref__tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline;
typedef atomic_bool *_ref_atomic_bool;
typedef atomic_int_least64_t *_ref_atomic_int_least64_t;
typedef struct chpl_binaryDeserializer_s {
  endianness endian;
  chpl_bool _structured;
} binaryDeserializer;

typedef binaryDeserializer *_ref_binaryDeserializer;
typedef struct chpl_binarySerializer_s {
  endianness endian;
  chpl_bool _structured;
} binarySerializer;

typedef binarySerializer *_ref_binarySerializer;
typedef bytes *_ref_bytes;
typedef c_fn_ptr_rehook *_ref_c_fn_ptr_rehook;
typedef c_ptrConst_int8_t *_ref_c_ptrConst_int8_t;
typedef _cfiletype *c_ptr__cfiletype;
typedef c_ptr__cfiletype *_ref_c_ptr__cfiletype;
typedef _ddata_int64_t *c_ptr__ddata_int64_t;
typedef c_ptr__ddata_int64_t *_ref_c_ptr__ddata_int64_t;
typedef _ddata_locale *c_ptr__ddata_locale;
typedef c_ptr__ddata_locale *_ref_c_ptr__ddata_locale;
typedef _ddata_uint64_t *c_ptr__ddata_uint64_t;
typedef c_ptr__ddata_uint64_t *_ref_c_ptr__ddata_uint64_t;
typedef _owned_Error2 *c_ptr__owned_Error;
typedef c_ptr__owned_Error *_ref_c_ptr__owned_Error;
typedef c_ptrConst_int8_t *c_ptr_c_ptrConst_int8_t;
typedef c_ptr_c_ptrConst_int8_t *_ref_c_ptr_c_ptrConst_int8_t;
typedef void *c_ptr_void;
typedef c_ptr_void *c_ptr_c_ptr_void;
typedef c_ptr_c_ptr_void *_ref_c_ptr_c_ptr_void;
typedef c_ptr_chpl_bool *_ref_c_ptr_chpl_bool;
typedef chpl_localeID_t *c_ptr_chpl_localeID_t;
typedef c_ptr_chpl_localeID_t *_ref_c_ptr_chpl_localeID_t;
typedef chpl_task_infoChapel_t *c_ptr_chpl_task_infoChapel_t;
typedef c_ptr_chpl_task_infoChapel_t *_ref_c_ptr_chpl_task_infoChapel_t;
typedef int64_t *c_ptr_int64_t;
typedef c_ptr_int64_t *_ref_c_ptr_int64_t;
typedef c_ptr_qio_channel_t *_ref_c_ptr_qio_channel_t;
typedef qio_file_t *c_ptr_qio_file_t;
typedef c_ptr_qio_file_t *_ref_c_ptr_qio_file_t;
typedef raw_c_void_ptr *c_ptr_raw_c_void_ptr;
typedef c_ptr_raw_c_void_ptr *_ref_c_ptr_raw_c_void_ptr;
typedef c_ptr_uint8_t *_ref_c_ptr_uint8_t;
typedef c_ptr_void *_ref_c_ptr_void;
typedef struct chpl_chpl_LocalSpinlock_s {
  AtomicBool l;
} chpl_LocalSpinlock;

typedef chpl_LocalSpinlock *_ref_chpl_LocalSpinlock;
typedef chpl_ModuleDeinit *_ref_chpl_ModuleDeinit;
typedef struct chpl_chpl_TaskErrors_s {
  Error _head;
  chpl_LocalSpinlock _errorsLock;
} chpl_TaskErrors;

typedef chpl_TaskErrors *_ref_chpl_TaskErrors;
typedef chpl_bool *_ref_chpl_bool;
typedef chpl_ddataResizePolicy *_ref_chpl_ddataResizePolicy;
typedef chpl_localeID_t *_ref_chpl_localeID_t;
typedef chpl_main_argument *_ref_chpl_main_argument;
typedef chpl_opaque_array *_ref_chpl_opaque_array;
typedef struct chpl_chpl_root_locale_accum_s {
  AtomicT_int64_t nPUsPhysAcc;
  AtomicT_int64_t nPUsPhysAll;
  AtomicT_int64_t nPUsLogAcc;
  AtomicT_int64_t nPUsLogAll;
  AtomicT_int64_t maxTaskPar;
} chpl_root_locale_accum;

typedef chpl_root_locale_accum *_ref_chpl_root_locale_accum;
typedef chpl_task_bundle_t *_ref_chpl_task_bundle_t;
typedef struct chpl_codepointIndex_s {
  int64_t _cpindex;
} codepointIndex;

typedef codepointIndex *_ref_codepointIndex;
typedef struct chpl_defaultDeserializer_s {
  uint8_t dummyFieldToAvoidWarning;
} defaultDeserializer;

typedef defaultDeserializer *_ref_defaultDeserializer;
typedef struct chpl_defaultSerializer_s {
  uint8_t dummyFieldToAvoidWarning;
} defaultSerializer;

typedef defaultSerializer *_ref_defaultSerializer;
typedef struct chpl_endCountDiagsManager_s {
  c_ptr_chpl_task_infoChapel_t taskInfo;
  chpl_bool prevDiagsDisabledVal;
} endCountDiagsManager;

typedef endCountDiagsManager *_ref_endCountDiagsManager;
typedef struct chpl_file_s {
  locale _home;
  c_ptr_qio_file_t _file_internal;
} file;

typedef file *_ref_file;
typedef struct chpl_fileReader_F_defaultDeserializer_s {
  locale _home;
  c_ptr_qio_channel_t _channel_internal;
  _shared__serializeWrapper_defaultDeserializer2 _deserializer;
  locale _readWriteThisFromLocale;
} fileReader_F_defaultDeserializer;

typedef fileReader_F_defaultDeserializer *_ref_fileReader_F_defaultDeserializer;
typedef struct chpl_fileReader_T_defaultDeserializer_s {
  locale _home;
  c_ptr_qio_channel_t _channel_internal;
  _shared__serializeWrapper_defaultDeserializer2 _deserializer;
  locale _readWriteThisFromLocale;
} fileReader_T_defaultDeserializer;

typedef fileReader_T_defaultDeserializer *_ref_fileReader_T_defaultDeserializer;
typedef fileWriter_F_defaultSerializer *_ref_fileWriter_F_defaultSerializer;
typedef struct chpl_fileWriter_T_defaultSerializer_s {
  locale _home;
  c_ptr_qio_channel_t _channel_internal;
  _shared__serializeWrapper_defaultSerializer _serializer;
  locale _readWriteThisFromLocale;
} fileWriter_T_defaultSerializer;

typedef fileWriter_T_defaultSerializer *_ref_fileWriter_T_defaultSerializer;
typedef int32_t *_ref_int32_t;
typedef int64_t *_ref_int64_t;
typedef struct chpl_ioHintSet_s {
  int32_t _internal;
} ioHintSet;

typedef ioHintSet *_ref_ioHintSet;
typedef iostyleInternal *_ref_iostyleInternal;
typedef locale *_ref_locale;
typedef qio_channel_t *_ref_qio_channel_t;
typedef qio_file_t *_ref_qio_file_t;
typedef range_byteIndex_both_one *_ref_range_byteIndex_both_one;
typedef range_byteIndex_high_one *_ref_range_byteIndex_high_one;
typedef range_byteIndex_low_one *_ref_range_byteIndex_low_one;
typedef range_int64_t_both_one *_ref_range_int64_t_both_one;
typedef struct chpl_range_int64_t_high_one_s {
  int64_t _low;
  int64_t _high;
} range_int64_t_high_one;

typedef range_int64_t_high_one *_ref_range_int64_t_high_one;
typedef range_int64_t_low_one *_ref_range_int64_t_low_one;
typedef raw_c_void_ptr *_ref_raw_c_void_ptr;
typedef syserr *_ref_syserr;
typedef uint64_t *_ref_uint64_t;
typedef uint8_t *_ref_uint8_t;
/*** Classes ***/

typedef struct chpl__class_localscoforall_fn_s {
  chpl_task_bundle_t _runtime_hdr;
  int64_t _0_len;
  int64_t _1_numChunks;
  range_int64_t_both_one _2_call_tmp;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount;
  int64_t _4_chunk;
  _ddata_locale _5_x;
  int64_t _ln;
  int32_t _fn;
} chpl__class_localscoforall_fn_object;

typedef struct chpl__class_localscoforall_fn2_s {
  chpl_task_bundle_t _runtime_hdr;
  int64_t _0_len;
  int64_t _1_numChunks;
  range_int64_t_both_one _2_call_tmp;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount;
  int64_t _4_chunk;
  _ddata_int64_t _5_x;
  int64_t _ln;
  int32_t _fn;
} chpl__class_localscoforall_fn2_object;

typedef struct chpl__class_localscoforall_fn3_s {
  chpl_task_bundle_t _runtime_hdr;
  int64_t _0_len;
  int64_t _1_numChunks;
  range_int64_t_both_one _2_call_tmp;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount;
  int64_t _4_chunk;
  _ddata_uint64_t _5_x;
  int64_t _ln;
  int32_t _fn;
} chpl__class_localscoforall_fn3_object;

typedef struct chpl__class_localscoforall_fn4_s {
  chpl_task_bundle_t _runtime_hdr;
  int64_t _0_len;
  int64_t _1_numChunks;
  range_int64_t_both_one _2_call_tmp;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount;
  int64_t _4_chunk;
  _ddata_locale _5_oldDdata;
  int64_t _ln;
  int32_t _fn;
} chpl__class_localscoforall_fn4_object;

typedef struct chpl__class_localscoforall_fn5_s {
  chpl_task_bundle_t _runtime_hdr;
  int64_t _0_i;
  chpl___EndCount_AtomicT_int64_t_int64_t _1__coforallCount;
  int64_t _ln;
  int32_t _fn;
} chpl__class_localscoforall_fn5_object;

typedef struct chpl__class_localscoforall_fn6_s {
  chpl_task_bundle_t _runtime_hdr;
  int64_t _0_numChunks;
  int64_t _1_parDim;
  DefaultRectangularDom_1_int64_t_one _2_coerce_tmp;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount;
  int64_t _4_chunk;
  DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t _6_copy;
  DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t _7_this;
  int64_t _ln;
  int32_t _fn;
} chpl__class_localscoforall_fn6_object;

typedef struct chpl__class_localscoforall_fn7_s {
  chpl_task_bundle_t _runtime_hdr;
  int64_t _0_numChunks;
  int64_t _1_parDim;
  DefaultRectangularDom_1_int64_t_one _2_coerce_tmp;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount;
  int64_t _4_chunk;
  DefaultRectangularArr_1_int64_t_one_locale_int64_t _5_copy;
  DefaultRectangularArr_1_int64_t_one_locale_int64_t _6_this;
  int64_t _ln;
  int32_t _fn;
} chpl__class_localscoforall_fn7_object;

typedef struct chpl__class_localscoforall_fn8_s {
  chpl_task_bundle_t _runtime_hdr;
  int64_t _0_numChunks;
  int64_t _1_parDim;
  DefaultRectangularDom_1_int64_t_one _2_coerce_tmp;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount;
  int64_t _4_chunk;
  DefaultRectangularArr_1_int64_t_one_int64_t_int64_t _6_copy;
  DefaultRectangularArr_1_int64_t_one_int64_t_int64_t _7_this;
  int64_t _ln;
  int32_t _fn;
} chpl__class_localscoforall_fn8_object;

typedef struct chpl__class_localscoforall_fn9_s {
  chpl_task_bundle_t _runtime_hdr;
  int64_t _0_numChunks;
  int64_t _1_parDim;
  DefaultRectangularDom_1_int64_t_one _2_coerce_tmp;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount;
  int64_t _4_chunk;
  _domain_DefaultRectangularDom_1_int64_t_one _5_eaAddrOf;
  DefaultRectangularArr_1_int64_t_one_locale_int64_t _6_this;
  int64_t _ln;
  int32_t _fn;
} chpl__class_localscoforall_fn9_object;

typedef struct chpl__class_localscoforall_fn10_s {
  chpl_task_bundle_t _runtime_hdr;
  int64_t _0_len;
  int64_t _1_numChunks;
  range_int64_t_both_one _2_call_tmp;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount;
  int64_t _4_chunk;
  DefaultRectangularArr_1_int64_t_one_locale_int64_t _5_this;
  int64_t _ln;
  int32_t _fn;
} chpl__class_localscoforall_fn10_object;

typedef struct chpl__class_localscoforall_fn11_s {
  chpl_task_bundle_t _runtime_hdr;
  chpl___EndCount_AtomicT_int64_t_int64_t _0__coforallCount;
  int64_t _1_locIdx;
  RootLocale _2_dst;
  _ref_chpl_root_locale_accum _3_root_accum;
  int64_t _ln;
  int32_t _fn;
} chpl__class_localscoforall_fn11_object;

typedef struct chpl__class_localscoforall_fn12_s {
  chpl_task_bundle_t _runtime_hdr;
  chpl___EndCount_AtomicT_int64_t_int64_t _0__coforallCount;
  int64_t _1_locIdx;
  RootLocale _2_dst;
  int64_t _ln;
  int32_t _fn;
} chpl__class_localscoforall_fn12_object;

typedef struct chpl_RootClass_s {
  chpl__class_id chpl__cid;
} chpl_RootClass_object;

typedef struct chpl__ic_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t F0_this;
  _ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t F1__iterator;
  _ic_chpl__serialViewIter F2__iterator;
  _ic_chpl__serialViewIter1D F3__iterator;
  range_int64_t_both_one F4_call_tmp;
  DefaultRectangularArr_1_int64_t_one_locale_int64_t F5_info;
  _ic_chpl_direct_pos_stride_range_iter F6__iterator;
  int64_t F7_i;
  int64_t F8_low;
  _ref_locale value;
} chpl__ic_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t_object;

typedef struct chpl_chpl___EndCountBase_s /* : RootClass */ {
  chpl_RootClass_object super;
  chpl_TaskErrors errors;
} chpl_chpl___EndCountBase_object;

typedef struct chpl_chpl_ModuleDeinit_s /* : RootClass */ {
  chpl_RootClass_object super;
  c_ptrConst_int8_t moduleName;
  c_fn_ptr_rehook deinitFun;
  chpl_ModuleDeinit prevModule;
} chpl_chpl_ModuleDeinit_object;

typedef struct chpl_BaseDist_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t _doms_containing_dist;
  chpl_LocalSpinlock _domsLock;
  chpl_bool _free_when_no_doms;
  int64_t pid;
} chpl_BaseDist_object;

typedef struct chpl_BaseDom_s /* : RootClass */ {
  chpl_RootClass_object super;
  BaseArr _arrs_head;
  int64_t _arrs_containing_dom;
  chpl_LocalSpinlock _arrsLock;
  chpl_bool _free_when_no_arrs;
  int64_t pid;
  chpl_bool definedConst;
} chpl_BaseDom_object;

typedef struct chpl__ic__arrs_BaseDom_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  BaseDom F0_this;
  BaseArr F1_tmp;
  BaseArr value;
} chpl__ic__arrs_BaseDom_object;

typedef struct chpl_BaseArr_s /* : RootClass */ {
  chpl_RootClass_object super;
  BaseArr prev;
  BaseArr next;
  int64_t pid;
  chpl_bool _decEltRefCounts;
  chpl_ddataResizePolicy _resizePolicy;
} chpl_BaseArr_object;

typedef struct chpl_BaseLocale_s /* : RootClass */ {
  chpl_RootClass_object super;
  locale parent;
  int64_t nPUsLogAcc;
  int64_t nPUsLogAll;
  int64_t nPUsPhysAcc;
  int64_t nPUsPhysAll;
  int64_t maxTaskPar;
  AtomicT_int64_t runningTaskCounter;
} chpl_BaseLocale_object;

typedef struct chpl__ic_chpl_direct_range_iter_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  _ic_chpl_direct_param_stride_range_iter F0__iterator;
  int64_t F1_i;
  int64_t F2_low;
  int64_t value;
} chpl__ic_chpl_direct_range_iter_object;

typedef struct chpl__ic_chpl_direct_range_iter2_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  _ic_chpl_direct_param_stride_range_iter F0__iterator;
  int64_t F1_i;
  int64_t F2_low;
  int64_t value;
} chpl__ic_chpl_direct_range_iter2_object;

typedef struct chpl__ic_chpl_direct_range_iter3_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  int64_t F0_low;
  int64_t F1_high;
  _ic_chpl_direct_param_stride_range_iter F2__iterator;
  int64_t F3_i;
  int64_t F4_low;
  int64_t value;
} chpl__ic_chpl_direct_range_iter3_object;

typedef struct chpl__ic_chpl_direct_counted_range_iter_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  int64_t F0_low;
  int64_t F1_count;
  _ic_chpl_direct_counted_range_iter_helper F2__iterator;
  _ic_chpl_direct_param_stride_range_iter F3__iterator;
  int64_t F4_i;
  int64_t F5_low;
  int64_t value;
} chpl__ic_chpl_direct_counted_range_iter_object;

typedef struct chpl__ic_chpl_direct_counted_range_iter_helper_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  int64_t F0_low;
  int64_t F1_count;
  _ic_chpl_direct_param_stride_range_iter F2__iterator;
  int64_t F3_i;
  int64_t F4_low;
  int64_t value;
} chpl__ic_chpl_direct_counted_range_iter_helper_object;

typedef struct chpl__ic_chpl_direct_pos_stride_range_iter_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  int64_t F0_low;
  int64_t F1_high;
  int64_t F2_stride;
  int64_t value;
} chpl__ic_chpl_direct_pos_stride_range_iter_object;

typedef struct chpl__ic_chpl_direct_param_stride_range_iter_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  int64_t F0_low;
  int64_t F1_high;
  int64_t value;
} chpl__ic_chpl_direct_param_stride_range_iter_object;

typedef struct chpl__ic_these_range_int64_t_both_one_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  range_int64_t_both_one F0_this;
  int64_t F1_i;
  int64_t F2_end;
  int64_t F3_call_tmp;
  int64_t value;
} chpl__ic_these_range_int64_t_both_one_object;

typedef struct chpl__ic_these_help_DefaultRectangularDom_1_int64_t_one_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  DefaultRectangularDom_1_int64_t_one F0_this;
  _ref__tuple_1_star_range_int64_t_both_one F1_block;
  _ic_these_range_int64_t_both_one F2__iterator;
  int64_t F3_i;
  int64_t F4_end;
  int64_t F5_call_tmp;
  int64_t value;
} chpl__ic_these_help_DefaultRectangularDom_1_int64_t_one_object;

typedef struct chpl__ic_these_DefaultRectangularDom_1_int64_t_one_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  DefaultRectangularDom_1_int64_t_one F0_this;
  int64_t F1_tasksPerLocale;
  chpl_bool F2_ignoreRunning;
  int64_t F3_minIndicesPerTask;
  _ref__tuple_1_star_int64_t F4_offset;
  _ic_these_range_int64_t_both_one F5__iterator;
  int64_t F6_i;
  int64_t F7_end;
  int64_t F8_call_tmp;
  int64_t value;
} chpl__ic_these_DefaultRectangularDom_1_int64_t_one_object;

typedef struct chpl__ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  DefaultRectangularArr_1_int64_t_one_locale_int64_t F0_this;
  int64_t F1_tasksPerLocale;
  chpl_bool F2_ignoreRunning;
  int64_t F3_minIndicesPerTask;
  _ic_chpl__serialViewIter F4__iterator;
  _ic_chpl__serialViewIter1D F5__iterator;
  range_int64_t_both_one F6_call_tmp;
  DefaultRectangularArr_1_int64_t_one_locale_int64_t F7_info;
  _ic_chpl_direct_pos_stride_range_iter F8__iterator;
  int64_t F9_i;
  int64_t F10_low;
  _ref_locale value;
} chpl__ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t_object;

typedef struct chpl__ic_chpl__serialViewIter1D_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  DefaultRectangularArr_1_int64_t_one_locale_int64_t F0_arr;
  range_int64_t_both_one F1_viewRange;
  DefaultRectangularArr_1_int64_t_one_locale_int64_t F2_info;
  _ic_chpl_direct_pos_stride_range_iter F3__iterator;
  int64_t F4_i;
  int64_t F5_low;
  _ref_locale value;
} chpl__ic_chpl__serialViewIter1D_object;

typedef struct chpl__ic_chpl__serialViewIter_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  DefaultRectangularArr_1_int64_t_one_locale_int64_t F0_arr;
  DefaultRectangularDom_1_int64_t_one F1_viewDom;
  _ic_chpl__serialViewIter1D F2__iterator;
  range_int64_t_both_one F3_call_tmp;
  DefaultRectangularArr_1_int64_t_one_locale_int64_t F4_info;
  _ic_chpl_direct_pos_stride_range_iter F5__iterator;
  int64_t F6_i;
  int64_t F7_low;
  _ref_locale value;
} chpl__ic_chpl__serialViewIter_object;

typedef struct chpl_ReferenceCount_s /* : RootClass */ {
  chpl_RootClass_object super;
  AtomicT_int64_t strongCount;
  AtomicT_int64_t totalCount;
} chpl_ReferenceCount_object;

typedef struct chpl__ic__cpIndexLen__ref_string_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  _ref_string F0_this;
  _ref_byteIndex F1_start;
  string F2_localThis;
  int64_t F3_i;
  _tuple_3_int32_t_byteIndex_int64_t F4_ret_tmp;
  _tuple_3_int32_t_byteIndex_int64_t value;
} chpl__ic__cpIndexLen__ref_string_object;

typedef struct chpl__ic__indexLen__ref_string_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  _ref_string F0_this;
  _ref_byteIndex F1_start;
  string F2_localThis;
  int64_t F3_i;
  int64_t F4_j;
  byteIndex F5_call_tmp;
  byteIndex F6_ret_tmp;
  _tuple_2__ref_byteIndex_int64_t F7_call_tmp;
  _tuple_2__ref_byteIndex_int64_t F8_ret_tmp;
  _tuple_2_byteIndex_int64_t value;
} chpl__ic__indexLen__ref_string_object;

typedef struct chpl__ic_chpl_bytes__ref_string_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  _ref_string F0_this;
  string F1_localThis;
  _ic_chpl_direct_counted_range_iter F2__iterator;
  _ref_string F3_ref_localThis;
  _ic_chpl_direct_counted_range_iter_helper F4__iterator;
  _ic_chpl_direct_param_stride_range_iter F5__iterator;
  int64_t F6_i;
  int64_t F7_low;
  uint8_t value;
} chpl__ic_chpl_bytes__ref_string_object;

typedef struct chpl__ic_codepoints__ref_string_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  _ref_string F0_this;
  string F1_localThis;
  int64_t F2_i;
  _tuple_3_int32_t_byteIndex_int64_t F3_call_tmp;
  _tuple_3_int32_t_byteIndex_int64_t F4_ret_tmp;
  int32_t value;
} chpl__ic_codepoints__ref_string_object;

typedef struct chpl_Error_s /* : RootClass */ {
  chpl_RootClass_object super;
  Error _next;
  int64_t thrownLine;
  int32_t thrownFileId;
  string _msg;
  chpl_bool _hasThrowInfo;
} chpl_Error_object;

typedef struct chpl__ic_these_TaskErrors_s /* : RootClass */ {
  chpl_RootClass_object super;
  int64_t more;
  TaskErrors F0_this;
  _ic_chpl_direct_counted_range_iter F1__iterator;
  TaskErrors F2_taskInd_this;
  _ic_chpl_direct_counted_range_iter_helper F3__iterator;
  _ic_chpl_direct_param_stride_range_iter F4__iterator;
  int64_t F5_i;
  _ref__owned_Error2 value;
} chpl__ic_these_TaskErrors_object;

typedef struct chpl_QioPluginFile_s /* : RootClass */ {
  chpl_RootClass_object super;
} chpl_QioPluginFile_object;

typedef struct chpl_QioPluginChannel_s /* : RootClass */ {
  chpl_RootClass_object super;
} chpl_QioPluginChannel_object;

typedef struct chpl__serializeWrapper_binaryDeserializer_s /* : RootClass */ {
  chpl_RootClass_object super;
  binaryDeserializer member;
  int64_t chpl____dummy;
} chpl__serializeWrapper_binaryDeserializer_object;

typedef struct chpl__serializeWrapper_binarySerializer_s /* : RootClass */ {
  chpl_RootClass_object super;
  binarySerializer member;
  int64_t chpl____dummy;
} chpl__serializeWrapper_binarySerializer_object;

typedef struct chpl__serializeWrapper_defaultDeserializer_s /* : RootClass */ {
  chpl_RootClass_object super;
  defaultDeserializer member;
  int64_t chpl____dummy;
} chpl__serializeWrapper_defaultDeserializer_object;

typedef struct chpl__serializeWrapper_defaultSerializer_s /* : RootClass */ {
  chpl_RootClass_object super;
  defaultSerializer member;
  int64_t chpl____dummy;
} chpl__serializeWrapper_defaultSerializer_object;

typedef struct chpl_chpl___RemoteVarContainer_R_s /* : RootClass */ {
  chpl_RootClass_object super;
  R containedValue;
} chpl_chpl___RemoteVarContainer_R_object;

typedef struct chpl_Remote_R_s /* : RootClass */ {
  chpl_RootClass_object super;
  _owned__RemoteVarContainer_R value;
} chpl_Remote_R_object;

typedef struct chpl_chpl___EndCount_AtomicT_int64_t_int64_t_s /* : chpl___EndCountBase */ {
  chpl_chpl___EndCountBase_object super;
  AtomicT_int64_t i;
  int64_t taskCnt;
} chpl_chpl___EndCount_AtomicT_int64_t_int64_t_object;

typedef struct chpl_BaseRectangularDom_1_int64_t_one_s /* : BaseDom */ {
  chpl_BaseDom_object super;
} chpl_BaseRectangularDom_1_int64_t_one_object;

typedef struct chpl_BaseArrOverRectangularDom_1_int64_t_one_s /* : BaseArr */ {
  chpl_BaseArr_object super;
} chpl_BaseArrOverRectangularDom_1_int64_t_one_object;

typedef struct chpl_DummyLocale_s /* : BaseLocale */ {
  chpl_BaseLocale_object super;
} chpl_DummyLocale_object;

typedef struct chpl_AbstractLocaleModel_s /* : BaseLocale */ {
  chpl_BaseLocale_object super;
  _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t chpl_singletonThisLocaleArray;
} chpl_AbstractLocaleModel_object;

typedef struct chpl_AbstractRootLocale_s /* : BaseLocale */ {
  chpl_BaseLocale_object super;
} chpl_AbstractRootLocale_object;

typedef struct chpl_DefaultDist_s /* : BaseDist */ {
  chpl_BaseDist_object super;
} chpl_DefaultDist_object;

typedef struct chpl_NilThrownError_s /* : Error */ {
  chpl_Error_object super;
} chpl_NilThrownError_object;

typedef struct chpl_NilClassError_s /* : Error */ {
  chpl_Error_object super;
} chpl_NilClassError_object;

typedef struct chpl_DecodeError_s /* : Error */ {
  chpl_Error_object super;
} chpl_DecodeError_object;

typedef struct chpl_IllegalArgumentError_s /* : Error */ {
  chpl_Error_object super;
} chpl_IllegalArgumentError_object;

typedef struct chpl_CodepointSplitError_s /* : Error */ {
  chpl_Error_object super;
} chpl_CodepointSplitError_object;

typedef struct chpl_TaskErrors_s /* : Error */ {
  chpl_Error_object super;
  int64_t nErrors;
  c_ptr__owned_Error errorsArray;
} chpl_TaskErrors_object;

typedef struct chpl_SystemError_s /* : Error */ {
  chpl_Error_object super;
  syserr err;
  string details;
} chpl_SystemError_object;

typedef struct chpl_EofError_s /* : Error */ {
  chpl_Error_object super;
  string details;
} chpl_EofError_object;

typedef struct chpl_UnexpectedEofError_s /* : Error */ {
  chpl_Error_object super;
  string details;
} chpl_UnexpectedEofError_object;

typedef struct chpl_BadFormatError_s /* : Error */ {
  chpl_Error_object super;
  string details;
} chpl_BadFormatError_object;

typedef struct chpl_BaseRectangularArr_1_int64_t_one_int64_t_s /* : BaseArrOverRectangularDom_1_int64_t_one */ {
  chpl_BaseArrOverRectangularDom_1_int64_t_one_object super;
} chpl_BaseRectangularArr_1_int64_t_one_int64_t_object;

typedef struct chpl_BaseRectangularArr_1_int64_t_one_locale_s /* : BaseArrOverRectangularDom_1_int64_t_one */ {
  chpl_BaseArrOverRectangularDom_1_int64_t_one_object super;
} chpl_BaseRectangularArr_1_int64_t_one_locale_object;

typedef struct chpl_BaseRectangularArr_1_int64_t_one_uint64_t_s /* : BaseArrOverRectangularDom_1_int64_t_one */ {
  chpl_BaseArrOverRectangularDom_1_int64_t_one_object super;
} chpl_BaseRectangularArr_1_int64_t_one_uint64_t_object;

typedef struct chpl_DefaultRectangularDom_1_int64_t_one_s /* : BaseRectangularDom_1_int64_t_one */ {
  chpl_BaseRectangularDom_1_int64_t_one_object super;
  DefaultDist dist;
  _tuple_1_star_range_int64_t_both_one ranges;
} chpl_DefaultRectangularDom_1_int64_t_one_object;

typedef struct chpl_LocaleModel_s /* : AbstractLocaleModel */ {
  chpl_AbstractLocaleModel_object super;
  int64_t _node_id;
  string local_name;
} chpl_LocaleModel_object;

typedef struct chpl_RootLocale_s /* : AbstractRootLocale */ {
  chpl_AbstractRootLocale_object super;
  _domain_DefaultRectangularDom_1_int64_t_one myLocaleSpace;
  _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t myLocales;
} chpl_RootLocale_object;

typedef struct chpl_BlockingIoError_s /* : SystemError */ {
  chpl_SystemError_object super;
} chpl_BlockingIoError_object;

typedef struct chpl_ChildProcessError_s /* : SystemError */ {
  chpl_SystemError_object super;
} chpl_ChildProcessError_object;

typedef struct chpl_ConnectionError_s /* : SystemError */ {
  chpl_SystemError_object super;
} chpl_ConnectionError_object;

typedef struct chpl_FileExistsError_s /* : SystemError */ {
  chpl_SystemError_object super;
} chpl_FileExistsError_object;

typedef struct chpl_FileNotFoundError_s /* : SystemError */ {
  chpl_SystemError_object super;
} chpl_FileNotFoundError_object;

typedef struct chpl_InterruptedError_s /* : SystemError */ {
  chpl_SystemError_object super;
} chpl_InterruptedError_object;

typedef struct chpl_IsADirectoryError_s /* : SystemError */ {
  chpl_SystemError_object super;
} chpl_IsADirectoryError_object;

typedef struct chpl_NotADirectoryError_s /* : SystemError */ {
  chpl_SystemError_object super;
} chpl_NotADirectoryError_object;

typedef struct chpl_PermissionError_s /* : SystemError */ {
  chpl_SystemError_object super;
} chpl_PermissionError_object;

typedef struct chpl_ProcessLookupError_s /* : SystemError */ {
  chpl_SystemError_object super;
} chpl_ProcessLookupError_object;

typedef struct chpl_TimeoutError_s /* : SystemError */ {
  chpl_SystemError_object super;
} chpl_TimeoutError_object;

typedef struct chpl_IoError_s /* : SystemError */ {
  chpl_SystemError_object super;
} chpl_IoError_object;

typedef struct chpl_DefaultRectangularArr_1_int64_t_one_int64_t_int64_t_s /* : BaseRectangularArr_1_int64_t_one_int64_t */ {
  chpl_BaseRectangularArr_1_int64_t_one_int64_t_object super;
  DefaultRectangularDom_1_int64_t_one dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t sizesPerDim;
  _tuple_1_star_int64_t str;
  int64_t factoredOffs;
  _ddata_int64_t data;
  _ddata_int64_t shiftedData;
  c_ptr_void externFreeFunc;
  chpl_bool externArr;
  chpl_bool _borrowed;
  chpl_bool callPostAlloc;
  chpl_bool deinitElts;
} chpl_DefaultRectangularArr_1_int64_t_one_int64_t_int64_t_object;

typedef struct chpl_DefaultRectangularArr_1_int64_t_one_locale_int64_t_s /* : BaseRectangularArr_1_int64_t_one_locale */ {
  chpl_BaseRectangularArr_1_int64_t_one_locale_object super;
  DefaultRectangularDom_1_int64_t_one dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t sizesPerDim;
  _tuple_1_star_int64_t str;
  int64_t factoredOffs;
  _ddata_locale data;
  _ddata_locale shiftedData;
  c_ptr_void externFreeFunc;
  chpl_bool externArr;
  chpl_bool _borrowed;
  chpl_bool callPostAlloc;
  chpl_bool deinitElts;
} chpl_DefaultRectangularArr_1_int64_t_one_locale_int64_t_object;

typedef struct chpl_DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t_s /* : BaseRectangularArr_1_int64_t_one_uint64_t */ {
  chpl_BaseRectangularArr_1_int64_t_one_uint64_t_object super;
  DefaultRectangularDom_1_int64_t_one dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t sizesPerDim;
  _tuple_1_star_int64_t str;
  int64_t factoredOffs;
  _ddata_uint64_t data;
  _ddata_uint64_t shiftedData;
  c_ptr_void externFreeFunc;
  chpl_bool externArr;
  chpl_bool _borrowed;
  chpl_bool callPostAlloc;
  chpl_bool deinitElts;
} chpl_DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t_object;

typedef struct chpl_BrokenPipeError_s /* : ConnectionError */ {
  chpl_ConnectionError_object super;
} chpl_BrokenPipeError_object;

typedef struct chpl_ConnectionAbortedError_s /* : ConnectionError */ {
  chpl_ConnectionError_object super;
} chpl_ConnectionAbortedError_object;

typedef struct chpl_ConnectionRefusedError_s /* : ConnectionError */ {
  chpl_ConnectionError_object super;
} chpl_ConnectionRefusedError_object;

typedef struct chpl_ConnectionResetError_s /* : ConnectionError */ {
  chpl_ConnectionError_object super;
} chpl_ConnectionResetError_object;

/*** Function Prototypes ***/

static void chpl__init_AlignedTSupport(int64_t _ln,
                                       int32_t _fn);
static void chpl__init_Atomics(int64_t _ln,
                               int32_t _fn);
static void atomic_fence(memory_order order,
                         int64_t _ln,
                         int32_t _fn);
static atomic_bool * chpl_get_AtomicBool__v(AtomicBool * this24);
static void init_helper(AtomicBool * this24,
                        chpl_bool val);
static void init(AtomicBool * this24);
static void deinit(AtomicBool * this24);
static chpl_bool read2(AtomicBool * this24,
                       int64_t _ln,
                       int32_t _fn);
static void write2(AtomicBool * this24,
                   chpl_bool val,
                   int64_t _ln,
                   int32_t _fn);
static chpl_bool exchange(AtomicBool * this24,
                          chpl_bool val,
                          int64_t _ln,
                          int32_t _fn);
static chpl_bool testAndSet(AtomicBool * this24,
                            int64_t _ln,
                            int32_t _fn);
static void clear(AtomicBool * this24,
                  int64_t _ln,
                  int32_t _fn);
static atomic_int_least64_t * chpl_get_AtomicT__v(AtomicT_int64_t * this24);
static void init_helper2(AtomicT_int64_t * this24,
                         int64_t val);
static void init2(AtomicT_int64_t * this24);
static void deinit2(AtomicT_int64_t * this24);
static int64_t read3(AtomicT_int64_t * this24,
                     int64_t _ln,
                     int32_t _fn);
static int64_t read4(AtomicT_int64_t * this24,
                     int64_t _ln,
                     int32_t _fn);
static void write3(AtomicT_int64_t * this24,
                   int64_t val,
                   int64_t _ln,
                   int32_t _fn);
static void write4(AtomicT_int64_t * this24,
                   int64_t val,
                   int64_t _ln,
                   int32_t _fn);
static void add(AtomicT_int64_t * this24,
                int64_t val,
                int64_t _ln,
                int32_t _fn);
static void add2(AtomicT_int64_t * this24,
                 int64_t val,
                 int64_t _ln,
                 int32_t _fn);
static void add3(AtomicT_int64_t * this24,
                 int64_t val,
                 int64_t _ln,
                 int32_t _fn);
static int64_t fetchSub(AtomicT_int64_t * this24,
                        int64_t val,
                        int64_t _ln,
                        int32_t _fn);
static void sub(AtomicT_int64_t * this24,
                int64_t val,
                int64_t _ln,
                int32_t _fn);
static void sub2(AtomicT_int64_t * this24,
                 int64_t val,
                 int64_t _ln,
                 int32_t _fn);
static void waitFor(AtomicT_int64_t * this24,
                    int64_t val,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__init_ByteBufferHelpers(int64_t _ln,
                                         int32_t _fn);
static int16_t offset_STR_COPY_DATA(void);
static void chpl_string_comm_get(uint8_t * dest,
                                 int64_t src_loc_id,
                                 uint8_t * src_addr,
                                 int64_t len,
                                 int64_t _ln,
                                 int32_t _fn);
static int64_t getGoodAllocSize(int64_t requestedSize,
                                int64_t _ln,
                                int32_t _fn);
static _tuple_2_c_ptr_uint8_t_int64_t bufferAlloc(int64_t requestedSize,
                                                  int64_t _ln,
                                                  int32_t _fn);
static _tuple_2_c_ptr_uint8_t_int64_t bufferRealloc(uint8_t * buf,
                                                    int64_t requestedSize,
                                                    int64_t _ln,
                                                    int32_t _fn);
static _tuple_2_c_ptr_uint8_t_int64_t bufferEnsureSize(uint8_t * buf,
                                                       int64_t currentSize,
                                                       int64_t requestedSize,
                                                       int64_t _ln,
                                                       int32_t _fn);
static uint8_t * bufferCopyRemote(int64_t src_loc_id,
                                  uint8_t * src_addr,
                                  int64_t len,
                                  int64_t _ln,
                                  int32_t _fn);
static _tuple_2_c_ptr_uint8_t_int64_t bufferCopyLocal(uint8_t * src_addr,
                                                      int64_t len,
                                                      int64_t _ln,
                                                      int32_t _fn);
static void bufferFree(uint8_t * buf,
                       int64_t _ln,
                       int32_t _fn);
static _tuple_2_c_ptr_uint8_t_int64_t bufferCopy(uint8_t * buf,
                                                 int64_t off,
                                                 int64_t len,
                                                 int32_t loc,
                                                 int64_t _ln,
                                                 int32_t _fn);
static void bufferMemcpy(uint8_t * dst,
                         int64_t src_loc,
                         uint8_t * src,
                         int64_t len,
                         int64_t dst_off,
                         int64_t src_off,
                         int64_t _ln,
                         int32_t _fn);
static void bufferMemcpyLocal(uint8_t * dst,
                              uint8_t * src,
                              int64_t len,
                              int64_t dst_off,
                              int64_t src_off,
                              int64_t _ln,
                              int32_t _fn);
static void bufferMemmoveLocal(uint8_t * dst,
                               uint8_t * src,
                               int64_t len,
                               int64_t dst_off,
                               int64_t src_off,
                               int64_t _ln,
                               int32_t _fn);
static uint8_t bufferGetByte(uint8_t * buf,
                             int64_t off,
                             int32_t loc,
                             int64_t _ln,
                             int32_t _fn);
static int64_t _strcmp_local(uint8_t * buf1,
                             int64_t len1,
                             uint8_t * buf2,
                             int64_t len2,
                             int64_t _ln,
                             int32_t _fn);
static int64_t _strcmp(uint8_t * buf1,
                       int64_t len1,
                       int32_t loc1,
                       uint8_t * buf2,
                       int64_t len2,
                       int32_t loc2,
                       int64_t _ln,
                       int32_t _fn);
static void chpl__init_Bytes(int64_t _ln,
                             int32_t _fn);
static bytes createBorrowingBuffer(uint8_t * x2,
                                   int64_t length,
                                   int64_t _ln,
                                   int32_t _fn);
static bytes chpl_createBytesWithLiteral(c_string_rehook buffer,
                                         int64_t offset2,
                                         c_string_rehook x2,
                                         int64_t length,
                                         int64_t _ln,
                                         int32_t _fn);
static bytes createBorrowingBuffer2(uint8_t * x2,
                                    int64_t length,
                                    int64_t size5,
                                    int64_t _ln,
                                    int32_t _fn);
static int64_t * chpl_get_bytes_buffLen(bytes * this24);
static int64_t * chpl_get_bytes_buffSize(bytes * this24);
static c_ptr_uint8_t * chpl_get_bytes_buff(bytes * this24);
static chpl_bool * chpl_get_bytes_isOwned(bytes * this24);
static void init3(bytes * this24,
                  int64_t _ln,
                  int32_t _fn);
static void chpl__init_BytesStringCommon(int64_t _ln,
                                         int32_t _fn);
static const int8_t * getCStr(string * x2,
                              int64_t _ln,
                              int32_t _fn);
static string decodeByteBuffer(uint8_t * buff,
                               int64_t length,
                               decodePolicy policy,
                               Error * error_out,
                               int64_t _ln,
                               int32_t _fn);
static _tuple_3_syserr_int32_t_int32_t decodeHelp(uint8_t * buff,
                                                  int64_t buffLen,
                                                  int64_t offset2,
                                                  chpl_bool allowEsc,
                                                  int64_t _ln,
                                                  int32_t _fn);
static void initWithBorrowedBuffer(string * x2,
                                   string * other,
                                   int64_t _ln,
                                   int32_t _fn);
static void initWithBorrowedBuffer2(bytes * x2,
                                    uint8_t * other,
                                    int64_t length,
                                    int64_t size5);
static void initWithBorrowedBuffer3(string * x2,
                                    uint8_t * other,
                                    int64_t length,
                                    int64_t size5);
static void initWithOwnedBuffer(string * x2,
                                uint8_t * other,
                                int64_t length,
                                int64_t size5);
static void initWithNewBuffer(string * x2,
                              string * other,
                              int64_t _ln,
                              int32_t _fn);
static _tuple_2_range_int64_t_both_one_int64_t getView(string * x2,
                                                       range_byteIndex_high_one r,
                                                       Error * error_out,
                                                       int64_t _ln,
                                                       int32_t _fn);
static _tuple_2_range_int64_t_both_one_int64_t getView2(string * x2,
                                                        range_int64_t_low_one r,
                                                        Error * error_out,
                                                        int64_t _ln,
                                                        int32_t _fn);
static _tuple_2_range_int64_t_both_one_int64_t getView3(string * x2,
                                                        range_byteIndex_both_one r,
                                                        Error * error_out,
                                                        int64_t _ln,
                                                        int32_t _fn);
static _tuple_2_range_int64_t_both_one_int64_t getView4(string * x2,
                                                        range_int64_t_both_one r,
                                                        Error * error_out,
                                                        int64_t _ln,
                                                        int32_t _fn);
static _tuple_2_range_int64_t_both_one_int64_t getView5(string * x2,
                                                        range_byteIndex_low_one r,
                                                        Error * error_out,
                                                        int64_t _ln,
                                                        int32_t _fn);
static _tuple_2_range_int64_t_both_one_int64_t getView6(string * x2,
                                                        range_byteIndex_low_one r,
                                                        Error * error_out,
                                                        int64_t _ln,
                                                        int32_t _fn);
static _tuple_2_range_int64_t_both_one_int64_t simpleCaseHelper(string * x2,
                                                                range_byteIndex_high_one r,
                                                                int64_t _ln,
                                                                int32_t _fn);
static _tuple_2_range_int64_t_both_one_int64_t simpleCaseHelper2(string * x2,
                                                                 range_byteIndex_low_one r,
                                                                 int64_t _ln,
                                                                 int32_t _fn);
static _tuple_2_range_int64_t_both_one_int64_t simpleCaseHelper3(string * x2,
                                                                 range_int64_t_both_one r,
                                                                 int64_t _ln,
                                                                 int32_t _fn);
static _tuple_2_range_int64_t_both_one_int64_t simpleCaseHelper4(string * x2,
                                                                 range_byteIndex_low_one r,
                                                                 int64_t _ln,
                                                                 int32_t _fn);
static _tuple_2_range_int64_t_both_one_int64_t simpleCaseHelper5(string * x2,
                                                                 range_byteIndex_both_one r,
                                                                 int64_t _ln,
                                                                 int32_t _fn);
static _tuple_2_range_int64_t_both_one_int64_t simpleCaseHelper6(string * x2,
                                                                 range_int64_t_low_one r,
                                                                 int64_t _ln,
                                                                 int32_t _fn);
static string getSlice(string * x2,
                       range_byteIndex_high_one r,
                       Error * error_out,
                       int64_t _ln,
                       int32_t _fn);
static string getSlice2(string * x2,
                        range_int64_t_both_one r,
                        Error * error_out,
                        int64_t _ln,
                        int32_t _fn);
static string getSlice3(string * x2,
                        range_int64_t_low_one r,
                        Error * error_out,
                        int64_t _ln,
                        int32_t _fn);
static string getSlice4(string * x2,
                        range_byteIndex_low_one r,
                        Error * error_out,
                        int64_t _ln,
                        int32_t _fn);
static string getSlice5(string * x2,
                        range_byteIndex_both_one r,
                        Error * error_out,
                        int64_t _ln,
                        int32_t _fn);
static string doReplace(string * x2,
                        string * needle,
                        string * replacement,
                        int64_t count,
                        int64_t _ln,
                        int32_t _fn);
static int64_t doSearchNoEnc(string * x2,
                             string * needle,
                             range_byteIndex_low_one region,
                             int64_t _ln,
                             int32_t _fn);
static int64_t resizeBufferForAppend(string * lhs,
                                     int64_t n,
                                     int64_t _ln,
                                     int32_t _fn);
static void doAppend(string * lhs,
                     string * rhs,
                     int64_t _ln,
                     int32_t _fn);
static void resizeBuffer(string * lhs,
                         int64_t buffLen,
                         int64_t _ln,
                         int32_t _fn);
static void reinitWithNewBuffer(string * lhs,
                                uint8_t * buff,
                                int64_t buffLen,
                                int64_t buffSize,
                                int64_t numCodepoints2,
                                int64_t _ln,
                                int32_t _fn);
static void doAssign(string * lhs,
                     string * rhs,
                     int64_t _ln,
                     int32_t _fn);
static void helpMe(string * lhs,
                   string * rhs,
                   int64_t _ln,
                   int32_t _fn);
static string doConcat(string * s0,
                       string * s1,
                       int64_t _ln,
                       int32_t _fn);
static string doStripNoEnc(string * x2,
                           string * chars,
                           chpl_bool leading,
                           chpl_bool trailing,
                           int64_t _ln,
                           int32_t _fn);
static chpl_bool doEq(string * a,
                      string * b,
                      int64_t _ln,
                      int32_t _fn);
static chpl_bool doLessThan(string * a,
                            string * b,
                            int64_t _ln,
                            int32_t _fn);
static chpl_bool doGreaterThan(string * a,
                               string * b,
                               int64_t _ln,
                               int32_t _fn);
static int64_t countNumCodepoints(uint8_t * buff,
                                  int64_t buffLen,
                                  int64_t _ln,
                                  int32_t _fn);
static chpl_bool isInitialByte(uint8_t b,
                               int64_t _ln,
                               int32_t _fn);
static int64_t _findStartOfNextCodepointFromByte(string * x2,
                                                 byteIndex * i,
                                                 int64_t _ln,
                                                 int32_t _fn);
static void _cleanupForNumericCast(string * x2,
                                   int64_t _ln,
                                   int32_t _fn);
static chpl_bool _isSingleWord(string * x2,
                               int64_t _ln,
                               int32_t _fn);
static chpl_bool byte_isWhitespace(uint8_t c,
                                   int64_t _ln,
                                   int32_t _fn);
static void chpl__init_CString(int64_t _ln,
                               int32_t _fn);
static void * chpl___COLON_(c_string_rehook x2,
                            int64_t _ln,
                            int32_t _fn);
static void chpl__init_ChapelArray(int64_t _ln,
                                   int32_t _fn);
static void chpl__deinit_ChapelArray(void);
static void _makeIndexTuple(_tuple_1_star_int64_t * t,
                            _tuple_1_star_int64_t * _retArg);
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t _newArray(DefaultRectangularArr_1_int64_t_one_locale_int64_t value);
static _distribution_DefaultDist _getDistribution(DefaultDist value);
static chpl___RuntimeTypeInfo2 chpl__buildArrayRuntimeType(_domain_DefaultRectangularDom_1_int64_t_one * dom);
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t chpl__convertRuntimeTypeToValue(_domain_DefaultRectangularDom_1_int64_t_one * dom,
                                                                                                 chpl_bool definedConst,
                                                                                                 int64_t _ln,
                                                                                                 int32_t _fn);
static void chpl_incRefCountsForDomainsInArrayEltTypes(BaseArr arr);
static void chpl_decRefCountsForDomainsInArrayEltTypes(BaseArr arr);
static void chpl_decRefCountsForDomainsInArrayEltTypes2(BaseArr arr);
static void chpl_decRefCountsForDomainsInArrayEltTypes3(BaseArr arr);
static _distribution_DefaultDist chpl__buildDistDMapValue(DefaultDist x2);
static void init4(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * this24,
                  int64_t _pid,
                  DefaultRectangularArr_1_int64_t_one_locale_int64_t _instance,
                  chpl_bool _unowned);
static DefaultRectangularArr_1_int64_t_one_locale_int64_t * chpl_get__array__instance(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * this24);
static chpl_bool * chpl_get__array__unowned(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * this24);
static DefaultRectangularArr_1_int64_t_one_locale_int64_t _value(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * this24);
static void deinit3(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * this24,
                    int64_t _ln,
                    int32_t _fn);
static _domain_DefaultRectangularDom_1_int64_t_one _dom(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * this24,
                                                        int64_t _ln,
                                                        int32_t _fn);
static void checkAccess(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * this24,
                        _tuple_1_star_int64_t * indices3,
                        DefaultRectangularArr_1_int64_t_one_locale_int64_t value,
                        int64_t _ln,
                        int32_t _fn);
static locale * this2(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * this24,
                      _tuple_1_star_int64_t * i,
                      int64_t _ln,
                      int32_t _fn);
static locale * this3(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * this24,
                      _tuple_1_star_int64_t * i,
                      int64_t _ln,
                      int32_t _fn);
static locale * this4(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * this24,
                      int64_t _e0_i,
                      int64_t _ln,
                      int32_t _fn);
static locale * this5(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * this24,
                      int64_t _e0_i,
                      int64_t _ln,
                      int32_t _fn);
static _ic_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t _getIterator(_ir_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * ir,
                                                                                             int64_t _ln,
                                                                                             int32_t _fn);
static void these(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * this24,
                  _ir_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * _retArg);
static int64_t size(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * this24,
                    int64_t _ln,
                    int32_t _fn);
static void _do_destroy_arr(chpl_bool _unowned,
                            BaseArr _instance,
                            chpl_bool deinitElts,
                            int64_t _ln,
                            int32_t _fn);
static void _do_destroy_arr2(chpl_bool _unowned,
                             DefaultRectangularArr_1_int64_t_one_locale_int64_t _instance,
                             chpl_bool deinitElts,
                             int64_t _ln,
                             int32_t _fn);
static void _do_destroy_array(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * array,
                              chpl_bool deinitElts,
                              int64_t _ln,
                              int32_t _fn);
static chpl_bool _deinitElementsIsParallel(int64_t size5,
                                           int64_t _ln,
                                           int32_t _fn);
static _domain_DefaultRectangularDom_1_int64_t_one chpl__initCopy(_domain_DefaultRectangularDom_1_int64_t_one * rhs,
                                                                  chpl_bool definedConst,
                                                                  int64_t _ln,
                                                                  int32_t _fn);
static _domain_DefaultRectangularDom_1_int64_t_one chpl__coerceHelp(chpl___RuntimeTypeInfo * dstType,
                                                                    chpl_bool definedConst,
                                                                    int64_t _ln,
                                                                    int32_t _fn);
static void chpl__auto_destroy_RootClass(RootClass this24,
                                         int64_t _ln,
                                         int32_t _fn);
static void chpl__init_ChapelBase(int64_t _ln,
                                  int32_t _fn);
static void init5(RootClass this24);
static void chpl___ASSIGN_(chpl_bool * a,
                           chpl_bool b);
static void chpl___ASSIGN_2(int32_t * a,
                            int32_t b);
static void chpl___ASSIGN_3(int64_t * a,
                            int64_t b);
static void chpl___ASSIGN_4(uint8_t * a,
                            uint8_t b);
static void chpl___ASSIGN_5(uint64_t * a,
                            uint64_t b);
static void chpl___ASSIGN_6(ArrayInit * a,
                            ArrayInit b);
static void chpl___ASSIGN_10(TimeoutError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_11(IoError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_12(CodepointSplitError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_13(TaskErrors * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_14(DecodeError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_15(PermissionError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_16(_serializeWrapper_defaultDeserializer * a,
                             _serializeWrapper_defaultDeserializer b);
static void chpl___ASSIGN_17(NotADirectoryError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_18(IsADirectoryError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_19(Error * a,
                             Error b);
static void chpl___ASSIGN_20(InterruptedError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_21(FileNotFoundError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_22(_serializeWrapper_defaultSerializer * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_23(_serializeWrapper_defaultSerializer * a,
                             _serializeWrapper_defaultSerializer b);
static void chpl___ASSIGN_24(EofError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_25(FileExistsError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_26(chpl___RemoteVarContainer_R * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_27(chpl___RemoteVarContainer_R * a,
                             chpl___RemoteVarContainer_R b);
static void chpl___ASSIGN_28(Error * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_29(ConnectionResetError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_30(UnexpectedEofError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_31(NilClassError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_32(ConnectionRefusedError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_33(BadFormatError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_34(ProcessLookupError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_35(SystemError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_36(ConnectionAbortedError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_37(IllegalArgumentError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_38(BrokenPipeError * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_7(ChildProcessError * a,
                            _nilType b,
                            int64_t _ln,
                            int32_t _fn);
static void chpl___ASSIGN_8(BlockingIoError * a,
                            _nilType b,
                            int64_t _ln,
                            int32_t _fn);
static void chpl___ASSIGN_9(_serializeWrapper_defaultDeserializer * a,
                            _nilType b,
                            int64_t _ln,
                            int32_t _fn);
static void chpl___ASSIGN_39(chpl_ModuleDeinit * a,
                             chpl_ModuleDeinit b);
static void chpl___ASSIGN_40(BaseDist * a,
                             BaseDist b);
static void chpl___ASSIGN_41(BaseLocale * a,
                             BaseLocale b);
static void chpl___ASSIGN_42(BaseLocale * a,
                             AbstractLocaleModel b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_43(BaseLocale * a,
                             RootLocale b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_44(BaseLocale * a,
                             DummyLocale b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_45(QioPluginChannel * a,
                             QioPluginChannel b);
static void chpl___ASSIGN_46(ReferenceCount * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_47(Error * a,
                             NilThrownError b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_48(Error * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_49(BaseDom * a,
                             BaseDom b);
static void chpl___ASSIGN_50(BaseArr * a,
                             BaseArr b);
static void chpl___ASSIGN_51(ReferenceCount * a,
                             ReferenceCount b);
static void chpl___ASSIGN_52(chpl_ModuleDeinit * a,
                             _nilType b,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_53(Error * a,
                             Error b);
static chpl_bool chpl___EQUALS_(chpl_bool a,
                                chpl_bool b);
static chpl_bool chpl___EQUALS_2(int32_t a,
                                 int32_t b);
static chpl_bool chpl___EQUALS_3(int64_t a,
                                 int64_t b);
static chpl_bool chpl___EQUALS_4(uint8_t a,
                                 uint8_t b);
static chpl_bool chpl___EQUALS_5(uint32_t a,
                                 uint32_t b);
static chpl_bool chpl___EQUALS_6(uint64_t a,
                                 uint64_t b);
static chpl_bool chpl___EQUALS_7(RootClass a,
                                 RootClass b);
static chpl_bool chpl___EQUALS_8(RootClass a,
                                 _nilType b);
static chpl_bool chpl___EQUALS_10(decodePolicy a,
                                  decodePolicy b);
static chpl_bool chpl___EQUALS_11(chpl_ddataResizePolicy a,
                                  chpl_ddataResizePolicy b);
static chpl_bool chpl___EQUALS_12(ArrayInit a,
                                  ArrayInit b);
static chpl_bool chpl___EQUALS_9(_iokind a,
                                 _iokind b);
static chpl_bool chpl___EXCLAMATION__ASSIGN_(int32_t a,
                                             int32_t b);
static chpl_bool chpl___EXCLAMATION__ASSIGN_2(int64_t a,
                                              int64_t b);
static chpl_bool chpl___EXCLAMATION__ASSIGN_3(uint8_t a,
                                              uint8_t b);
static chpl_bool chpl___EXCLAMATION__ASSIGN_4(uint64_t a,
                                              uint64_t b);
static chpl_bool chpl___EXCLAMATION__ASSIGN_5(RootClass a,
                                              RootClass b);
static chpl_bool chpl___EXCLAMATION__ASSIGN_6(RootClass a,
                                              _nilType b);
static chpl_bool chpl___LESS__ASSIGN_(int64_t a,
                                      int64_t b);
static chpl_bool chpl___LESS__ASSIGN_2(uint64_t a,
                                       uint64_t b);
static chpl_bool chpl___GREATER__ASSIGN_(int64_t a,
                                         int64_t b);
static chpl_bool chpl___GREATER__ASSIGN_2(uint64_t a,
                                          uint64_t b);
static chpl_bool chpl___LESS_(int8_t a,
                              int64_t b);
static chpl_bool chpl___LESS_2(int32_t a,
                               int64_t b);
static chpl_bool chpl___LESS_3(int64_t a,
                               int64_t b);
static chpl_bool chpl___LESS_4(uint64_t a,
                               uint64_t b);
static chpl_bool chpl___GREATER_(int64_t a,
                                 int64_t b);
static chpl_bool chpl___GREATER_2(uint32_t a,
                                  uint32_t b);
static chpl_bool chpl___GREATER_3(uint64_t a,
                                  uint64_t b);
static int16_t chpl___PLUS_(int16_t a,
                            int16_t b);
static int32_t chpl___PLUS_2(int32_t a,
                             int32_t b);
static int64_t chpl___PLUS_3(int64_t a,
                             int64_t b);
static uint64_t chpl___PLUS_4(uint64_t a,
                              uint64_t b);
static int16_t chpl___HYPHEN_(int16_t a,
                              int16_t b);
static int32_t chpl___HYPHEN_2(int32_t a,
                               int32_t b);
static int64_t chpl___HYPHEN_3(int64_t a,
                               int64_t b);
static uint64_t chpl___HYPHEN_4(uint64_t a,
                                uint64_t b);
static int32_t chpl___ASTERISK_(int32_t a,
                                int32_t b);
static int64_t chpl___ASTERISK_2(int64_t a,
                                 int64_t b);
static uint64_t chpl___ASTERISK_3(uint64_t a,
                                  uint64_t b);
static _real64 chpl___ASTERISK_4(_real64 a,
                                 _real64 b);
static int64_t chpl___SLASH_(int64_t a,
                             int64_t b,
                             int64_t _ln,
                             int32_t _fn);
static uint64_t chpl___SLASH_2(uint64_t a,
                               uint64_t b,
                               int64_t _ln,
                               int32_t _fn);
static _iokind chpl___COLON_2(uint8_t from,
                              Error * error_out,
                              int64_t _ln,
                              int32_t _fn);
static chpl_bool chpl___EXCLAMATION_(chpl_bool a);
static uint8_t chpl___AMPERSAND_(uint8_t a,
                                 uint8_t b);
static void bitshiftChecks(uint64_t a,
                           int64_t b,
                           int64_t _ln,
                           int32_t _fn);
static uint64_t chpl___LESS__LESS_(uint64_t a,
                                   int64_t b,
                                   int64_t _ln,
                                   int32_t _fn);
static void checkNotNil(BrokenPipeError x2,
                        int64_t _ln,
                        int32_t _fn);
static void checkNotNil10(BlockingIoError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil11(SystemError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil12(BaseDom x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil13(BaseLocale x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil14(PermissionError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil15(AbstractRootLocale x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil16(QioPluginFile x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil17(ChildProcessError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil18(NotADirectoryError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil19(BaseArrOverRectangularDom_1_int64_t_one x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil2(ConnectionRefusedError x2,
                         int64_t _ln,
                         int32_t _fn);
static void checkNotNil20(IsADirectoryError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil21(IoError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil22(InterruptedError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil23(RootLocale x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil24(FileNotFoundError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil25(ReferenceCount x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil26(FileExistsError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil27(EofError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil28(chpl___RemoteVarContainer_R x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil29(ConnectionResetError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil3(QioPluginChannel x2,
                         int64_t _ln,
                         int32_t _fn);
static void checkNotNil30(Error x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil31(BadFormatError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil32(ConnectionAbortedError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil33(Remote_R x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil34(UnexpectedEofError x2,
                          int64_t _ln,
                          int32_t _fn);
static void checkNotNil4(ProcessLookupError x2,
                         int64_t _ln,
                         int32_t _fn);
static void checkNotNil5(chpl_ModuleDeinit x2,
                         int64_t _ln,
                         int32_t _fn);
static void checkNotNil6(TimeoutError x2,
                         int64_t _ln,
                         int32_t _fn);
static void checkNotNil7(AbstractLocaleModel x2,
                         int64_t _ln,
                         int32_t _fn);
static void checkNotNil8(IllegalArgumentError x2,
                         int64_t _ln,
                         int32_t _fn);
static void checkNotNil9(BaseArr x2,
                         int64_t _ln,
                         int32_t _fn);
static AbstractLocaleModel postfix_EXCLAMATION_(AbstractLocaleModel x2,
                                                int64_t _ln,
                                                int32_t _fn);
static BaseLocale postfix_EXCLAMATION_10(BaseLocale x2,
                                         int64_t _ln,
                                         int32_t _fn);
static QioPluginFile postfix_EXCLAMATION_11(QioPluginFile x2,
                                            int64_t _ln,
                                            int32_t _fn);
static ReferenceCount postfix_EXCLAMATION_2(ReferenceCount x2,
                                            int64_t _ln,
                                            int32_t _fn);
static Error postfix_EXCLAMATION_3(Error x2,
                                   int64_t _ln,
                                   int32_t _fn);
static chpl___RemoteVarContainer_R postfix_EXCLAMATION_4(chpl___RemoteVarContainer_R x2,
                                                         int64_t _ln,
                                                         int32_t _fn);
static chpl_ModuleDeinit postfix_EXCLAMATION_5(chpl_ModuleDeinit x2,
                                               int64_t _ln,
                                               int32_t _fn);
static BaseDom postfix_EXCLAMATION_6(BaseDom x2,
                                     int64_t _ln,
                                     int32_t _fn);
static BaseArrOverRectangularDom_1_int64_t_one postfix_EXCLAMATION_7(BaseArrOverRectangularDom_1_int64_t_one x2,
                                                                     int64_t _ln,
                                                                     int32_t _fn);
static QioPluginChannel postfix_EXCLAMATION_8(QioPluginChannel x2,
                                              int64_t _ln,
                                              int32_t _fn);
static BaseArr postfix_EXCLAMATION_9(BaseArr x2,
                                     int64_t _ln,
                                     int32_t _fn);
static BlockingIoError postfix_EXCLAMATION_12(BlockingIoError x2,
                                              int64_t _ln,
                                              int32_t _fn);
static ConnectionAbortedError postfix_EXCLAMATION_13(ConnectionAbortedError x2,
                                                     int64_t _ln,
                                                     int32_t _fn);
static SystemError postfix_EXCLAMATION_14(SystemError x2,
                                          int64_t _ln,
                                          int32_t _fn);
static BadFormatError postfix_EXCLAMATION_15(BadFormatError x2,
                                             int64_t _ln,
                                             int32_t _fn);
static UnexpectedEofError postfix_EXCLAMATION_16(UnexpectedEofError x2,
                                                 int64_t _ln,
                                                 int32_t _fn);
static EofError postfix_EXCLAMATION_17(EofError x2,
                                       int64_t _ln,
                                       int32_t _fn);
static Error postfix_EXCLAMATION_18(Error x2,
                                    int64_t _ln,
                                    int32_t _fn);
static IoError postfix_EXCLAMATION_19(IoError x2,
                                      int64_t _ln,
                                      int32_t _fn);
static TimeoutError postfix_EXCLAMATION_20(TimeoutError x2,
                                           int64_t _ln,
                                           int32_t _fn);
static ProcessLookupError postfix_EXCLAMATION_21(ProcessLookupError x2,
                                                 int64_t _ln,
                                                 int32_t _fn);
static PermissionError postfix_EXCLAMATION_22(PermissionError x2,
                                              int64_t _ln,
                                              int32_t _fn);
static BrokenPipeError postfix_EXCLAMATION_23(BrokenPipeError x2,
                                              int64_t _ln,
                                              int32_t _fn);
static NotADirectoryError postfix_EXCLAMATION_24(NotADirectoryError x2,
                                                 int64_t _ln,
                                                 int32_t _fn);
static IsADirectoryError postfix_EXCLAMATION_25(IsADirectoryError x2,
                                                int64_t _ln,
                                                int32_t _fn);
static InterruptedError postfix_EXCLAMATION_26(InterruptedError x2,
                                               int64_t _ln,
                                               int32_t _fn);
static AbstractRootLocale postfix_EXCLAMATION_27(AbstractRootLocale x2,
                                                 int64_t _ln,
                                                 int32_t _fn);
static RootLocale postfix_EXCLAMATION_28(RootLocale x2,
                                         int64_t _ln,
                                         int32_t _fn);
static FileNotFoundError postfix_EXCLAMATION_29(FileNotFoundError x2,
                                                int64_t _ln,
                                                int32_t _fn);
static FileExistsError postfix_EXCLAMATION_30(FileExistsError x2,
                                              int64_t _ln,
                                              int32_t _fn);
static chpl___RemoteVarContainer_R postfix_EXCLAMATION_31(chpl___RemoteVarContainer_R x2,
                                                          int64_t _ln,
                                                          int32_t _fn);
static ConnectionResetError postfix_EXCLAMATION_32(ConnectionResetError x2,
                                                   int64_t _ln,
                                                   int32_t _fn);
static ConnectionRefusedError postfix_EXCLAMATION_33(ConnectionRefusedError x2,
                                                     int64_t _ln,
                                                     int32_t _fn);
static Remote_R postfix_EXCLAMATION_34(Remote_R x2,
                                       int64_t _ln,
                                       int32_t _fn);
static IllegalArgumentError postfix_EXCLAMATION_35(IllegalArgumentError x2,
                                                   int64_t _ln,
                                                   int32_t _fn);
static ChildProcessError postfix_EXCLAMATION_36(ChildProcessError x2,
                                                int64_t _ln,
                                                int32_t _fn);
static void chpl_statementLevelSymbol(int64_t a);
static chpl_bool _cond_test(uint8_t x2,
                            int64_t _ln,
                            int32_t _fn);
static chpl_bool _cond_test2(TaskErrors x2,
                             int64_t _ln,
                             int32_t _fn);
static chpl_bool _cond_test3(chpl_ModuleDeinit x2,
                             int64_t _ln,
                             int32_t _fn);
static chpl_bool _cond_test4(IllegalArgumentError x2,
                             int64_t _ln,
                             int32_t _fn);
static chpl_bool _cond_test5(BaseArr x2,
                             int64_t _ln,
                             int32_t _fn);
static chpl_bool _cond_test6(Error x2,
                             int64_t _ln,
                             int32_t _fn);
static chpl_bool _cond_test7(syserr x2);
static chpl_bool _cond_test8(_owned_Error2 * x2);
static chpl_bool _cond_test9(BaseArrOverRectangularDom_1_int64_t_one x2,
                             int64_t _ln,
                             int32_t _fn);
static string chpl___COLON_3(ArrayInit from,
                             int64_t _ln,
                             int32_t _fn);
static int64_t chpl__enumToOrder(ArrayInit e,
                                 int64_t _ln,
                                 int32_t _fn);
static ArrayInit chpl_getArrayInitMethod(void);
static chpl_bool chpl_shouldDoGpuInit(void);
static ArrayInit init_elts_method(int64_t s,
                                  int64_t _ln,
                                  int32_t _fn);
static ArrayInit init_elts_method2(int64_t s,
                                   int64_t _ln,
                                   int32_t _fn);
static ArrayInit init_elts_method3(int64_t s,
                                   int64_t _ln,
                                   int32_t _fn);
static void init_elts(_ddata_int64_t x2,
                      int64_t s,
                      int64_t lo,
                      int64_t _ln,
                      int32_t _fn);
static void init_elts2(_ddata_locale x2,
                       int64_t s,
                       int64_t lo,
                       int64_t _ln,
                       int32_t _fn);
static void init_elts3(_ddata_uint64_t x2,
                       int64_t s,
                       int64_t lo,
                       int64_t _ln,
                       int32_t _fn);
static void chpl__auto_destroy__ddata(_ddata_locale this24);
static void chpl__auto_destroy__ddata2(_ddata_int64_t this24);
static void chpl__auto_destroy__ddata3(_ddata_uint64_t this24);
static int64_t * this6(_ddata_int64_t this24,
                       int64_t i);
static locale * this7(_ddata_locale this24,
                      int64_t i);
static uint64_t * this8(_ddata_uint64_t this24,
                        int64_t i);
static void chpl___ASSIGN_54(_ddata_uint64_t * a,
                             _ddata_uint64_t b);
static void chpl___ASSIGN_55(_ddata_int64_t * a,
                             _ddata_int64_t b);
static void chpl___ASSIGN_56(_ddata_locale * a,
                             _ddata_locale b);
static _ddata_int64_t _ddata_shift(_ddata_int64_t data,
                                   int64_t shift,
                                   int64_t _ln,
                                   int32_t _fn);
static _ddata_uint64_t _ddata_shift2(_ddata_uint64_t data,
                                     int64_t shift,
                                     int64_t _ln,
                                     int32_t _fn);
static _ddata_locale _ddata_shift3(_ddata_locale data,
                                   int64_t shift,
                                   int64_t _ln,
                                   int32_t _fn);
static uint64_t _ddata_sizeof_element(int64_t _ln,
                                      int32_t _fn);
static uint64_t _ddata_sizeof_element2(int64_t _ln,
                                       int32_t _fn);
static uint64_t _ddata_sizeof_element3(int64_t _ln,
                                       int32_t _fn);
static uint64_t _ddata_sizeof_element4(_ddata_uint64_t x2,
                                       int64_t _ln,
                                       int32_t _fn);
static uint64_t _ddata_sizeof_element5(_ddata_int64_t x2,
                                       int64_t _ln,
                                       int32_t _fn);
static uint64_t _ddata_sizeof_element6(_ddata_locale x2,
                                       int64_t _ln,
                                       int32_t _fn);
static _ddata_int64_t _ddata_allocate_noinit(int64_t size5,
                                             chpl_bool * callPostAlloc,
                                             int32_t subloc,
                                             chpl_bool haltOnOom,
                                             int64_t _ln,
                                             int32_t _fn);
static _ddata_locale _ddata_allocate_noinit2(int64_t size5,
                                             chpl_bool * callPostAlloc,
                                             int32_t subloc,
                                             chpl_bool haltOnOom,
                                             int64_t _ln,
                                             int32_t _fn);
static _ddata_uint64_t _ddata_allocate_noinit3(int64_t size5,
                                               chpl_bool * callPostAlloc,
                                               int32_t subloc,
                                               chpl_bool haltOnOom,
                                               int64_t _ln,
                                               int32_t _fn);
static int32_t _ddata_allocate_noinit_default_subloc(void);
static int32_t _ddata_allocate_noinit_default_subloc2(void);
static int32_t _ddata_allocate_noinit_default_subloc3(void);
static void _ddata_allocate_postalloc(_ddata_int64_t data,
                                      int64_t size5,
                                      int64_t _ln,
                                      int32_t _fn);
static void _ddata_allocate_postalloc2(_ddata_locale data,
                                       int64_t size5,
                                       int64_t _ln,
                                       int32_t _fn);
static void _ddata_allocate_postalloc3(_ddata_uint64_t data,
                                       int64_t size5,
                                       int64_t _ln,
                                       int32_t _fn);
static chpl_bool _ddata_supports_reallocate(_ddata_uint64_t oldDdata,
                                            int64_t oldSize,
                                            int64_t newSize,
                                            int64_t _ln,
                                            int32_t _fn);
static chpl_bool _ddata_supports_reallocate2(_ddata_locale oldDdata,
                                             int64_t oldSize,
                                             int64_t newSize,
                                             int64_t _ln,
                                             int32_t _fn);
static chpl_bool _ddata_supports_reallocate3(_ddata_int64_t oldDdata,
                                             int64_t oldSize,
                                             int64_t newSize,
                                             int64_t _ln,
                                             int32_t _fn);
static void _ddata_fill(_ddata_int64_t ddata,
                        int64_t lo,
                        int64_t hi,
                        int8_t fill,
                        int64_t _ln,
                        int32_t _fn);
static void _ddata_fill2(_ddata_locale ddata,
                         int64_t lo,
                         int64_t hi,
                         int8_t fill,
                         int64_t _ln,
                         int32_t _fn);
static void _ddata_fill3(_ddata_uint64_t ddata,
                         int64_t lo,
                         int64_t hi,
                         int8_t fill,
                         int64_t _ln,
                         int32_t _fn);
static int8_t _ddata_fill_default_fill(void);
static int8_t _ddata_fill_default_fill2(void);
static int8_t _ddata_fill_default_fill3(void);
static _ddata_locale _ddata_reallocate(_ddata_locale oldDdata,
                                       int64_t oldSize,
                                       int64_t newSize,
                                       int32_t subloc,
                                       chpl_ddataResizePolicy policy,
                                       int64_t _ln,
                                       int32_t _fn);
static _ddata_int64_t _ddata_reallocate2(_ddata_int64_t oldDdata,
                                         int64_t oldSize,
                                         int64_t newSize,
                                         int32_t subloc,
                                         chpl_ddataResizePolicy policy,
                                         int64_t _ln,
                                         int32_t _fn);
static _ddata_uint64_t _ddata_reallocate3(_ddata_uint64_t oldDdata,
                                          int64_t oldSize,
                                          int64_t newSize,
                                          int32_t subloc,
                                          chpl_ddataResizePolicy policy,
                                          int64_t _ln,
                                          int32_t _fn);
static void _ddata_free(_ddata_uint64_t data,
                        int64_t size5,
                        int64_t _ln,
                        int32_t _fn);
static void _ddata_free2(_ddata_int64_t data,
                         int64_t size5,
                         int64_t _ln,
                         int32_t _fn);
static void _ddata_free3(_ddata_locale data,
                         int64_t size5,
                         int64_t _ln,
                         int32_t _fn);
static chpl_bool chpl___EQUALS_13(_ddata_uint64_t a,
                                  _nilType b);
static chpl_bool chpl___EQUALS_14(_ddata_int64_t a,
                                  _nilType b);
static chpl_bool chpl___EQUALS_15(_ddata_locale a,
                                  _nilType b);
static void chpl_rt_reset_task_spawn(void);
static void chpl_resetTaskSpawn(int64_t numTasks,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__auto_destroy_endCountDiagsManager(endCountDiagsManager * this24);
static void init6(endCountDiagsManager * this24,
                  chpl_task_infoChapel_t * taskInfo,
                  chpl_bool prevDiagsDisabledVal);
static c_ptr_chpl_task_infoChapel_t * chpl_get_endCountDiagsManager_taskInfo(endCountDiagsManager * this24);
static chpl_task_infoChapel_t * init_default_taskInfo(int64_t _ln,
                                                      int32_t _fn);
static chpl_bool * chpl_get_endCountDiagsManager_prevDiagsDisabledVal(endCountDiagsManager * this24);
static void enterContext(endCountDiagsManager * this24,
                         int64_t _ln,
                         int32_t _fn);
static void exitContext(endCountDiagsManager * this24,
                        _owned_Error2 * unused,
                        int64_t _ln,
                        int32_t _fn);
static void chpl__auto_destroy__EndCountBase(chpl___EndCountBase this24,
                                             int64_t _ln,
                                             int32_t _fn);
static void init7(chpl___EndCountBase this24,
                  chpl_TaskErrors * errors,
                  int64_t _ln,
                  int32_t _fn);
static chpl_TaskErrors * chpl_get__EndCountBase_errors(chpl___EndCountBase this24,
                                                       int64_t _ln,
                                                       int32_t _fn);
static chpl_TaskErrors init_default_errors(int64_t _ln,
                                           int32_t _fn);
static void chpl__auto_destroy__EndCount(chpl___EndCount_AtomicT_int64_t_int64_t this24,
                                         int64_t _ln,
                                         int32_t _fn);
static AtomicT_int64_t * chpl_get__EndCount_i(chpl___EndCount_AtomicT_int64_t_int64_t this24,
                                              int64_t _ln,
                                              int32_t _fn);
static int64_t * chpl_get__EndCount_taskCnt(chpl___EndCount_AtomicT_int64_t_int64_t this24,
                                            int64_t _ln,
                                            int32_t _fn);
static chpl___EndCount_AtomicT_int64_t_int64_t _new(int64_t _ln,
                                                    int32_t _fn);
static void init8(chpl___EndCount_AtomicT_int64_t_int64_t this24,
                  int64_t _ln,
                  int32_t _fn);
static void add4(chpl___EndCount_AtomicT_int64_t_int64_t this24,
                 int64_t value,
                 int64_t _ln,
                 int32_t _fn);
static void sub3(chpl___EndCount_AtomicT_int64_t_int64_t this24,
                 int64_t value,
                 int64_t _ln,
                 int32_t _fn);
static void waitFor2(chpl___EndCount_AtomicT_int64_t_int64_t this24,
                     int64_t value,
                     int64_t _ln,
                     int32_t _fn);
static chpl___EndCount_AtomicT_int64_t_int64_t _endCountAlloc(int64_t _ln,
                                                              int32_t _fn);
static chpl___EndCount_AtomicT_int64_t_int64_t _endCountAlloc2(int64_t _ln,
                                                               int32_t _fn);
static void _endCountFree(chpl___EndCount_AtomicT_int64_t_int64_t e,
                          int64_t _ln,
                          int32_t _fn);
static void _upEndCount(chpl___EndCount_AtomicT_int64_t_int64_t e,
                        int64_t numTasks,
                        int64_t _ln,
                        int32_t _fn);
static void chpl_after_forall_fence(void);
static void _downEndCount(chpl___EndCount_AtomicT_int64_t_int64_t e,
                          Error err,
                          int64_t _ln,
                          int32_t _fn);
static void _waitEndCount(chpl___EndCount_AtomicT_int64_t_int64_t e,
                          Error * error_out,
                          int64_t _ln,
                          int32_t _fn);
static void _waitEndCount2(chpl___EndCount_AtomicT_int64_t_int64_t e,
                           int64_t numTasks,
                           Error * error_out,
                           int64_t _ln,
                           int32_t _fn);
static int32_t chpl___COLON_4(int64_t x2,
                              int64_t _ln,
                              int32_t _fn);
static uint8_t chpl___COLON_5(int64_t x2,
                              int64_t _ln,
                              int32_t _fn);
static int64_t chpl___COLON_6(uint64_t x2,
                              int64_t _ln,
                              int32_t _fn);
static int64_t chpl___COLON_7(_real64 x2,
                              int64_t _ln,
                              int32_t _fn);
static Error chpl___COLON_10(Error x2);
static chpl___RemoteVarContainer_R chpl___COLON_11(chpl___RemoteVarContainer_R x2);
static Error chpl___COLON_12(IllegalArgumentError x2,
                             int64_t _ln,
                             int32_t _fn);
static Error chpl___COLON_13(NilClassError x2,
                             int64_t _ln,
                             int32_t _fn);
static Error chpl___COLON_14(DecodeError x2,
                             int64_t _ln,
                             int32_t _fn);
static Error chpl___COLON_15(CodepointSplitError x2,
                             int64_t _ln,
                             int32_t _fn);
static Error chpl___COLON_8(SystemError x2,
                            int64_t _ln,
                            int32_t _fn);
static Error chpl___COLON_9(TaskErrors x2,
                            int64_t _ln,
                            int32_t _fn);
static AbstractRootLocale chpl___COLON_16(BaseLocale x2,
                                          int64_t _ln,
                                          int32_t _fn);
static RootLocale chpl___COLON_17(BaseLocale x2,
                                  int64_t _ln,
                                  int32_t _fn);
static AbstractLocaleModel chpl___COLON_18(BaseLocale x2,
                                           int64_t _ln,
                                           int32_t _fn);
static BaseArrOverRectangularDom_1_int64_t_one chpl___COLON_19(BaseArr x2,
                                                               int64_t _ln,
                                                               int32_t _fn);
static TaskErrors chpl___COLON_20(Error x2,
                                  int64_t _ln,
                                  int32_t _fn);
static _tuple_2_byteIndex_int64_t chpl__initCopy2(_tuple_2__ref_byteIndex_int64_t * x2,
                                                  chpl_bool definedConst);
static void chpl__initCopy3(_tuple_6_star__ref_string * x2,
                            chpl_bool definedConst,
                            _tuple_6_star_string * _ret,
                            int64_t _ln,
                            int32_t _fn);
static _tuple_3_int32_t_byteIndex_int64_t chpl__initCopy4(_tuple_3_int32_t__ref_byteIndex_int64_t * x2,
                                                          chpl_bool definedConst);
static locale chpl__initCopy5(locale * x2,
                              chpl_bool definedConst);
static string chpl__initCopy6(string * x2,
                              chpl_bool definedConst,
                              int64_t _ln,
                              int32_t _fn);
static fileWriter_F_defaultSerializer chpl__initCopy7(fileWriter_F_defaultSerializer * x2,
                                                      chpl_bool definedConst,
                                                      int64_t _ln,
                                                      int32_t _fn);
static locale chpl__autoCopy(locale * x2,
                             chpl_bool definedConst);
static string chpl__autoCopy2(string * x2,
                              chpl_bool definedConst,
                              int64_t _ln,
                              int32_t _fn);
static void chpl__autoDestroy(RootClass x2);
static void chpl__autoDestroy10(_tuple_1_star__ref_R * x2);
static void chpl__autoDestroy11(_tuple_2_Remote_R__ref_chpl_ioNewline * x2);
static void chpl__autoDestroy12(_tuple_2__ref_string__ref_chpl_ioNewline * x2);
static void chpl__autoDestroy13(file * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy14(_tuple_3__ref_string_int64_t__ref_string * x2);
static void chpl__autoDestroy15(_tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline * x2);
static void chpl__autoDestroy16(_tuple_1_star__ref_chpl_ioNewline * x2);
static void chpl__autoDestroy17(_tuple_2_BaseArr_BaseDom * x2);
static void chpl__autoDestroy18(_ddata_int64_t x2);
static void chpl__autoDestroy19(range_int64_t_low_one x2);
static void chpl__autoDestroy2(_tuple_1_star_range_int64_t_both_one * x2);
static void chpl__autoDestroy20(fileWriter_T_defaultSerializer * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy21(_tuple_2_BaseDom_BaseDist * x2);
static void chpl__autoDestroy22(range_byteIndex_high_one x2);
static void chpl__autoDestroy23(string * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy24(chpl_ioNewline * x2);
static void chpl__autoDestroy25(ioHintSet * x2);
static void chpl__autoDestroy26(byteIndex * x2);
static void chpl__autoDestroy27(_ddata_locale x2);
static void chpl__autoDestroy28(codepointIndex * x2);
static void chpl__autoDestroy29(_tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string * x2);
static void chpl__autoDestroy3(range_int64_t_high_one x2);
static void chpl__autoDestroy30(_tr_chpl__thunk2 * x2);
static void chpl__autoDestroy31(_tuple_2__ref_string_int64_t * x2);
static void chpl__autoDestroy32(_tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t * x2);
static void chpl__autoDestroy33(_tuple_1_star_c_ptrConst_int8_t * x2);
static void chpl__autoDestroy34(_tuple_3_syserr_int32_t_int32_t * x2);
static void chpl__autoDestroy35(_tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one * x2);
static void chpl__autoDestroy36(_tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t * x2);
static void chpl__autoDestroy37(fileReader_F_defaultDeserializer * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy38(_tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string * x2);
static void chpl__autoDestroy39(fileWriter_F_defaultSerializer * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy4(DefaultComparator * x2);
static void chpl__autoDestroy40(_tuple_3__ref_string_ArrayInit__ref_string * x2);
static void chpl__autoDestroy41(AtomicT_int64_t * x2);
static void chpl__autoDestroy42(_ddata_uint64_t x2);
static void chpl__autoDestroy43(defaultDeserializer * x2);
static void chpl__autoDestroy44(endCountDiagsManager * x2);
static void chpl__autoDestroy45(locale * x2);
static void chpl__autoDestroy46(_tuple_2_range_int64_t_both_one_int64_t * x2);
static void chpl__autoDestroy47(_tuple_2__ref_byteIndex_int64_t * x2);
static void chpl__autoDestroy48(ReverseComparator_DefaultComparator * x2);
static void chpl__autoDestroy49(_tuple_3_int32_t__ref_byteIndex_int64_t * x2);
static void chpl__autoDestroy5(chpl_root_locale_accum * x2);
static void chpl__autoDestroy50(_tuple_1_star_int64_t * x2);
static void chpl__autoDestroy51(_tuple_2__ref_string_uint64_t * x2);
static void chpl__autoDestroy52(_tuple_3_int32_t_byteIndex_int64_t * x2);
static void chpl__autoDestroy53(_tuple_6_star_string * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy54(fileReader_T_defaultDeserializer * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy55(range_byteIndex_both_one x2);
static void chpl__autoDestroy56(_tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t * x2);
static void chpl__autoDestroy57(_tuple_4__ref_string_int32_t__ref_string_int64_t * x2);
static void chpl__autoDestroy58(_tuple_2_star_int64_t * x2);
static void chpl__autoDestroy59(range_int64_t_both_one x2);
static void chpl__autoDestroy6(_tuple_2_c_ptr_uint8_t_int64_t * x2);
static void chpl__autoDestroy60(_tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t * x2);
static void chpl__autoDestroy61(_tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t * x2);
static void chpl__autoDestroy62(_tuple_4_star__ref_string * x2);
static void chpl__autoDestroy63(_tuple_4__ref_string_int64_t__ref_string_int64_t * x2);
static void chpl__autoDestroy64(_tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline * x2);
static void chpl__autoDestroy65(range_byteIndex_low_one x2);
static void chpl__autoDestroy7(AggregateSerializer_fileWriter_F_defaultSerializer * x2,
                               int64_t _ln,
                               int32_t _fn);
static void chpl__autoDestroy8(_tuple_1_star__ref__owned__RemoteVarContainer_R * x2);
static void chpl__autoDestroy9(defaultSerializer * x2);
static void chpl__autoDestroy66(_distribution_DefaultDist * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy67(_domain_DefaultRectangularDom_1_int64_t_one * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy68(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__delete(ProcessLookupError arg,
                         int64_t _ln,
                         int32_t _fn);
static void chpl__delete10(BadFormatError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete11(TaskErrors arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete12(Error arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete13(BlockingIoError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete14(QioPluginFile arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete15(chpl_ModuleDeinit arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete16(ChildProcessError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete17(IoError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete18(IllegalArgumentError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete19(BaseDom arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete2(ConnectionResetError arg,
                          int64_t _ln,
                          int32_t _fn);
static void chpl__delete20(SystemError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete21(chpl___RemoteVarContainer_R arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete22(BaseLocale arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete23(ReferenceCount arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete24(BaseArr arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete25(PermissionError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete26(NotADirectoryError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete27(TaskErrors arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete28(QioPluginChannel arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete29(BrokenPipeError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete3(FileNotFoundError arg,
                          int64_t _ln,
                          int32_t _fn);
static void chpl__delete30(chpl___EndCount_AtomicT_int64_t_int64_t arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete31(DecodeError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete32(InterruptedError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete33(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete34(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete35(DefaultRectangularDom_1_int64_t_one arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete36(DefaultRectangularArr_1_int64_t_one_locale_int64_t arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete37(ConnectionAbortedError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete38(ConnectionRefusedError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete39(FileExistsError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete4(UnexpectedEofError arg,
                          int64_t _ln,
                          int32_t _fn);
static void chpl__delete40(IsADirectoryError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete41(_serializeWrapper_defaultDeserializer arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete42(Remote_R arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete43(NilClassError arg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__delete5(TimeoutError arg,
                          int64_t _ln,
                          int32_t _fn);
static void chpl__delete6(_serializeWrapper_defaultSerializer arg,
                          int64_t _ln,
                          int32_t _fn);
static void chpl__delete7(BaseDist arg,
                          int64_t _ln,
                          int32_t _fn);
static void chpl__delete8(EofError arg,
                          int64_t _ln,
                          int32_t _fn);
static void chpl__delete9(CodepointSplitError arg,
                          int64_t _ln,
                          int32_t _fn);
static void chpl___PLUS__ASSIGN_(int64_t * lhs,
                                 int64_t rhs);
static void chpl___PLUS__ASSIGN_2(uint64_t * lhs,
                                  uint64_t rhs);
static void chpl___HYPHEN__ASSIGN_(int64_t * lhs,
                                   int64_t rhs);
static void chpl___ASTERISK__ASSIGN_(int64_t * lhs,
                                     int64_t rhs);
static void chpl___ASTERISK__ASSIGN_2(uint64_t * lhs,
                                      uint64_t rhs);
static void chpl___BAR__ASSIGN_(int32_t * lhs,
                                int32_t rhs);
static uint64_t chpl___PLUS_5(uint64_t a);
static uint64_t chpl___PLUS_6(uint64_t b);
static int64_t chpl___PLUS_7(int64_t a);
static uint64_t chpl___HYPHEN_5(uint64_t a);
static int64_t chpl___HYPHEN_6(int64_t a);
static int64_t chpl___HYPHEN_10(int64_t b);
static int64_t chpl___HYPHEN_7(int64_t b);
static int64_t chpl___HYPHEN_8(int64_t b);
static int64_t chpl___HYPHEN_9(int64_t b);
static uint64_t chpl___ASTERISK_5(uint64_t a);
static int64_t chpl___ASTERISK_6(int64_t a);
static uint64_t chpl___SLASH_3(uint64_t b,
                               int64_t _ln,
                               int32_t _fn);
static uint64_t chpl___SLASH_4(uint64_t b,
                               int64_t _ln,
                               int32_t _fn);
static chpl_bool chpl___EQUALS_16(uint8_t a,
                                  int8_t b,
                                  int64_t _ln,
                                  int32_t _fn);
static chpl_bool chpl___EQUALS_17(uint32_t a,
                                  int32_t b,
                                  int64_t _ln,
                                  int32_t _fn);
static chpl_bool chpl___EQUALS_18(uint64_t a,
                                  int64_t b,
                                  int64_t _ln,
                                  int32_t _fn);
static chpl_bool chpl___EXCLAMATION__ASSIGN_7(uint8_t a,
                                              int8_t b,
                                              int64_t _ln,
                                              int32_t _fn);
static chpl_bool chpl___EXCLAMATION__ASSIGN_8(uint64_t a,
                                              int64_t b,
                                              int64_t _ln,
                                              int32_t _fn);
static chpl_bool chpl___GREATER_4(uint32_t a,
                                  int32_t b,
                                  int64_t _ln,
                                  int32_t _fn);
static chpl_bool chpl___GREATER_5(uint64_t a,
                                  int64_t b,
                                  int64_t _ln,
                                  int32_t _fn);
static chpl_bool chpl___GREATER__ASSIGN_3(int64_t a,
                                          uint64_t b,
                                          int64_t _ln,
                                          int32_t _fn);
static chpl_bool chpl___GREATER__ASSIGN_4(int64_t a);
static chpl_bool chpl___GREATER__ASSIGN_5(int64_t a);
static chpl_bool chpl___GREATER__ASSIGN_6(int64_t a);
static chpl_bool chpl___GREATER__ASSIGN_7(int64_t a);
static chpl_bool chpl___LESS__ASSIGN_3(uint64_t a,
                                       int64_t b,
                                       int64_t _ln,
                                       int32_t _fn);
static chpl_ModuleDeinit _new2(c_string_rehook moduleName,
                               c_fn_ptr_rehook deinitFun,
                               chpl_ModuleDeinit prevModule,
                               int64_t _ln,
                               int32_t _fn);
static void chpl__auto_destroy_chpl_ModuleDeinit(chpl_ModuleDeinit this24,
                                                 int64_t _ln,
                                                 int32_t _fn);
static void init9(chpl_ModuleDeinit this24,
                  c_string_rehook moduleName,
                  c_fn_ptr_rehook deinitFun,
                  chpl_ModuleDeinit prevModule,
                  int64_t _ln,
                  int32_t _fn);
static c_fn_ptr_rehook * chpl_get_chpl_ModuleDeinit_deinitFun(chpl_ModuleDeinit this24,
                                                              int64_t _ln,
                                                              int32_t _fn);
static chpl_ModuleDeinit * chpl_get_chpl_ModuleDeinit_prevModule(chpl_ModuleDeinit this24,
                                                                 int64_t _ln,
                                                                 int32_t _fn);
static FileExistsError _to_unmanaged(FileExistsError arg);
static TimeoutError _to_unmanaged10(TimeoutError arg);
static BaseRectangularArr_1_int64_t_one_int64_t _to_unmanaged11(BaseRectangularArr_1_int64_t_one_int64_t arg);
static Error _to_unmanaged12(Error arg);
static IoError _to_unmanaged13(IoError arg);
static CodepointSplitError _to_unmanaged14(CodepointSplitError arg);
static BaseRectangularArr_1_int64_t_one_uint64_t _to_unmanaged15(BaseRectangularArr_1_int64_t_one_uint64_t arg);
static SystemError _to_unmanaged16(SystemError arg);
static chpl___EndCount_AtomicT_int64_t_int64_t _to_unmanaged17(chpl___EndCount_AtomicT_int64_t_int64_t arg);
static BaseLocale _to_unmanaged18(BaseLocale arg);
static IsADirectoryError _to_unmanaged19(IsADirectoryError arg);
static ConnectionResetError _to_unmanaged2(ConnectionResetError arg);
static PermissionError _to_unmanaged20(PermissionError arg);
static AbstractLocaleModel _to_unmanaged21(AbstractLocaleModel arg);
static BaseArrOverRectangularDom_1_int64_t_one _to_unmanaged22(BaseArrOverRectangularDom_1_int64_t_one arg);
static SystemError _to_unmanaged23(SystemError arg);
static DefaultRectangularDom_1_int64_t_one _to_unmanaged24(DefaultRectangularDom_1_int64_t_one arg);
static IllegalArgumentError _to_unmanaged25(IllegalArgumentError arg);
static BadFormatError _to_unmanaged26(BadFormatError arg);
static PermissionError _to_unmanaged27(PermissionError arg);
static UnexpectedEofError _to_unmanaged28(UnexpectedEofError arg);
static BadFormatError _to_unmanaged29(BadFormatError arg);
static ProcessLookupError _to_unmanaged3(ProcessLookupError arg);
static TaskErrors _to_unmanaged30(TaskErrors arg);
static NotADirectoryError _to_unmanaged31(NotADirectoryError arg);
static UnexpectedEofError _to_unmanaged32(UnexpectedEofError arg);
static InterruptedError _to_unmanaged33(InterruptedError arg);
static BaseArr _to_unmanaged34(BaseArr arg);
static IsADirectoryError _to_unmanaged35(IsADirectoryError arg);
static EofError _to_unmanaged36(EofError arg);
static IllegalArgumentError _to_unmanaged37(IllegalArgumentError arg);
static _serializeWrapper_defaultSerializer _to_unmanaged38(_serializeWrapper_defaultSerializer arg);
static InterruptedError _to_unmanaged39(InterruptedError arg);
static _serializeWrapper_defaultDeserializer _to_unmanaged4(_serializeWrapper_defaultDeserializer arg);
static FileNotFoundError _to_unmanaged40(FileNotFoundError arg);
static DefaultDist _to_unmanaged41(DefaultDist arg);
static EofError _to_unmanaged42(EofError arg);
static FileNotFoundError _to_unmanaged43(FileNotFoundError arg);
static FileExistsError _to_unmanaged44(FileExistsError arg);
static chpl___RemoteVarContainer_R _to_unmanaged45(chpl___RemoteVarContainer_R arg);
static chpl___RemoteVarContainer_R _to_unmanaged46(chpl___RemoteVarContainer_R arg);
static BrokenPipeError _to_unmanaged47(BrokenPipeError arg);
static BaseDist _to_unmanaged48(BaseDist arg);
static IoError _to_unmanaged49(IoError arg);
static BlockingIoError _to_unmanaged5(BlockingIoError arg);
static ConnectionResetError _to_unmanaged50(ConnectionResetError arg);
static ConnectionRefusedError _to_unmanaged51(ConnectionRefusedError arg);
static ConnectionAbortedError _to_unmanaged52(ConnectionAbortedError arg);
static NilClassError _to_unmanaged53(NilClassError arg);
static ProcessLookupError _to_unmanaged54(ProcessLookupError arg);
static BaseLocale _to_unmanaged55(BaseLocale arg);
static TimeoutError _to_unmanaged56(TimeoutError arg);
static BlockingIoError _to_unmanaged57(BlockingIoError arg);
static ChildProcessError _to_unmanaged58(ChildProcessError arg);
static DecodeError _to_unmanaged59(DecodeError arg);
static DefaultDist _to_unmanaged6(DefaultDist arg);
static BrokenPipeError _to_unmanaged60(BrokenPipeError arg);
static ConnectionRefusedError _to_unmanaged61(ConnectionRefusedError arg);
static TaskErrors _to_unmanaged62(TaskErrors arg);
static Error _to_unmanaged63(Error arg);
static ConnectionAbortedError _to_unmanaged64(ConnectionAbortedError arg);
static Remote_R _to_unmanaged65(Remote_R arg);
static ChildProcessError _to_unmanaged66(ChildProcessError arg);
static NotADirectoryError _to_unmanaged7(NotADirectoryError arg);
static BaseDom _to_unmanaged8(BaseDom arg);
static BaseRectangularArr_1_int64_t_one_locale _to_unmanaged9(BaseRectangularArr_1_int64_t_one_locale arg);
static Error _to_borrowed(Error arg);
static chpl___RemoteVarContainer_R _to_borrowed10(chpl___RemoteVarContainer_R arg);
static TimeoutError _to_borrowed11(TimeoutError arg);
static PermissionError _to_borrowed12(PermissionError arg);
static NotADirectoryError _to_borrowed13(NotADirectoryError arg);
static IsADirectoryError _to_borrowed14(IsADirectoryError arg);
static InterruptedError _to_borrowed15(InterruptedError arg);
static _serializeWrapper_defaultDeserializer _to_borrowed16(_serializeWrapper_defaultDeserializer arg);
static RootLocale _to_borrowed17(RootLocale arg);
static FileNotFoundError _to_borrowed18(FileNotFoundError arg);
static FileExistsError _to_borrowed19(FileExistsError arg);
static Remote_R _to_borrowed2(Remote_R arg);
static _serializeWrapper_defaultSerializer _to_borrowed20(_serializeWrapper_defaultSerializer arg);
static ConnectionResetError _to_borrowed21(ConnectionResetError arg);
static ConnectionRefusedError _to_borrowed22(ConnectionRefusedError arg);
static AbstractRootLocale _to_borrowed23(AbstractRootLocale arg);
static ConnectionAbortedError _to_borrowed24(ConnectionAbortedError arg);
static IllegalArgumentError _to_borrowed25(IllegalArgumentError arg);
static BaseArr _to_borrowed26(BaseArr arg);
static CodepointSplitError _to_borrowed27(CodepointSplitError arg);
static BrokenPipeError _to_borrowed28(BrokenPipeError arg);
static ChildProcessError _to_borrowed29(ChildProcessError arg);
static Error _to_borrowed3(Error arg);
static BlockingIoError _to_borrowed30(BlockingIoError arg);
static BadFormatError _to_borrowed31(BadFormatError arg);
static UnexpectedEofError _to_borrowed32(UnexpectedEofError arg);
static EofError _to_borrowed33(EofError arg);
static BaseArrOverRectangularDom_1_int64_t_one _to_borrowed34(BaseArrOverRectangularDom_1_int64_t_one arg);
static ReferenceCount _to_borrowed35(ReferenceCount arg);
static BaseDom _to_borrowed36(BaseDom arg);
static QioPluginChannel _to_borrowed37(QioPluginChannel arg);
static QioPluginFile _to_borrowed38(QioPluginFile arg);
static BaseLocale _to_borrowed39(BaseLocale arg);
static chpl_ModuleDeinit _to_borrowed4(chpl_ModuleDeinit arg);
static TaskErrors _to_borrowed40(TaskErrors arg);
static chpl___RemoteVarContainer_R _to_borrowed41(chpl___RemoteVarContainer_R arg);
static AbstractLocaleModel _to_borrowed42(AbstractLocaleModel arg);
static SystemError _to_borrowed5(SystemError arg);
static NilClassError _to_borrowed6(NilClassError arg);
static ProcessLookupError _to_borrowed7(ProcessLookupError arg);
static IoError _to_borrowed8(IoError arg);
static DecodeError _to_borrowed9(DecodeError arg);
static RootLocale _to_nonnil(RootLocale arg);
static AbstractRootLocale _to_nonnil10(AbstractRootLocale arg);
static BaseLocale _to_nonnil11(BaseLocale arg);
static BaseDom _to_nonnil12(BaseDom arg);
static BaseArrOverRectangularDom_1_int64_t_one _to_nonnil13(BaseArrOverRectangularDom_1_int64_t_one arg);
static Error _to_nonnil14(Error arg);
static Remote_R _to_nonnil15(Remote_R arg);
static QioPluginChannel _to_nonnil16(QioPluginChannel arg);
static ConnectionResetError _to_nonnil17(ConnectionResetError arg);
static chpl___RemoteVarContainer_R _to_nonnil18(chpl___RemoteVarContainer_R arg);
static ConnectionAbortedError _to_nonnil19(ConnectionAbortedError arg);
static BlockingIoError _to_nonnil2(BlockingIoError arg);
static SystemError _to_nonnil20(SystemError arg);
static PermissionError _to_nonnil21(PermissionError arg);
static IsADirectoryError _to_nonnil22(IsADirectoryError arg);
static _serializeWrapper_defaultSerializer _to_nonnil23(_serializeWrapper_defaultSerializer arg);
static Error _to_nonnil24(Error arg);
static BadFormatError _to_nonnil25(BadFormatError arg);
static FileExistsError _to_nonnil26(FileExistsError arg);
static BaseArr _to_nonnil27(BaseArr arg);
static BrokenPipeError _to_nonnil28(BrokenPipeError arg);
static ReferenceCount _to_nonnil29(ReferenceCount arg);
static ProcessLookupError _to_nonnil3(ProcessLookupError arg);
static chpl_ModuleDeinit _to_nonnil30(chpl_ModuleDeinit arg);
static FileNotFoundError _to_nonnil31(FileNotFoundError arg);
static ChildProcessError _to_nonnil32(ChildProcessError arg);
static TimeoutError _to_nonnil33(TimeoutError arg);
static InterruptedError _to_nonnil34(InterruptedError arg);
static IoError _to_nonnil35(IoError arg);
static EofError _to_nonnil36(EofError arg);
static AbstractLocaleModel _to_nonnil37(AbstractLocaleModel arg);
static ConnectionRefusedError _to_nonnil38(ConnectionRefusedError arg);
static IllegalArgumentError _to_nonnil4(IllegalArgumentError arg);
static chpl___RemoteVarContainer_R _to_nonnil5(chpl___RemoteVarContainer_R arg);
static QioPluginFile _to_nonnil6(QioPluginFile arg);
static UnexpectedEofError _to_nonnil7(UnexpectedEofError arg);
static NotADirectoryError _to_nonnil8(NotADirectoryError arg);
static _serializeWrapper_defaultDeserializer _to_nonnil9(_serializeWrapper_defaultDeserializer arg);
static RootLocale _to_nilable(RootLocale arg);
static AbstractRootLocale _to_nilable2(AbstractRootLocale arg);
static BaseArrOverRectangularDom_1_int64_t_one _to_nilable3(BaseArrOverRectangularDom_1_int64_t_one arg);
static AbstractLocaleModel _to_nilable4(AbstractLocaleModel arg);
static TaskErrors _to_nilable5(TaskErrors arg);
static BaseArrOverRectangularDom_1_int64_t_one chpl_checkBorrowIfVar(BaseArrOverRectangularDom_1_int64_t_one arg);
static IllegalArgumentError chpl_checkBorrowIfVar2(_owned_IllegalArgumentError2 * arg);
static Error chpl_checkBorrowIfVar3(Error arg);
static BaseArr chpl_checkBorrowIfVar4(BaseArr arg);
static TaskErrors chpl_checkBorrowIfVar5(TaskErrors arg);
static string _removed_cast(string * x2);
static range_int64_t_low_one _removed_cast2(range_int64_t_low_one * x2);
static range_int64_t_both_one _removed_cast3(range_int64_t_both_one * x2);
static int64_t chpl_boundedCoforallSize(range_int64_t_both_one iterable,
                                        int64_t _ln,
                                        int32_t _fn);
static chpl_bool chpl_field_neq(BaseLocale a,
                                BaseLocale b,
                                int64_t _ln,
                                int32_t _fn);
static void coforall_fn(int64_t len,
                        int64_t numChunks,
                        range_int64_t_both_one this24,
                        chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
                        int64_t chunk,
                        _ddata_locale x2,
                        int64_t _ln,
                        int32_t _fn);
static void coforall_fn2(int64_t len,
                         int64_t numChunks,
                         range_int64_t_both_one this24,
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
                         int64_t chunk,
                         _ddata_int64_t x2,
                         int64_t _ln,
                         int32_t _fn);
static void coforall_fn3(int64_t len,
                         int64_t numChunks,
                         range_int64_t_both_one this24,
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
                         int64_t chunk,
                         _ddata_locale oldDdata,
                         int64_t _ln,
                         int32_t _fn);
static void coforall_fn4(int64_t len,
                         int64_t numChunks,
                         range_int64_t_both_one this24,
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
                         int64_t chunk,
                         _ddata_uint64_t x2,
                         int64_t _ln,
                         int32_t _fn);
static void wrapcoforall_fn(_class_localscoforall_fn4 c);
static void wrapcoforall_fn2(_class_localscoforall_fn3 c);
static void wrapcoforall_fn3(_class_localscoforall_fn c);
static void wrapcoforall_fn4(_class_localscoforall_fn2 c);
static void chpl__init_ChapelContext(int64_t _ln,
                                     int32_t _fn);
static void chpl__verifyTypeContext(endCountDiagsManager * x2);
static void chpl__init_ChapelDebugPrint(int64_t _ln,
                                        int32_t _fn);
static void chpl__init_ChapelDistribution(int64_t _ln,
                                          int32_t _fn);
static DefaultDist * chpl_get__distribution__instance(_distribution_DefaultDist * this24);
static chpl_bool * chpl_get__distribution__unowned(_distribution_DefaultDist * this24);
static void init10(_distribution_DefaultDist * this24,
                   int64_t _pid,
                   DefaultDist _instance,
                   chpl_bool _unowned);
static void init11(_distribution_DefaultDist * this24,
                   DefaultDist value);
static DefaultDist _value2(_distribution_DefaultDist * this24);
static void _do_destroy(_distribution_DefaultDist * this24,
                        int64_t _ln,
                        int32_t _fn);
static void deinit4(_distribution_DefaultDist * this24,
                    int64_t _ln,
                    int32_t _fn);
static _distribution_DefaultDist clone2(_distribution_DefaultDist * this24,
                                        int64_t _ln,
                                        int32_t _fn);
static DefaultRectangularDom_1_int64_t_one newRectangularDom(_distribution_DefaultDist * this24,
                                                             _tuple_1_star_range_int64_t_both_one * ranges,
                                                             chpl_bool definedConst,
                                                             int64_t _ln,
                                                             int32_t _fn);
static DefaultRectangularDom_1_int64_t_one newRectangularDom2(_distribution_DefaultDist * this24,
                                                              chpl_bool definedConst,
                                                              int64_t _ln,
                                                              int32_t _fn);
static void init12(BaseDist this24,
                   int64_t _doms_containing_dist,
                   chpl_LocalSpinlock * _domsLock,
                   chpl_bool _free_when_no_doms,
                   int64_t pid,
                   int64_t _ln,
                   int32_t _fn);
static int64_t * chpl_get_BaseDist__doms_containing_dist(BaseDist this24,
                                                         int64_t _ln,
                                                         int32_t _fn);
static chpl_LocalSpinlock * chpl_get_BaseDist__domsLock(BaseDist this24,
                                                        int64_t _ln,
                                                        int32_t _fn);
static chpl_bool * chpl_get_BaseDist__free_when_no_doms(BaseDist this24,
                                                        int64_t _ln,
                                                        int32_t _fn);
static void deinit5(BaseDist this24,
                    int64_t _ln,
                    int32_t _fn);
static BaseDist remove2(BaseDist this24,
                        int64_t _ln,
                        int32_t _fn);
static chpl_bool remove_dom(BaseDist this24,
                            BaseDom x2,
                            int64_t _ln,
                            int32_t _fn);
static void dsiDestroyDist(BaseDist this24);
static chpl_bool dsiTrackDomains(BaseDist this24);
static BaseArr * chpl_get_BaseDom__arrs_head(BaseDom this24,
                                             int64_t _ln,
                                             int32_t _fn);
static int64_t * chpl_get_BaseDom__arrs_containing_dom(BaseDom this24,
                                                       int64_t _ln,
                                                       int32_t _fn);
static chpl_LocalSpinlock * chpl_get_BaseDom__arrsLock(BaseDom this24,
                                                       int64_t _ln,
                                                       int32_t _fn);
static chpl_bool * chpl_get_BaseDom__free_when_no_arrs(BaseDom this24,
                                                       int64_t _ln,
                                                       int32_t _fn);
static chpl_bool * chpl_get_BaseDom_definedConst(BaseDom this24,
                                                 int64_t _ln,
                                                 int32_t _fn);
static void init13(BaseDom this24,
                   int64_t _ln,
                   int32_t _fn);
static void deinit6(BaseDom this24,
                    int64_t _ln,
                    int32_t _fn);
static void _arrs(BaseDom this24,
                  _ir__arrs_BaseDom * _retArg);
static _ic__arrs_BaseDom _getIterator2(_ir__arrs_BaseDom * ir,
                                       int64_t _ln,
                                       int32_t _fn);
static BaseDist dsiMyDist(BaseDom this24,
                          int64_t _ln,
                          int32_t _fn);
static chpl_bool trackArrays(BaseDom this24,
                             int64_t _ln,
                             int32_t _fn);
static _tuple_2_BaseDom_BaseDist remove3(BaseDom this24,
                                         int64_t _ln,
                                         int32_t _fn);
static chpl_bool remove_arr(BaseDom this24,
                            BaseArr x2,
                            int64_t _ln,
                            int32_t _fn);
static void add_arr(BaseDom this24,
                    BaseArr x2,
                    int64_t _ln,
                    int32_t _fn);
static chpl_bool add_arr_default_locking(BaseDom this24);
static chpl_bool add_arr_default_addToList(BaseDom this24);
static chpl_bool dsiLinksDistribution(BaseDom this24);
static void dsiDestroyDom(BaseDom this24);
static void init14(BaseRectangularDom_1_int64_t_one this24,
                   int64_t _ln,
                   int32_t _fn);
static void deinit7(BaseRectangularDom_1_int64_t_one this24,
                    int64_t _ln,
                    int32_t _fn);
static void init15(BaseArr this24,
                   BaseArr prev,
                   BaseArr next,
                   int64_t pid,
                   chpl_bool _decEltRefCounts,
                   chpl_ddataResizePolicy _resizePolicy,
                   int64_t _ln,
                   int32_t _fn);
static BaseArr * chpl_get_BaseArr_prev(BaseArr this24,
                                       int64_t _ln,
                                       int32_t _fn);
static BaseArr init_default_prev(int64_t _ln,
                                 int32_t _fn);
static BaseArr init_default_prev2(int64_t _ln,
                                  int32_t _fn);
static BaseArr init_default_prev3(int64_t _ln,
                                  int32_t _fn);
static BaseArr * chpl_get_BaseArr_next(BaseArr this24,
                                       int64_t _ln,
                                       int32_t _fn);
static BaseArr init_default_next(int64_t _ln,
                                 int32_t _fn);
static BaseArr init_default_next2(int64_t _ln,
                                  int32_t _fn);
static BaseArr init_default_next3(int64_t _ln,
                                  int32_t _fn);
static int64_t init_default_pid(void);
static int64_t init_default_pid2(void);
static int64_t init_default_pid3(void);
static chpl_bool * chpl_get_BaseArr__decEltRefCounts(BaseArr this24,
                                                     int64_t _ln,
                                                     int32_t _fn);
static chpl_bool init_default__decEltRefCounts(void);
static chpl_bool init_default__decEltRefCounts2(void);
static chpl_bool init_default__decEltRefCounts3(void);
static chpl_ddataResizePolicy * chpl_get_BaseArr__resizePolicy(BaseArr this24,
                                                               int64_t _ln,
                                                               int32_t _fn);
static chpl_ddataResizePolicy init_default__resizePolicy(void);
static chpl_ddataResizePolicy init_default__resizePolicy2(void);
static chpl_ddataResizePolicy init_default__resizePolicy3(void);
static void deinit8(BaseArr this24,
                    int64_t _ln,
                    int32_t _fn);
static BaseDom dsiGetBaseDom(BaseArr this24,
                             int64_t _ln,
                             int32_t _fn);
static _tuple_2_BaseArr_BaseDom remove4(BaseArr this24,
                                        int64_t _ln,
                                        int32_t _fn);
static void dsiDestroyArr(BaseArr this24,
                          chpl_bool deinitElts,
                          int64_t _ln,
                          int32_t _fn);
static void decEltCountsIfNeeded(BaseArr this24,
                                 int64_t _ln,
                                 int32_t _fn);
static void init16(BaseArrOverRectangularDom_1_int64_t_one this24,
                   BaseArr prev,
                   BaseArr next,
                   int64_t pid,
                   chpl_bool _decEltRefCounts,
                   chpl_ddataResizePolicy _resizePolicy,
                   int64_t _ln,
                   int32_t _fn);
static void dsiReallocate(BaseArrOverRectangularDom_1_int64_t_one this24,
                          _tuple_1_star_range_int64_t_both_one * bounds,
                          int64_t _ln,
                          int32_t _fn);
static void dsiPostReallocate(BaseArrOverRectangularDom_1_int64_t_one this24);
static void deinit9(BaseArrOverRectangularDom_1_int64_t_one this24,
                    int64_t _ln,
                    int32_t _fn);
static void init17(BaseRectangularArr_1_int64_t_one_uint64_t this24,
                   BaseArr prev,
                   BaseArr next,
                   int64_t pid,
                   chpl_bool _decEltRefCounts,
                   chpl_ddataResizePolicy _resizePolicy,
                   int64_t _ln,
                   int32_t _fn);
static void init18(BaseRectangularArr_1_int64_t_one_int64_t this24,
                   BaseArr prev,
                   BaseArr next,
                   int64_t pid,
                   chpl_bool _decEltRefCounts,
                   chpl_ddataResizePolicy _resizePolicy,
                   int64_t _ln,
                   int32_t _fn);
static void init19(BaseRectangularArr_1_int64_t_one_locale this24,
                   BaseArr prev,
                   BaseArr next,
                   int64_t pid,
                   chpl_bool _decEltRefCounts,
                   chpl_ddataResizePolicy _resizePolicy,
                   int64_t _ln,
                   int32_t _fn);
static void deinit10(BaseRectangularArr_1_int64_t_one_int64_t this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit11(BaseRectangularArr_1_int64_t_one_locale this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit12(BaseRectangularArr_1_int64_t_one_uint64_t this24,
                     int64_t _ln,
                     int32_t _fn);
static void decEltCountsIfNeeded2(BaseRectangularArr_1_int64_t_one_int64_t this24,
                                  int64_t _ln,
                                  int32_t _fn);
static void decEltCountsIfNeeded3(BaseRectangularArr_1_int64_t_one_uint64_t this24,
                                  int64_t _ln,
                                  int32_t _fn);
static void decEltCountsIfNeeded4(BaseRectangularArr_1_int64_t_one_locale this24,
                                  int64_t _ln,
                                  int32_t _fn);
static void _delete_dist(BaseDist dist,
                         chpl_bool privatized,
                         int64_t _ln,
                         int32_t _fn);
static void _delete_dom(DefaultRectangularDom_1_int64_t_one dom,
                        chpl_bool privatized,
                        int64_t _ln,
                        int32_t _fn);
static void _delete_dom2(BaseDom dom,
                         chpl_bool privatized,
                         int64_t _ln,
                         int32_t _fn);
static void _delete_arr(BaseArr arr,
                        chpl_bool deinitElts,
                        int64_t _ln,
                        int32_t _fn);
static void castIndices(_tuple_1_star_range_int64_t_both_one * from,
                        DefaultRectangularDom_1_int64_t_one lhs,
                        _tuple_1_star_range_int64_t_both_one * _retArg);
static void chpl_assignDomainWithGetSetIndices(DefaultRectangularDom_1_int64_t_one lhs,
                                               _domain_DefaultRectangularDom_1_int64_t_one * rhs,
                                               int64_t _ln,
                                               int32_t _fn);
static void chpl__init_ChapelDomain(int64_t _ln,
                                    int32_t _fn);
static _domain_DefaultRectangularDom_1_int64_t_one _getDomain(DefaultRectangularDom_1_int64_t_one value);
static void tupleOfRangesSlice(_tuple_1_star_range_int64_t_both_one * base,
                               _tuple_1_star_range_int64_t_both_one * slice,
                               _tuple_1_star_range_int64_t_both_one * _retArg);
static chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(_distribution_DefaultDist * dist);
static _domain_DefaultRectangularDom_1_int64_t_one chpl__convertRuntimeTypeToValue2(_distribution_DefaultDist * dist,
                                                                                    chpl_bool definedConst,
                                                                                    int64_t _ln,
                                                                                    int32_t _fn);
static _domain_DefaultRectangularDom_1_int64_t_one chpl__buildDomainExpr(range_int64_t_both_one _e0_ranges,
                                                                         chpl_bool definedConst,
                                                                         int64_t _ln,
                                                                         int32_t _fn);
static void chpl__setDomainConst(_domain_DefaultRectangularDom_1_int64_t_one * dom,
                                 int64_t _ln,
                                 int32_t _fn);
static _domain_DefaultRectangularDom_1_int64_t_one * chpl__ensureDomainExpr(_domain_DefaultRectangularDom_1_int64_t_one * x2);
static _domain_DefaultRectangularDom_1_int64_t_one chpl__ensureDomainExpr2(range_int64_t_both_one _e0_x,
                                                                           int64_t _ln,
                                                                           int32_t _fn);
static void chpl___ASSIGN_57(_domain_DefaultRectangularDom_1_int64_t_one * a,
                             _domain_DefaultRectangularDom_1_int64_t_one * b,
                             int64_t _ln,
                             int32_t _fn);
static _domain_DefaultRectangularDom_1_int64_t_one chpl__coerceMove(chpl___RuntimeTypeInfo * dstType,
                                                                    _domain_DefaultRectangularDom_1_int64_t_one * rhs,
                                                                    chpl_bool definedConst,
                                                                    int64_t _ln,
                                                                    int32_t _fn);
static DefaultRectangularDom_1_int64_t_one * chpl_get__domain__instance(_domain_DefaultRectangularDom_1_int64_t_one * this24);
static chpl_bool * chpl_get__domain__unowned(_domain_DefaultRectangularDom_1_int64_t_one * this24);
static void init20(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                   int64_t _pid,
                   DefaultRectangularDom_1_int64_t_one _instance,
                   chpl_bool _unowned);
static void init21(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                   DefaultRectangularDom_1_int64_t_one value);
static void init22(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                   _distribution_DefaultDist * d,
                   chpl_bool definedConst,
                   int64_t _ln,
                   int32_t _fn);
static void init23(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                   _distribution_DefaultDist * d,
                   _tuple_1_star_range_int64_t_both_one * ranges,
                   chpl_bool definedConst,
                   int64_t _ln,
                   int32_t _fn);
static DefaultRectangularDom_1_int64_t_one _value3(_domain_DefaultRectangularDom_1_int64_t_one * this24);
static DefaultRectangularDom_1_int64_t_one chpl_forwarding_expr1(_domain_DefaultRectangularDom_1_int64_t_one * this24);
static void _do_destroy2(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                         int64_t _ln,
                         int32_t _fn);
static void deinit13(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                     int64_t _ln,
                     int32_t _fn);
static _distribution_DefaultDist distribution(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                                              int64_t _ln,
                                              int32_t _fn);
static _domain_DefaultRectangularDom_1_int64_t_one this9(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                                                         range_int64_t_both_one _e0_ranges,
                                                         int64_t _ln,
                                                         int32_t _fn);
static int64_t size2(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                     int64_t _ln,
                     int32_t _fn);
static int64_t sizeAs(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                      int64_t _ln,
                      int32_t _fn);
static uint64_t sizeAs2(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                        int64_t _ln,
                        int32_t _fn);
static void dims(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                 _tuple_1_star_range_int64_t_both_one * _retArg,
                 int64_t _ln,
                 int32_t _fn);
static int64_t lowBound(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                        int64_t _ln,
                        int32_t _fn);
static void chpl_checkEltType(_domain_DefaultRectangularDom_1_int64_t_one * this24);
static void chpl_checkNegativeStride(_domain_DefaultRectangularDom_1_int64_t_one * this24);
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t buildArray(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                                                                            int64_t _ln,
                                                                            int32_t _fn);
static void help(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                 DefaultRectangularArr_1_int64_t_one_locale_int64_t * x2,
                 int64_t _ln,
                 int32_t _fn);
static chpl_bool contains(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                          _tuple_1_star_int64_t * idx,
                          int64_t _ln,
                          int32_t _fn);
static chpl_bool contains2(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                           int64_t _e0_idx,
                           int64_t _ln,
                           int32_t _fn);
static void setIndices(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                       _tuple_1_star_range_int64_t_both_one * x2,
                       int64_t _ln,
                       int32_t _fn);
static void getIndices(_domain_DefaultRectangularDom_1_int64_t_one * this24,
                       _tuple_1_star_range_int64_t_both_one * _retArg,
                       int64_t _ln,
                       int32_t _fn);
static string chpl___COLON_21(_domain_DefaultRectangularDom_1_int64_t_one * val,
                              int64_t _ln,
                              int32_t _fn);
static void chpl__init_ChapelHashtable(int64_t _ln,
                                       int32_t _fn);
static void chpl__init_ChapelIOStringifyHelper(int64_t _ln,
                                               int32_t _fn);
static string stringify_simple(string * _e0_args,
                               range_int64_t_both_one _e1_args,
                               string * _e2_args,
                               int64_t _e3_args,
                               int64_t _ln,
                               int32_t _fn);
static string stringify_simple10(string * _e0_args,
                                 string * _e1_args,
                                 int64_t _e2_args,
                                 string * _e3_args,
                                 range_int64_t_both_one _e4_args,
                                 int64_t _ln,
                                 int32_t _fn);
static string stringify_simple11(string * _e0_args,
                                 int64_t _e1_args,
                                 string * _e2_args,
                                 int64_t _e3_args,
                                 string * _e4_args,
                                 int64_t _ln,
                                 int32_t _fn);
static string stringify_simple12(string * _e0_args,
                                 uint64_t _e1_args,
                                 int64_t _ln,
                                 int32_t _fn);
static string stringify_simple13(string * _e0_args,
                                 int64_t _e1_args,
                                 string * _e2_args,
                                 int64_t _ln,
                                 int32_t _fn);
static string stringify_simple14(string * _e0_args,
                                 range_byteIndex_low_one _e1_args,
                                 string * _e2_args,
                                 int64_t _e3_args,
                                 int64_t _ln,
                                 int32_t _fn);
static string stringify_simple2(string * _e0_args,
                                range_byteIndex_both_one _e1_args,
                                string * _e2_args,
                                int64_t _e3_args,
                                int64_t _ln,
                                int32_t _fn);
static string stringify_simple3(string * _e0_args,
                                string * _e1_args,
                                string * _e2_args,
                                string * _e3_args,
                                int64_t _ln,
                                int32_t _fn);
static string stringify_simple4(string * _e0_args,
                                int64_t _e1_args,
                                string * _e2_args,
                                int64_t _e3_args,
                                int64_t _ln,
                                int32_t _fn);
static string stringify_simple5(c_string_rehook _e0_args,
                                int64_t _ln,
                                int32_t _fn);
static string stringify_simple6(string * _e0_args,
                                range_int64_t_low_one _e1_args,
                                string * _e2_args,
                                int64_t _e3_args,
                                int64_t _ln,
                                int32_t _fn);
static string stringify_simple7(string * _e0_args,
                                int64_t _e1_args,
                                int64_t _ln,
                                int32_t _fn);
static string stringify_simple8(string * _e0_args,
                                int32_t _e1_args,
                                string * _e2_args,
                                int64_t _e3_args,
                                int64_t _ln,
                                int32_t _fn);
static string stringify_simple9(string * _e0_args,
                                range_byteIndex_high_one _e1_args,
                                string * _e2_args,
                                int64_t _e3_args,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__init_ChapelIteratorSupport(int64_t _ln,
                                             int32_t _fn);
static _ic_these_range_int64_t_both_one _getIterator3(range_int64_t_both_one * x2,
                                                      int64_t _ln,
                                                      int32_t _fn);
static _ic_these_TaskErrors _getIterator4(TaskErrors * x2,
                                          int64_t _ln,
                                          int32_t _fn);
static _ic_these_DefaultRectangularDom_1_int64_t_one _getIterator5(DefaultRectangularDom_1_int64_t_one * x2,
                                                                   int64_t _ln,
                                                                   int32_t _fn);
static _ic_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t _getIterator6(_array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * x2,
                                                                                              int64_t _ln,
                                                                                              int32_t _fn);
static void _freeIterator(_ic_chpl_direct_counted_range_iter ic,
                          int64_t _ln,
                          int32_t _fn);
static void _freeIterator10(_ic_chpl_direct_range_iter3 ic,
                            int64_t _ln,
                            int32_t _fn);
static void _freeIterator11(_ic_these_TaskErrors ic,
                            int64_t _ln,
                            int32_t _fn);
static void _freeIterator12(_ic_chpl_direct_range_iter2 ic,
                            int64_t _ln,
                            int32_t _fn);
static void _freeIterator13(_ic_codepoints__ref_string ic,
                            int64_t _ln,
                            int32_t _fn);
static void _freeIterator14(_ic_these_help_DefaultRectangularDom_1_int64_t_one ic,
                            int64_t _ln,
                            int32_t _fn);
static void _freeIterator15(_ic__arrs_BaseDom ic,
                            int64_t _ln,
                            int32_t _fn);
static void _freeIterator16(_ic__cpIndexLen__ref_string ic,
                            int64_t _ln,
                            int32_t _fn);
static void _freeIterator17(_ic_these_range_int64_t_both_one ic,
                            int64_t _ln,
                            int32_t _fn);
static void _freeIterator18(_ic_chpl_bytes__ref_string ic,
                            int64_t _ln,
                            int32_t _fn);
static void _freeIterator19(_ic_chpl_direct_param_stride_range_iter ic,
                            int64_t _ln,
                            int32_t _fn);
static void _freeIterator2(_ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t ic,
                           int64_t _ln,
                           int32_t _fn);
static void _freeIterator20(_ic_chpl_direct_counted_range_iter_helper ic,
                            int64_t _ln,
                            int32_t _fn);
static void _freeIterator3(_ic_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t ic,
                           int64_t _ln,
                           int32_t _fn);
static void _freeIterator4(_ic_chpl__serialViewIter ic,
                           int64_t _ln,
                           int32_t _fn);
static void _freeIterator5(_ic_chpl__serialViewIter1D ic,
                           int64_t _ln,
                           int32_t _fn);
static void _freeIterator6(_ic_chpl_direct_pos_stride_range_iter ic,
                           int64_t _ln,
                           int32_t _fn);
static void _freeIterator7(_ic_these_DefaultRectangularDom_1_int64_t_one ic,
                           int64_t _ln,
                           int32_t _fn);
static void _freeIterator8(_ic_chpl_direct_range_iter ic,
                           int64_t _ln,
                           int32_t _fn);
static void _freeIterator9(_ic__indexLen__ref_string ic,
                           int64_t _ln,
                           int32_t _fn);
static void _freeIterator21(_tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string * x2,
                            int64_t _ln,
                            int32_t _fn);
static chpl_bool chpl___EQUALS_19(locale * _arg1,
                                  locale * _arg2,
                                  int64_t _ln,
                                  int32_t _fn);
static chpl_bool chpl___EXCLAMATION__ASSIGN_9(locale * _arg1,
                                              locale * _arg2,
                                              int64_t _ln,
                                              int32_t _fn);
static void chpl__init_ChapelLocale(int64_t _ln,
                                    int32_t _fn);
static BaseLocale * chpl_get_locale__instance(locale * this24);
static BaseLocale _value4(locale * this24,
                          int64_t _ln,
                          int32_t _fn);
static BaseLocale chpl_forwarding_expr12(locale * this24,
                                         int64_t _ln,
                                         int32_t _fn);
static void init24(locale * this24,
                   int64_t _ln,
                   int32_t _fn);
static void init25(locale * this24,
                   BaseLocale _instance);
static void init26(locale * this24,
                   BaseLocale _instance);
static void init27(locale * this24,
                   int64_t _ln,
                   int32_t _fn);
static void init28(locale * this24,
                   int64_t _ln,
                   int32_t _fn);
static void init29(locale * this24,
                   int64_t _ln,
                   int32_t _fn);
static void init_ASSIGN_(locale * this24,
                         locale * other);
static void deinit14(locale * this24);
static int64_t _getChildCount(locale * this24,
                              int64_t _ln,
                              int32_t _fn);
static locale here(int64_t _ln,
                   int32_t _fn);
static int64_t id(locale * this24,
                  int64_t _ln,
                  int32_t _fn);
static int64_t maxTaskPar(locale * this24,
                          int64_t _ln,
                          int32_t _fn);
static int64_t runningTasks(locale * this24,
                            int64_t _ln,
                            int32_t _fn);
static void chpl___ASSIGN_58(locale * l1,
                             locale * l2);
static void chpl__auto_destroy_BaseLocale(BaseLocale this24,
                                          int64_t _ln,
                                          int32_t _fn);
static void init30(BaseLocale this24,
                   locale * parent,
                   int64_t _ln,
                   int32_t _fn);
static int64_t * chpl_get_BaseLocale_nPUsLogAcc(BaseLocale this24,
                                                int64_t _ln,
                                                int32_t _fn);
static int64_t * chpl_get_BaseLocale_nPUsLogAll(BaseLocale this24,
                                                int64_t _ln,
                                                int32_t _fn);
static int64_t * chpl_get_BaseLocale_nPUsPhysAcc(BaseLocale this24,
                                                 int64_t _ln,
                                                 int32_t _fn);
static int64_t * chpl_get_BaseLocale_nPUsPhysAll(BaseLocale this24,
                                                 int64_t _ln,
                                                 int32_t _fn);
static int64_t * chpl_get_BaseLocale_maxTaskPar(BaseLocale this24,
                                                int64_t _ln,
                                                int32_t _fn);
static int64_t id2(BaseLocale this24,
                   int64_t _ln,
                   int32_t _fn);
static AtomicT_int64_t * chpl_get_BaseLocale_runningTaskCounter(BaseLocale this24,
                                                                int64_t _ln,
                                                                int32_t _fn);
static void runningTaskCntSet(BaseLocale this24,
                              int64_t val,
                              int64_t _ln,
                              int32_t _fn);
static void runningTaskCntAdd(BaseLocale this24,
                              int64_t val,
                              int64_t _ln,
                              int32_t _fn);
static void runningTaskCntSub(BaseLocale this24,
                              int64_t val,
                              int64_t _ln,
                              int32_t _fn);
static int64_t runningTaskCnt(BaseLocale this24,
                              int64_t _ln,
                              int32_t _fn);
static int64_t _getChildCount2(BaseLocale this24,
                               int64_t _ln,
                               int32_t _fn);
static void _getChild(BaseLocale this24,
                      int64_t idx,
                      locale * _retArg,
                      int64_t _ln,
                      int32_t _fn);
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * gpus(BaseLocale this24,
                                                                        int64_t _ln,
                                                                        int32_t _fn);
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * gpusImpl(BaseLocale this24);
static void chpl__auto_destroy_DummyLocale(DummyLocale this24,
                                           int64_t _ln,
                                           int32_t _fn);
static DummyLocale _new3(int64_t _ln,
                         int32_t _fn);
static void init31(DummyLocale this24,
                   int64_t _ln,
                   int32_t _fn);
static int64_t _getChildCount3(DummyLocale this24,
                               int64_t _ln,
                               int32_t _fn);
static void _getChild2(DummyLocale this24,
                       int64_t idx,
                       locale * _retArg,
                       int64_t _ln,
                       int32_t _fn);
static void chpl__auto_destroy_AbstractLocaleModel(AbstractLocaleModel this24,
                                                   int64_t _ln,
                                                   int32_t _fn);
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * chpl_get_AbstractLocaleModel_chpl_singletonThisLocaleArray(AbstractLocaleModel this24,
                                                                                                                              int64_t _ln,
                                                                                                                              int32_t _fn);
static void init32(AbstractLocaleModel this24,
                   locale * parent_loc,
                   int64_t _ln,
                   int32_t _fn);
static void chpl__auto_destroy_AbstractRootLocale(AbstractRootLocale this24,
                                                  int64_t _ln,
                                                  int32_t _fn);
static void init33(AbstractRootLocale this24,
                   locale * parent_loc,
                   int64_t _ln,
                   int32_t _fn);
static void localeIDtoLocale(AbstractRootLocale this24,
                             chpl_localeID_t * id3,
                             locale * _retArg,
                             int64_t _ln,
                             int32_t _fn);
static void warmupRuntime(int64_t _ln,
                          int32_t _fn);
static void coforall_fn5(int64_t i,
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
                         int64_t _ln,
                         int32_t _fn);
static void wrapcoforall_fn5(_class_localscoforall_fn5 c);
static void chpl_init_rootLocale(int64_t _ln,
                                 int32_t _fn);
static void chpl_rootLocaleInitPrivate(int64_t locIdx,
                                       int64_t _ln,
                                       int32_t _fn);
static void chpl_defaultLocaleInitPrivate(int64_t _ln,
                                          int32_t _fn);
static void chpl_singletonCurrentLocaleInitPrivateSublocs(locale * arg,
                                                          int64_t _ln,
                                                          int32_t _fn);
static void chpl_singletonCurrentLocaleInitPrivate(int64_t locIdx,
                                                   int64_t _ln,
                                                   int32_t _fn);
void chpl_getLocaleID(chpl_localeID_t * localeID,
                      int64_t _ln,
                      int32_t _fn);
static chpl_localeID_t here_id(void);
static locale chpl_localeID_to_locale(chpl_localeID_t * id3,
                                      int64_t _ln,
                                      int32_t _fn);
void chpl_taskRunningCntInc(int64_t _ln,
                            int32_t _fn);
void chpl_taskRunningCntDec(int64_t _ln,
                            int32_t _fn);
void chpl_taskRunningCntReset(int64_t _ln,
                              int32_t _fn);
static void deinit15(int64_t _ln,
                     int32_t _fn);
static void chpl__init_ChapelLocks(int64_t _ln,
                                   int32_t _fn);
static void chpl__auto_destroy_chpl_LocalSpinlock(chpl_LocalSpinlock * this24);
static AtomicBool * chpl_get_chpl_LocalSpinlock_l(chpl_LocalSpinlock * this24);
static void init34(chpl_LocalSpinlock * this24);
static void lock(chpl_LocalSpinlock * this24,
                 int64_t _ln,
                 int32_t _fn);
static void unlock(chpl_LocalSpinlock * this24,
                   int64_t _ln,
                   int32_t _fn);
static void chpl__init_ChapelNumLocales(int64_t _ln,
                                        int32_t _fn);
static void chpl__init_ChapelPrivatization(int64_t _ln,
                                           int32_t _fn);
static void chpl__auto_destroy_range(range_int64_t_both_one this24);
static void chpl__auto_destroy_range2(range_int64_t_high_one this24);
static void chpl__auto_destroy_range3(range_int64_t_low_one this24);
static void chpl__auto_destroy_range4(range_byteIndex_both_one this24);
static void chpl__auto_destroy_range5(range_byteIndex_low_one this24);
static void chpl__auto_destroy_range6(range_byteIndex_high_one this24);
static void chpl__init_ChapelRange(int64_t _ln,
                                   int32_t _fn);
static int64_t * chpl_get_range__low(range_byteIndex_both_one * this24);
static int64_t * chpl_get_range__low2(range_int64_t_both_one * this24);
static int64_t * chpl_get_range__low3(range_int64_t_low_one * this24);
static int64_t * chpl_get_range__low4(range_byteIndex_low_one * this24);
static int64_t * chpl_get_range__low5(range_int64_t_high_one * this24);
static int64_t * chpl_get_range__low6(range_byteIndex_high_one * this24);
static int64_t * chpl_get_range__high(range_byteIndex_low_one * this24);
static int64_t * chpl_get_range__high2(range_byteIndex_high_one * this24);
static int64_t * chpl_get_range__high3(range_int64_t_both_one * this24);
static int64_t * chpl_get_range__high4(range_byteIndex_both_one * this24);
static int64_t * chpl_get_range__high5(range_int64_t_high_one * this24);
static int64_t * chpl_get_range__high6(range_int64_t_low_one * this24);
static void chpl_get_range__stride(range_int64_t_both_one * this24);
static void chpl_get_range__stride2(range_int64_t_low_one * this24);
static void chpl_get_range__stride3(range_int64_t_high_one * this24);
static void chpl_get_range__alignment(range_int64_t_low_one * this24);
static void chpl_get_range__alignment2(range_int64_t_both_one * this24);
static void chpl_get_range__alignment3(range_int64_t_high_one * this24);
static int64_t lowBoundForIter(range_int64_t_both_one r);
static int64_t highBoundForIter(range_int64_t_both_one r);
static void init35(range_int64_t_both_one * this24,
                   int64_t low3,
                   int64_t high2);
static void init36(range_byteIndex_both_one * this24,
                   byteIndex * low3,
                   byteIndex * high2);
static void init37(range_int64_t_low_one * this24,
                   int64_t low3);
static void init38(range_byteIndex_low_one * this24,
                   byteIndex * low3);
static void init39(range_byteIndex_high_one * this24,
                   byteIndex * high2);
static void init40(range_int64_t_both_one * this24);
static void init41(range_int64_t_both_one * this24);
static void init42(range_int64_t_high_one * this24);
static void init43(range_int64_t_low_one * this24);
static void init44(range_int64_t_both_one * this24,
                   int64_t _low,
                   int64_t _high);
static void init45(range_int64_t_both_one * this24,
                   int64_t _low,
                   int64_t _high,
                   int64_t _stride);
static void init46(range_int64_t_low_one * this24,
                   int64_t _low,
                   int64_t _high,
                   int64_t _stride,
                   int64_t alignmentValue);
static void init47(range_int64_t_high_one * this24,
                   int64_t _low,
                   int64_t _high,
                   int64_t _stride,
                   int64_t alignmentValue);
static void init48(range_int64_t_both_one * this24,
                   int64_t _low,
                   int64_t _high,
                   int64_t _stride,
                   int64_t alignmentValue);
static range_int64_t_both_one chpl_build_bounded_range(void);
static range_int64_t_both_one chpl_build_bounded_range2(void);
static range_int64_t_both_one chpl_build_bounded_range3(int64_t low3,
                                                        int64_t high2);
static int64_t chpl__nudgeHighBound(int64_t high2);
static range_int64_t_low_one chpl_build_low_bounded_range(int64_t low3);
static byteIndex lowBound2(range_byteIndex_low_one this24);
static byteIndex lowBound3(range_byteIndex_both_one this24);
static int64_t lowBound4(range_int64_t_both_one this24);
static int64_t lowBound5(range_int64_t_low_one this24);
static int64_t low(range_int64_t_low_one this24);
static int64_t low2(range_int64_t_both_one this24);
static int64_t alignedLowAsInt(range_int64_t_low_one this24);
static int64_t alignedLowAsInt2(range_int64_t_both_one this24);
static byteIndex highBound(range_byteIndex_both_one this24);
static int64_t highBound2(range_int64_t_both_one this24);
static byteIndex highBound3(range_byteIndex_high_one this24);
static int64_t high(range_int64_t_both_one this24);
static int64_t alignedHighAsInt(range_int64_t_both_one this24);
static chpl_bool isEmpty(range_int64_t_both_one this24);
static chpl_bool isEmptyHelp(range_int64_t_both_one r);
static int64_t size3(range_int64_t_both_one this24,
                     int64_t _ln,
                     int32_t _fn);
static uint64_t sizeAs3(range_int64_t_both_one this24,
                        int64_t _ln,
                        int32_t _fn);
static int64_t sizeAs4(range_int64_t_both_one this24,
                       int64_t _ln,
                       int32_t _fn);
static uint64_t sizeAsHelp(range_int64_t_both_one this24,
                           int64_t al,
                           int64_t ah,
                           int64_t _ln,
                           int32_t _fn);
static int64_t sizeAsHelp2(range_int64_t_both_one this24,
                           int64_t al,
                           int64_t ah,
                           int64_t _ln,
                           int32_t _fn);
static int64_t sizeAsHelp_default_al(range_int64_t_both_one this24);
static int64_t sizeAsHelp_default_al2(range_int64_t_both_one this24);
static int64_t sizeAsHelp_default_ah(range_int64_t_both_one this24);
static int64_t sizeAsHelp_default_ah2(range_int64_t_both_one this24);
static chpl_bool hasFirst(range_int64_t_both_one this24);
static chpl_bool hasFirstForIter(range_int64_t_both_one this24);
static int64_t first(range_int64_t_both_one this24);
static void warnUnstableFirst(range_int64_t_both_one r);
static void warnUnstableFirst2(range_int64_t_both_one r);
static int64_t firstAsInt(range_int64_t_both_one this24);
static int64_t chpl_firstAsIntForIter(range_int64_t_both_one this24);
static int64_t lastAsInt(range_int64_t_both_one this24);
static int64_t chpl_lastAsIntForIter(range_int64_t_both_one this24);
static chpl_bool contains3(range_int64_t_both_one this24,
                           int64_t ind);
static chpl_bool contains4(range_int64_t_both_one this24,
                           range_int64_t_both_one other,
                           int64_t _ln,
                           int32_t _fn);
static range_int64_t_both_one adjustedSlice(range_int64_t_both_one * slice);
static chpl_bool chpl___EQUALS_20(range_int64_t_both_one r1,
                                  range_int64_t_both_one r2,
                                  int64_t _ln,
                                  int32_t _fn);
static chpl_bool chpl___EXCLAMATION__ASSIGN_10(range_int64_t_both_one r1,
                                               range_int64_t_both_one r2,
                                               int64_t _ln,
                                               int32_t _fn);
static range_int64_t_both_one chpl___COLON_22(range_byteIndex_both_one r,
                                              int64_t _ln,
                                              int32_t _fn);
static range_int64_t_high_one chpl___COLON_23(range_byteIndex_high_one r,
                                              int64_t _ln,
                                              int32_t _fn);
static range_int64_t_low_one chpl___COLON_24(range_byteIndex_low_one r,
                                             int64_t _ln,
                                             int32_t _fn);
static void checkBounds(range_byteIndex_high_one from);
static void checkBounds2(range_byteIndex_both_one from);
static void checkBounds3(range_byteIndex_low_one from);
static void checkEnumIdx(range_byteIndex_both_one from);
static void checkEnumIdx2(range_byteIndex_low_one from);
static void checkEnumIdx3(range_byteIndex_high_one from);
static _owned_IllegalArgumentError2 chpl_checkStrides(range_byteIndex_low_one this24,
                                                      int64_t _ln,
                                                      int32_t _fn);
static _owned_IllegalArgumentError2 chpl_checkStrides2(range_byteIndex_high_one this24,
                                                       int64_t _ln,
                                                       int32_t _fn);
static _owned_IllegalArgumentError2 chpl_checkStrides3(range_byteIndex_both_one this24,
                                                       int64_t _ln,
                                                       int32_t _fn);
static chpl_bool chpl_boundsCheck(range_int64_t_both_one this24,
                                  range_int64_t_both_one other,
                                  int64_t _ln,
                                  int32_t _fn);
static chpl_bool chpl_boundsCheck2(range_int64_t_both_one this24,
                                   range_int64_t_high_one other,
                                   int64_t _ln,
                                   int32_t _fn);
static chpl_bool chpl_boundsCheck3(range_int64_t_both_one this24,
                                   range_int64_t_low_one other,
                                   int64_t _ln,
                                   int32_t _fn);
static int64_t orderToIndex(range_int64_t_both_one this24,
                            int64_t ord,
                            int64_t _ln,
                            int32_t _fn);
static void chpl___ASSIGN_59(range_int64_t_both_one * r1,
                             range_int64_t_both_one r2);
static void chpl_check_step_integral(int64_t step);
static void chpl_range_check_stride(int64_t step,
                                    int64_t _ln,
                                    int32_t _fn);
static void chpl_range_check_stride2(void);
static range_int64_t_both_one this10(range_int64_t_low_one this24,
                                     range_int64_t_both_one other);
static range_int64_t_both_one this11(range_int64_t_both_one this24,
                                     range_int64_t_both_one other);
static range_int64_t_both_one this12(range_int64_t_high_one this24,
                                     range_int64_t_both_one other);
static int64_t myMin(int64_t x2,
                     int64_t y);
static int64_t myMin2(int64_t x2,
                      int64_t y);
static int64_t myMin3(int64_t x2,
                      int64_t y);
static int64_t myMax(int64_t x2,
                     int64_t y);
static int64_t myMax2(int64_t x2,
                      int64_t y);
static int64_t myMax3(int64_t x2,
                      int64_t y);
static range_int64_t_both_one chpl_count_help(range_int64_t_low_one r,
                                              int64_t count,
                                              int64_t _ln,
                                              int32_t _fn);
static range_int64_t_both_one chpl_count_help2(range_int64_t_low_one r,
                                               uint32_t count,
                                               int64_t _ln,
                                               int32_t _fn);
static int64_t absSameType(range_int64_t_low_one r);
static int64_t absSameType2(range_int64_t_low_one r);
static range_int64_t_both_one chpl___POUND_(range_int64_t_low_one r,
                                            int64_t count,
                                            int64_t _ln,
                                            int32_t _fn);
static range_int64_t_both_one chpl___POUND_2(range_int64_t_low_one r,
                                             uint32_t count,
                                             int64_t _ln,
                                             int32_t _fn);
static chpl_bool chpl_checkIfRangeIterWillOverflow(int64_t low3,
                                                   int64_t high2,
                                                   int64_t stride,
                                                   int64_t first2,
                                                   int64_t last,
                                                   chpl_bool shouldHalt,
                                                   int64_t _ln,
                                                   int32_t _fn);
static int64_t chpl_checkIfRangeIterWillOverflow_default_first(int64_t low3);
static int64_t chpl_checkIfRangeIterWillOverflow_default_last(int64_t high2);
static chpl_bool checkIfIterWillOverflow(range_int64_t_both_one this24,
                                         chpl_bool shouldHalt,
                                         int64_t _ln,
                                         int32_t _fn);
static _ic_chpl_direct_range_iter2 _getIterator7(_ir_chpl_direct_range_iter2 * ir,
                                                 int64_t _ln,
                                                 int32_t _fn);
static _ic_chpl_direct_range_iter _getIterator8(_ir_chpl_direct_range_iter * ir,
                                                int64_t _ln,
                                                int32_t _fn);
static _ir_chpl_direct_range_iter chpl_direct_range_iter(void);
static _ir_chpl_direct_range_iter2 chpl_direct_range_iter2(void);
static _ic_chpl_direct_range_iter3 _getIterator9(_ir_chpl_direct_range_iter3 * ir,
                                                 int64_t _ln,
                                                 int32_t _fn);
static void chpl_direct_range_iter3(int64_t low3,
                                    int64_t high2,
                                    _ir_chpl_direct_range_iter3 * _retArg);
static _ic_chpl_direct_counted_range_iter _getIterator10(_ir_chpl_direct_counted_range_iter * ir,
                                                         int64_t _ln,
                                                         int32_t _fn);
static void chpl_direct_counted_range_iter(int64_t low3,
                                           int64_t count,
                                           _ir_chpl_direct_counted_range_iter * _retArg);
static _ic_chpl_direct_counted_range_iter_helper _getIterator11(_ir_chpl_direct_counted_range_iter_helper * ir,
                                                                int64_t _ln,
                                                                int32_t _fn);
static void chpl_direct_counted_range_iter_helper(int64_t low3,
                                                  int64_t count,
                                                  _ir_chpl_direct_counted_range_iter_helper * _retArg);
static _ic_chpl_direct_pos_stride_range_iter _getIterator12(_ir_chpl_direct_pos_stride_range_iter * ir,
                                                            int64_t _ln,
                                                            int32_t _fn);
static void chpl_direct_pos_stride_range_iter(int64_t low3,
                                              int64_t high2,
                                              int64_t stride,
                                              _ir_chpl_direct_pos_stride_range_iter * _retArg);
static _ic_chpl_direct_param_stride_range_iter _getIterator13(_ir_chpl_direct_param_stride_range_iter * ir,
                                                              int64_t _ln,
                                                              int32_t _fn);
static void chpl_direct_param_stride_range_iter(int64_t low3,
                                                int64_t high2,
                                                _ir_chpl_direct_param_stride_range_iter * _retArg);
static _ic_these_range_int64_t_both_one _getIterator14(_ir_these_range_int64_t_both_one * ir,
                                                       int64_t _ln,
                                                       int32_t _fn);
static void advance(_ic_these_range_int64_t_both_one this24,
                    int64_t _ln,
                    int32_t _fn);
static int64_t getValue(_ic_these_range_int64_t_both_one this24,
                        int64_t _ln,
                        int32_t _fn);
static int64_t hasMore(_ic_these_range_int64_t_both_one this24,
                       int64_t _ln,
                       int32_t _fn);
static void incr(_ic_these_range_int64_t_both_one this24,
                 int64_t _ln,
                 int32_t _fn);
static void init49(_ic_these_range_int64_t_both_one this24,
                   int64_t _ln,
                   int32_t _fn);
static void these2(range_int64_t_both_one this24,
                   _ir_these_range_int64_t_both_one * _retArg);
static void zip1(_ic_these_range_int64_t_both_one this24,
                 int64_t _ln,
                 int32_t _fn);
static void zip2(_ic_these_range_int64_t_both_one this24,
                 int64_t _ln,
                 int32_t _fn);
static void zip3(_ic_these_range_int64_t_both_one this24);
static void zip4(_ic_these_range_int64_t_both_one this24);
static string chpl___COLON_25(range_byteIndex_low_one x2,
                              int64_t _ln,
                              int32_t _fn);
static string chpl___COLON_26(range_byteIndex_both_one x2,
                              int64_t _ln,
                              int32_t _fn);
static string chpl___COLON_27(range_int64_t_both_one x2,
                              int64_t _ln,
                              int32_t _fn);
static string chpl___COLON_28(range_byteIndex_high_one x2,
                              int64_t _ln,
                              int32_t _fn);
static string chpl___COLON_29(range_int64_t_low_one x2,
                              int64_t _ln,
                              int32_t _fn);
static int64_t chpl__add(int64_t a,
                         int64_t b);
static int64_t chpl__addRangeStrides(int64_t start,
                                     int64_t stride,
                                     int64_t count);
static int64_t mul(int64_t a,
                   int64_t b);
static int64_t add5(int64_t a,
                    int64_t b);
static int64_t chpl_intToIdx(range_int64_t_low_one this24,
                             int64_t i);
static byteIndex chpl_intToIdx2(range_byteIndex_high_one this24,
                                int64_t i);
static int64_t chpl_intToIdx3(range_int64_t_both_one this24,
                              int64_t i);
static byteIndex chpl_intToIdx4(range_byteIndex_both_one this24,
                                int64_t i);
static byteIndex chpl_intToIdx5(range_byteIndex_low_one this24,
                                int64_t i);
static int64_t chpl__intToIdx(int64_t i);
static int64_t chpl__idxToInt(int64_t i);
void chpl__init_ChapelStandard(int64_t _ln,
                               int32_t _fn);
static void chpl__init_ChapelStaticVars(int64_t _ln,
                                        int32_t _fn);
void chpl__initStringLiterals(void);
static void chpl__init_ChapelStringLiterals(int64_t _ln,
                                            int32_t _fn);
static void chpl__init_ChapelTaskData(int64_t _ln,
                                      int32_t _fn);
static uint64_t sizeof_endcount_ptr(void);
static void chpl_task_data_setDynamicEndCount(chpl_task_infoChapel_t * tls,
                                              chpl___EndCount_AtomicT_int64_t_int64_t end,
                                              int64_t _ln,
                                              int32_t _fn);
static chpl___EndCount_AtomicT_int64_t_int64_t chpl_task_data_getDynamicEndCount(chpl_task_infoChapel_t * tls,
                                                                                 int64_t _ln,
                                                                                 int32_t _fn);
static void chpl_task_data_setSerial(chpl_task_infoChapel_t * tls,
                                     chpl_bool makeSerial,
                                     int64_t _ln,
                                     int32_t _fn);
static chpl_bool chpl_task_data_getSerial(chpl_task_infoChapel_t * tls,
                                          int64_t _ln,
                                          int32_t _fn);
static void chpl_task_data_setNextCoStmtSerial(chpl_task_infoChapel_t * tls,
                                               chpl_bool makeSerial,
                                               int64_t _ln,
                                               int32_t _fn);
static chpl_bool chpl_task_data_getNextCoStmtSerial(chpl_task_infoChapel_t * tls,
                                                    int64_t _ln,
                                                    int32_t _fn);
static chpl_bool chpl_task_data_setCommDiagsTemporarilyDisabled(chpl_task_infoChapel_t * tls,
                                                                chpl_bool disabled,
                                                                int64_t _ln,
                                                                int32_t _fn);
static chpl_bool chpl_task_data_getCommDiagsTemporarilyDisabled(chpl_task_infoChapel_t * tls,
                                                                int64_t _ln,
                                                                int32_t _fn);
static void chpl_task_setDynamicEndCount(chpl___EndCount_AtomicT_int64_t_int64_t end,
                                         int64_t _ln,
                                         int32_t _fn);
static chpl___EndCount_AtomicT_int64_t_int64_t chpl_task_getDynamicEndCount(int64_t _ln,
                                                                            int32_t _fn);
void chpl_task_setSerial(chpl_bool makeSerial);
chpl_bool chpl_task_getSerial(void);
chpl_bool chpl_task_setCommDiagsTemporarilyDisabled(chpl_bool disabled);
chpl_bool chpl_task_getCommDiagsTemporarilyDisabled(void);
static void chpl__init_ChapelTaskDataHelp(int64_t _ln,
                                          int32_t _fn);
static void chpl_task_data_setup(chpl_task_bundle_p args,
                                 chpl_task_infoChapel_t * infoChapel,
                                 int64_t _ln,
                                 int32_t _fn);
static void chpl_save_task_error(chpl___EndCountBase e,
                                 Error err,
                                 int64_t _ln,
                                 int32_t _fn);
static void chpl__init_ChapelTaskTable(int64_t _ln,
                                       int32_t _fn);
void chpldev_taskTable_add(chpl_taskID_t taskID,
                           uint32_t lineno,
                           int32_t filename,
                           uint64_t tl_info);
void chpldev_taskTable_remove(chpl_taskID_t taskID);
void chpldev_taskTable_set_active(chpl_taskID_t taskID);
void chpldev_taskTable_set_suspended(chpl_taskID_t taskID);
void chpldev_taskTable_get_tl_info(chpl_taskID_t taskID);
void chpldev_taskTable_print(void);
static void chpl__init_ChapelThreads(int64_t _ln,
                                     int32_t _fn);
static void _defaultOf(_tuple_1_star_int64_t * _retArg);
static void _defaultOf2(_tuple_1_star_range_int64_t_both_one * _retArg);
static void chpl__init_ChapelTuple(int64_t _ln,
                                   int32_t _fn);
static void chpl__auto_destroy__tuple_1_star__ref_R(_tuple_1_star__ref_R * this24);
static void chpl__auto_destroy__tuple_1_star__ref__owned__RemoteVarContainer_R(_tuple_1_star__ref__owned__RemoteVarContainer_R * this24);
static void chpl__auto_destroy__tuple_1_star__ref_chpl_ioNewline(_tuple_1_star__ref_chpl_ioNewline * this24);
static void chpl__auto_destroy__tuple_1_star_c_ptrConst_int8_t(_tuple_1_star_c_ptrConst_int8_t * this24);
static void chpl__auto_destroy__tuple_1_star_int64_t(_tuple_1_star_int64_t * this24);
static void chpl__auto_destroy__tuple_1_star_range_int64_t_both_one(_tuple_1_star_range_int64_t_both_one * this24);
static void chpl__auto_destroy__tuple_2_BaseArr_BaseDom(_tuple_2_BaseArr_BaseDom * this24);
static void chpl__auto_destroy__tuple_2_BaseDom_BaseDist(_tuple_2_BaseDom_BaseDist * this24);
static void chpl__auto_destroy__tuple_2_Remote_R__ref_chpl_ioNewline(_tuple_2_Remote_R__ref_chpl_ioNewline * this24);
static void chpl__auto_destroy__tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string(_tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string * this24);
static void chpl__auto_destroy__tuple_2__ref_byteIndex_int64_t(_tuple_2__ref_byteIndex_int64_t * this24);
static void chpl__auto_destroy__tuple_2__ref_string__ref_chpl_ioNewline(_tuple_2__ref_string__ref_chpl_ioNewline * this24);
static void chpl__auto_destroy__tuple_2__ref_string_int64_t(_tuple_2__ref_string_int64_t * this24);
static void chpl__auto_destroy__tuple_2__ref_string_uint64_t(_tuple_2__ref_string_uint64_t * this24);
static void chpl__auto_destroy__tuple_2_c_ptr_uint8_t_int64_t(_tuple_2_c_ptr_uint8_t_int64_t * this24);
static void chpl__auto_destroy__tuple_2_range_int64_t_both_one_int64_t(_tuple_2_range_int64_t_both_one_int64_t * this24);
static void chpl__auto_destroy__tuple_2_star_int64_t(_tuple_2_star_int64_t * this24);
static void chpl__auto_destroy__tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline(_tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline * this24);
static void chpl__auto_destroy__tuple_3__ref_string_ArrayInit__ref_string(_tuple_3__ref_string_ArrayInit__ref_string * this24);
static void chpl__auto_destroy__tuple_3__ref_string_int64_t__ref_string(_tuple_3__ref_string_int64_t__ref_string * this24);
static void chpl__auto_destroy__tuple_3_int32_t__ref_byteIndex_int64_t(_tuple_3_int32_t__ref_byteIndex_int64_t * this24);
static void chpl__auto_destroy__tuple_3_int32_t_byteIndex_int64_t(_tuple_3_int32_t_byteIndex_int64_t * this24);
static void chpl__auto_destroy__tuple_3_syserr_int32_t_int32_t(_tuple_3_syserr_int32_t_int32_t * this24);
static void chpl__auto_destroy__tuple_4__ref_string_int32_t__ref_string_int64_t(_tuple_4__ref_string_int32_t__ref_string_int64_t * this24);
static void chpl__auto_destroy__tuple_4__ref_string_int64_t__ref_string_int64_t(_tuple_4__ref_string_int64_t__ref_string_int64_t * this24);
static void chpl__auto_destroy__tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t(_tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t * this24);
static void chpl__auto_destroy__tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t(_tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t * this24);
static void chpl__auto_destroy__tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t(_tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t * this24);
static void chpl__auto_destroy__tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t(_tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t * this24);
static void chpl__auto_destroy__tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t(_tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t * this24);
static void chpl__auto_destroy__tuple_4_star__ref_string(_tuple_4_star__ref_string * this24);
static void chpl__auto_destroy__tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one(_tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one * this24);
static void chpl__auto_destroy__tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string(_tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string * this24);
static void chpl__auto_destroy__tuple_6_star_string(_tuple_6_star_string * this24,
                                                    int64_t _ln,
                                                    int32_t _fn);
static void chpl__auto_destroy__tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline(_tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline * this24);
static void chpl__init_tuple(BaseDom x0,
                             BaseDist x1,
                             _tuple_2_BaseDom_BaseDist * _retArg);
static void chpl__init_tuple10(int32_t x0,
                               byteIndex * x1,
                               int64_t x2,
                               _tuple_3_int32_t__ref_byteIndex_int64_t * _retArg);
static void chpl__init_tuple11(string * x0,
                               range_byteIndex_low_one x1,
                               string * x2,
                               int64_t x3,
                               _tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t * _retArg);
static void chpl__init_tuple12(string * x0,
                               string * x1,
                               string * x2,
                               string * x3,
                               _tuple_4_star__ref_string * _retArg);
static void chpl__init_tuple13(c_string_rehook x0,
                               _tuple_1_star_c_ptrConst_int8_t * _retArg,
                               int64_t _ln,
                               int32_t _fn);
static void chpl__init_tuple14(string * x0,
                               string * x1,
                               string * x2,
                               string * x3,
                               string * x4,
                               string * x5,
                               _tuple_6_star__ref_string * _retArg);
static void chpl__init_tuple15(byteIndex * x0,
                               int64_t x1,
                               _tuple_2__ref_byteIndex_int64_t * _retArg);
static void chpl__init_tuple16(uint8_t * x0,
                               int64_t x1,
                               _tuple_2_c_ptr_uint8_t_int64_t * _retArg);
static void chpl__init_tuple17(string * x0,
                               string * x1,
                               string * x2,
                               Remote_R x3,
                               string * x4,
                               R * x5,
                               chpl_ioNewline * x6,
                               _tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline * _retArg);
static void chpl__init_tuple18(string * x0,
                               string * x1,
                               int64_t x2,
                               string * x3,
                               range_int64_t_both_one x4,
                               _tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one * _retArg);
static void chpl__init_tuple19(_owned__RemoteVarContainer_R * x0,
                               _tuple_1_star__ref__owned__RemoteVarContainer_R * _retArg);
static void chpl__init_tuple2(string * x0,
                              range_byteIndex_high_one x1,
                              string * x2,
                              int64_t x3,
                              _tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t * _retArg);
static void chpl__init_tuple20(string * x0,
                               int64_t x1,
                               string * x2,
                               int64_t x3,
                               string * x4,
                               _tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string * _retArg);
static void chpl__init_tuple21(string * x0,
                               range_byteIndex_both_one x1,
                               string * x2,
                               int64_t x3,
                               _tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t * _retArg);
static void chpl__init_tuple22(string * x0,
                               range_int64_t_both_one x1,
                               string * x2,
                               int64_t x3,
                               _tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t * _retArg);
static void chpl__init_tuple23(R * x0,
                               _tuple_1_star__ref_R * _retArg);
static void chpl__init_tuple24(string * x0,
                               uint64_t x1,
                               _tuple_2__ref_string_uint64_t * _retArg);
static void chpl__init_tuple25(Remote_R x0,
                               chpl_ioNewline * x1,
                               _tuple_2_Remote_R__ref_chpl_ioNewline * _retArg);
static void chpl__init_tuple26(string * x0,
                               chpl_ioNewline * x1,
                               _tuple_2__ref_string__ref_chpl_ioNewline * _retArg);
static void chpl__init_tuple27(string * x0,
                               int32_t x1,
                               string * x2,
                               int64_t x3,
                               _tuple_4__ref_string_int32_t__ref_string_int64_t * _retArg);
static void chpl__init_tuple28(_owned_Remote_R * x0,
                               Remote_R x1,
                               chpl_ioNewline * x2,
                               _tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline * _retArg);
static void chpl__init_tuple29(_ic_these_range_int64_t_both_one x0,
                               _ic_chpl_bytes__ref_string x1,
                               _tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string * _retArg);
static void chpl__init_tuple3(string * x0,
                              range_int64_t_low_one x1,
                              string * x2,
                              int64_t x3,
                              _tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t * _retArg);
static void chpl__init_tuple30(string * x0,
                               int64_t x1,
                               _tuple_2__ref_string_int64_t * _retArg);
static void chpl__init_tuple31(chpl_ioNewline * x0,
                               _tuple_1_star__ref_chpl_ioNewline * _retArg);
static void chpl__init_tuple32(BaseArr x0,
                               BaseDom x1,
                               _tuple_2_BaseArr_BaseDom * _retArg);
static void chpl__init_tuple33(range_int64_t_both_one x0,
                               _tuple_1_star_range_int64_t_both_one * _retArg);
static void chpl__init_tuple34(syserr x0,
                               int32_t x1,
                               int32_t x2,
                               _tuple_3_syserr_int32_t_int32_t * _retArg);
static void chpl__init_tuple4(string * x0,
                              int64_t x1,
                              string * x2,
                              int64_t x3,
                              _tuple_4__ref_string_int64_t__ref_string_int64_t * _retArg);
static void chpl__init_tuple5(range_int64_t_both_one x0,
                              int64_t x1,
                              _tuple_2_range_int64_t_both_one_int64_t * _retArg);
static void chpl__init_tuple6(int64_t x0,
                              int64_t x1,
                              _tuple_2_star_int64_t * _retArg);
static void chpl__init_tuple7(string * x0,
                              ArrayInit x1,
                              string * x2,
                              _tuple_3__ref_string_ArrayInit__ref_string * _retArg);
static void chpl__init_tuple8(string * x0,
                              int64_t x1,
                              string * x2,
                              _tuple_3__ref_string_int64_t__ref_string * _retArg);
static void chpl__init_tuple9(int64_t x0,
                              _tuple_1_star_int64_t * _retArg);
static _tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string _build_tuple(_ic_these_range_int64_t_both_one _e0_x,
                                                                                         _ic_chpl_bytes__ref_string _e1_x);
static void _build_tuple10(string * _e0_x,
                           string * _e1_x,
                           string * _e2_x,
                           string * _e3_x,
                           string * _e4_x,
                           string * _e5_x,
                           _tuple_6_star__ref_string * _retArg);
static _tuple_2__ref_byteIndex_int64_t _build_tuple2(byteIndex * _e0_x,
                                                     int64_t _e1_x);
static _tuple_3_syserr_int32_t_int32_t _build_tuple3(syserr _e0_x,
                                                     int32_t _e1_x,
                                                     int32_t _e2_x);
static _tuple_3_int32_t__ref_byteIndex_int64_t _build_tuple4(int32_t _e0_x,
                                                             byteIndex * _e1_x,
                                                             int64_t _e2_x);
static _tuple_2_range_int64_t_both_one_int64_t _build_tuple5(range_int64_t_both_one _e0_x,
                                                             int64_t _e1_x);
static void _build_tuple6(int64_t _e0_x,
                          int64_t _e1_x,
                          _tuple_2_star_int64_t * _retArg);
static _tuple_2_BaseArr_BaseDom _build_tuple7(BaseArr _e0_x,
                                              BaseDom _e1_x);
static _tuple_2_BaseDom_BaseDist _build_tuple8(BaseDom _e0_x,
                                               BaseDist _e1_x);
static _tuple_2_c_ptr_uint8_t_int64_t _build_tuple9(uint8_t * _e0_x,
                                                    int64_t _e1_x);
static void chpl___ASSIGN_60(_tuple_1_star_int64_t * x2,
                             _tuple_1_star_int64_t * y);
static void chpl___ASSIGN_61(_tuple_1_star_range_int64_t_both_one * x2,
                             _tuple_1_star_range_int64_t_both_one * y);
static range_int64_t_both_one * this13(_tuple_1_star_range_int64_t_both_one * this24,
                                       int64_t i,
                                       int64_t _ln,
                                       int32_t _fn);
static range_int64_t_both_one indices(_tuple_1_star_range_int64_t_both_one * this24);
static void chpl___COLON_30(_tuple_1_star_range_int64_t_both_one * x2,
                            _tuple_1_star_range_int64_t_both_one * _retArg);
static void chpl___COLON_31(_tuple_1_star_int64_t * x2,
                            _tuple_1_star_int64_t * _retArg);
static void chpl__init_ChapelUtil(int64_t _ln,
                                  int32_t _fn);
static chpl_bool safeAdd(int64_t a,
                         int64_t b);
static chpl_bool safeMul(uint64_t a,
                         uint64_t b,
                         int64_t _ln,
                         int32_t _fn);
static _real64 _command_line_cast(c_string_rehook x2,
                                  int64_t _ln,
                                  int32_t _fn);
static chpl_bool _command_line_cast10(c_string_rehook x2,
                                      int64_t _ln,
                                      int32_t _fn);
static chpl_bool _command_line_cast11(c_string_rehook x2,
                                      int64_t _ln,
                                      int32_t _fn);
static chpl_bool _command_line_cast12(c_string_rehook x2,
                                      int64_t _ln,
                                      int32_t _fn);
static int64_t _command_line_cast13(c_string_rehook x2,
                                    int64_t _ln,
                                    int32_t _fn);
static chpl_bool _command_line_cast14(c_string_rehook x2,
                                      int64_t _ln,
                                      int32_t _fn);
static chpl_bool _command_line_cast15(c_string_rehook x2,
                                      int64_t _ln,
                                      int32_t _fn);
static chpl_bool _command_line_cast2(c_string_rehook x2,
                                     int64_t _ln,
                                     int32_t _fn);
static int64_t _command_line_cast3(c_string_rehook x2,
                                   int64_t _ln,
                                   int32_t _fn);
static string _command_line_cast4(c_string_rehook x2,
                                  int64_t _ln,
                                  int32_t _fn);
static int64_t _command_line_cast5(c_string_rehook x2,
                                   int64_t _ln,
                                   int32_t _fn);
static string _command_line_cast6(c_string_rehook x2,
                                  int64_t _ln,
                                  int32_t _fn);
static string _command_line_cast7(c_string_rehook x2,
                                  int64_t _ln,
                                  int32_t _fn);
static uint64_t _command_line_cast8(c_string_rehook x2,
                                    int64_t _ln,
                                    int32_t _fn);
static uint64_t _command_line_cast9(c_string_rehook x2,
                                    int64_t _ln,
                                    int32_t _fn);
static void chpl_addModule(c_string_rehook moduleName,
                           c_fn_ptr_rehook deinitFun,
                           int64_t _ln,
                           int32_t _fn);
void chpl_deinitModules(void);
static void chpl__init_DefaultRectangular(int64_t _ln,
                                          int32_t _fn);
static void chpl__deinit_DefaultRectangular(int64_t _ln,
                                            int32_t _fn);
static DefaultDist _new4(int64_t _doms_containing_dist,
                         chpl_LocalSpinlock * _domsLock,
                         chpl_bool _free_when_no_doms,
                         int64_t pid,
                         int64_t _ln,
                         int32_t _fn);
static void chpl__auto_destroy_DefaultDist(DefaultDist this24,
                                           int64_t _ln,
                                           int32_t _fn);
static void init50(DefaultDist this24,
                   int64_t _doms_containing_dist,
                   chpl_LocalSpinlock * _domsLock,
                   chpl_bool _free_when_no_doms,
                   int64_t pid,
                   int64_t _ln,
                   int32_t _fn);
static DefaultRectangularDom_1_int64_t_one dsiNewRectangularDom(DefaultDist this24,
                                                                _tuple_1_star_range_int64_t_both_one * inds,
                                                                int64_t _ln,
                                                                int32_t _fn);
static DefaultDist dsiClone(DefaultDist this24);
static chpl_bool dsiTrackDomains2(DefaultDist this24);
static void chpl_defaultDistInitPrivate(int64_t _ln,
                                        int32_t _fn);
static void chpl__auto_destroy_DefaultRectangularDom(DefaultRectangularDom_1_int64_t_one this24,
                                                     int64_t _ln,
                                                     int32_t _fn);
static DefaultDist * chpl_get_DefaultRectangularDom_dist(DefaultRectangularDom_1_int64_t_one this24,
                                                         int64_t _ln,
                                                         int32_t _fn);
static _tuple_1_star_range_int64_t_both_one * chpl_get_DefaultRectangularDom_ranges(DefaultRectangularDom_1_int64_t_one this24,
                                                                                    int64_t _ln,
                                                                                    int32_t _fn);
static chpl_bool dsiLinksDistribution2(DefaultRectangularDom_1_int64_t_one this24);
static chpl_LocalSpinlock _new_default__domsLock(void);
static DefaultRectangularDom_1_int64_t_one _new5(DefaultDist dist,
                                                 int64_t _ln,
                                                 int32_t _fn);
static int64_t _new_default_pid(void);
static void init51(DefaultRectangularDom_1_int64_t_one this24,
                   DefaultDist dist,
                   int64_t _ln,
                   int32_t _fn);
static DefaultDist dsiMyDist2(DefaultRectangularDom_1_int64_t_one this24,
                              int64_t _ln,
                              int32_t _fn);
static void dsiGetIndices(DefaultRectangularDom_1_int64_t_one this24,
                          _tuple_1_star_range_int64_t_both_one * _retArg,
                          int64_t _ln,
                          int32_t _fn);
static void dsiSetIndices(DefaultRectangularDom_1_int64_t_one this24,
                          _tuple_1_star_range_int64_t_both_one * x2,
                          int64_t _ln,
                          int32_t _fn);
static void dsiAssignDomain(DefaultRectangularDom_1_int64_t_one this24,
                            _domain_DefaultRectangularDom_1_int64_t_one * rhs,
                            chpl_bool lhsPrivate,
                            int64_t _ln,
                            int32_t _fn);
static _ic_these_help_DefaultRectangularDom_1_int64_t_one _getIterator15(_ir_these_help_DefaultRectangularDom_1_int64_t_one * ir,
                                                                         int64_t _ln,
                                                                         int32_t _fn);
static void these_help(DefaultRectangularDom_1_int64_t_one this24,
                       _tuple_1_star_range_int64_t_both_one * block,
                       _ir_these_help_DefaultRectangularDom_1_int64_t_one * _retArg);
static _ic_these_DefaultRectangularDom_1_int64_t_one _getIterator16(_ir_these_DefaultRectangularDom_1_int64_t_one * ir,
                                                                    int64_t _ln,
                                                                    int32_t _fn);
static void these3(DefaultRectangularDom_1_int64_t_one this24,
                   int64_t tasksPerLocale,
                   chpl_bool ignoreRunning,
                   int64_t minIndicesPerTask,
                   _tuple_1_star_int64_t * offset2,
                   _ir_these_DefaultRectangularDom_1_int64_t_one * _retArg);
static int64_t these_default_tasksPerLocale(DefaultRectangularDom_1_int64_t_one this24);
static chpl_bool these_default_ignoreRunning(DefaultRectangularDom_1_int64_t_one this24);
static int64_t these_default_minIndicesPerTask(DefaultRectangularDom_1_int64_t_one this24);
static void these_default_offset(DefaultRectangularDom_1_int64_t_one this24,
                                 _tuple_1_star_int64_t * _retArg);
static int64_t these_default_tasksPerLocale2(DefaultRectangularDom_1_int64_t_one this24);
static chpl_bool these_default_ignoreRunning2(DefaultRectangularDom_1_int64_t_one this24);
static int64_t these_default_minIndicesPerTask2(DefaultRectangularDom_1_int64_t_one this24);
static void these_default_offset2(DefaultRectangularDom_1_int64_t_one this24,
                                  _tuple_1_star_int64_t * _retArg);
static void coforall_fn6(int64_t numChunks,
                         int64_t parDim,
                         DefaultRectangularDom_1_int64_t_one this24,
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
                         int64_t chunk,
                         Error * error_out,
                         DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t copy,
                         DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this25,
                         int64_t _ln,
                         int32_t _fn);
static void coforall_fn7(int64_t numChunks,
                         int64_t parDim,
                         DefaultRectangularDom_1_int64_t_one this24,
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
                         int64_t chunk,
                         Error * error_out,
                         DefaultRectangularArr_1_int64_t_one_int64_t_int64_t copy,
                         DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this25,
                         int64_t _ln,
                         int32_t _fn);
static void coforall_fn8(int64_t numChunks,
                         int64_t parDim,
                         DefaultRectangularDom_1_int64_t_one this24,
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
                         int64_t chunk,
                         DefaultRectangularArr_1_int64_t_one_locale_int64_t copy,
                         DefaultRectangularArr_1_int64_t_one_locale_int64_t this25,
                         int64_t _ln,
                         int32_t _fn);
static void coforall_fn9(int64_t numChunks,
                         int64_t parDim,
                         DefaultRectangularDom_1_int64_t_one this24,
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
                         int64_t chunk,
                         _domain_DefaultRectangularDom_1_int64_t_one * keep,
                         DefaultRectangularArr_1_int64_t_one_locale_int64_t this25,
                         int64_t _ln,
                         int32_t _fn);
static void wrapcoforall_fn6(_class_localscoforall_fn9 c);
static void wrapcoforall_fn7(_class_localscoforall_fn8 c);
static void wrapcoforall_fn8(_class_localscoforall_fn6 c);
static void wrapcoforall_fn9(_class_localscoforall_fn7 c);
static chpl_bool dsiMember(DefaultRectangularDom_1_int64_t_one this24,
                           _tuple_1_star_int64_t * ind,
                           int64_t _ln,
                           int32_t _fn);
static void dsiDims(DefaultRectangularDom_1_int64_t_one this24,
                    _tuple_1_star_range_int64_t_both_one * _retArg,
                    int64_t _ln,
                    int32_t _fn);
static range_int64_t_both_one dsiDim(DefaultRectangularDom_1_int64_t_one this24,
                                     int64_t d,
                                     int64_t _ln,
                                     int32_t _fn);
static range_int64_t_both_one dsiDim2(DefaultRectangularDom_1_int64_t_one this24,
                                      int64_t _ln,
                                      int32_t _fn);
static int64_t dsiNumIndices(DefaultRectangularDom_1_int64_t_one this24,
                             int64_t _ln,
                             int32_t _fn);
static int64_t dsiLow(DefaultRectangularDom_1_int64_t_one this24,
                      int64_t _ln,
                      int32_t _fn);
static int64_t dsiStride(DefaultRectangularDom_1_int64_t_one this24,
                         int64_t _ln,
                         int32_t _fn);
static DefaultRectangularArr_1_int64_t_one_locale_int64_t dsiBuildArray(DefaultRectangularDom_1_int64_t_one this24,
                                                                        int64_t _ln,
                                                                        int32_t _fn);
static void chpl__auto_destroy_DefaultRectangularArr(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                     int64_t _ln,
                                                     int32_t _fn);
static void chpl__auto_destroy_DefaultRectangularArr2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                      int64_t _ln,
                                                      int32_t _fn);
static void chpl__auto_destroy_DefaultRectangularArr3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                      int64_t _ln,
                                                      int32_t _fn);
static DefaultRectangularDom_1_int64_t_one * chpl_get_DefaultRectangularArr_dom(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                                                int64_t _ln,
                                                                                int32_t _fn);
static DefaultRectangularDom_1_int64_t_one * chpl_get_DefaultRectangularArr_dom2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                                                 int64_t _ln,
                                                                                 int32_t _fn);
static DefaultRectangularDom_1_int64_t_one * chpl_get_DefaultRectangularArr_dom3(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                                                 int64_t _ln,
                                                                                 int32_t _fn);
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_off(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                                  int64_t _ln,
                                                                  int32_t _fn);
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_off2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                                   int64_t _ln,
                                                                   int32_t _fn);
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_off3(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                                   int64_t _ln,
                                                                   int32_t _fn);
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_blk(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                                  int64_t _ln,
                                                                  int32_t _fn);
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_blk2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                                   int64_t _ln,
                                                                   int32_t _fn);
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_blk3(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                                   int64_t _ln,
                                                                   int32_t _fn);
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_sizesPerDim(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                                          int64_t _ln,
                                                                          int32_t _fn);
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_sizesPerDim2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                                           int64_t _ln,
                                                                           int32_t _fn);
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_sizesPerDim3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                                           int64_t _ln,
                                                                           int32_t _fn);
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_str(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                                  int64_t _ln,
                                                                  int32_t _fn);
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_str2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                                   int64_t _ln,
                                                                   int32_t _fn);
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_str3(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                                   int64_t _ln,
                                                                   int32_t _fn);
static int64_t * chpl_get_DefaultRectangularArr_factoredOffs(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                             int64_t _ln,
                                                             int32_t _fn);
static int64_t * chpl_get_DefaultRectangularArr_factoredOffs2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                              int64_t _ln,
                                                              int32_t _fn);
static int64_t * chpl_get_DefaultRectangularArr_factoredOffs3(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                              int64_t _ln,
                                                              int32_t _fn);
static _ddata_int64_t * chpl_get_DefaultRectangularArr_data(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                            int64_t _ln,
                                                            int32_t _fn);
static _ddata_uint64_t * chpl_get_DefaultRectangularArr_data2(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                              int64_t _ln,
                                                              int32_t _fn);
static _ddata_locale * chpl_get_DefaultRectangularArr_data3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                            int64_t _ln,
                                                            int32_t _fn);
static _ddata_int64_t * chpl_get_DefaultRectangularArr_shiftedData(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                                   int64_t _ln,
                                                                   int32_t _fn);
static _ddata_uint64_t * chpl_get_DefaultRectangularArr_shiftedData2(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                                     int64_t _ln,
                                                                     int32_t _fn);
static _ddata_locale * chpl_get_DefaultRectangularArr_shiftedData3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                                   int64_t _ln,
                                                                   int32_t _fn);
static c_ptr_void * chpl_get_DefaultRectangularArr_externFreeFunc(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                                  int64_t _ln,
                                                                  int32_t _fn);
static c_ptr_void * chpl_get_DefaultRectangularArr_externFreeFunc2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                                   int64_t _ln,
                                                                   int32_t _fn);
static c_ptr_void * chpl_get_DefaultRectangularArr_externFreeFunc3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                                   int64_t _ln,
                                                                   int32_t _fn);
static chpl_bool * chpl_get_DefaultRectangularArr_externArr(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                            int64_t _ln,
                                                            int32_t _fn);
static chpl_bool * chpl_get_DefaultRectangularArr_externArr2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                             int64_t _ln,
                                                             int32_t _fn);
static chpl_bool * chpl_get_DefaultRectangularArr_externArr3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                             int64_t _ln,
                                                             int32_t _fn);
static chpl_bool * chpl_get_DefaultRectangularArr__borrowed(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                            int64_t _ln,
                                                            int32_t _fn);
static chpl_bool * chpl_get_DefaultRectangularArr__borrowed2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                             int64_t _ln,
                                                             int32_t _fn);
static chpl_bool * chpl_get_DefaultRectangularArr__borrowed3(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                             int64_t _ln,
                                                             int32_t _fn);
static chpl_bool * chpl_get_DefaultRectangularArr_callPostAlloc(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                                int64_t _ln,
                                                                int32_t _fn);
static chpl_bool * chpl_get_DefaultRectangularArr_callPostAlloc2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                                 int64_t _ln,
                                                                 int32_t _fn);
static chpl_bool * chpl_get_DefaultRectangularArr_callPostAlloc3(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                                 int64_t _ln,
                                                                 int32_t _fn);
static chpl_bool * chpl_get_DefaultRectangularArr_deinitElts(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                             int64_t _ln,
                                                             int32_t _fn);
static chpl_bool * chpl_get_DefaultRectangularArr_deinitElts2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                              int64_t _ln,
                                                              int32_t _fn);
static chpl_bool * chpl_get_DefaultRectangularArr_deinitElts3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                              int64_t _ln,
                                                              int32_t _fn);
static DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t _new6(DefaultRectangularDom_1_int64_t_one dom,
                                                                  _ddata_uint64_t data,
                                                                  chpl_bool externArr,
                                                                  chpl_bool _borrowed,
                                                                  void * externFreeFunc,
                                                                  int64_t _ln,
                                                                  int32_t _fn);
static DefaultRectangularArr_1_int64_t_one_int64_t_int64_t _new7(DefaultRectangularDom_1_int64_t_one dom,
                                                                 _ddata_int64_t data,
                                                                 chpl_bool externArr,
                                                                 chpl_bool _borrowed,
                                                                 void * externFreeFunc,
                                                                 int64_t _ln,
                                                                 int32_t _fn);
static DefaultRectangularArr_1_int64_t_one_locale_int64_t _new8(DefaultRectangularDom_1_int64_t_one dom,
                                                                _ddata_locale data,
                                                                chpl_bool externArr,
                                                                chpl_bool _borrowed,
                                                                void * externFreeFunc,
                                                                int64_t _ln,
                                                                int32_t _fn);
static void init52(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                   DefaultRectangularDom_1_int64_t_one dom,
                   _ddata_locale data,
                   chpl_bool externArr,
                   chpl_bool _borrowed,
                   void * externFreeFunc,
                   int64_t _ln,
                   int32_t _fn);
static void init53(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                   DefaultRectangularDom_1_int64_t_one dom,
                   _ddata_int64_t data,
                   chpl_bool externArr,
                   chpl_bool _borrowed,
                   void * externFreeFunc,
                   int64_t _ln,
                   int32_t _fn);
static void init54(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                   DefaultRectangularDom_1_int64_t_one dom,
                   _ddata_uint64_t data,
                   chpl_bool externArr,
                   chpl_bool _borrowed,
                   void * externFreeFunc,
                   int64_t _ln,
                   int32_t _fn);
static _ddata_int64_t _new_default_data(int64_t _ln,
                                        int32_t _fn);
static _ddata_uint64_t _new_default_data2(int64_t _ln,
                                          int32_t _fn);
static _ddata_locale _new_default_data3(int64_t _ln,
                                        int32_t _fn);
static void * _new_default_externFreeFunc(int64_t _ln,
                                          int32_t _fn);
static void * _new_default_externFreeFunc2(int64_t _ln,
                                           int32_t _fn);
static void * _new_default_externFreeFunc3(int64_t _ln,
                                           int32_t _fn);
static DefaultRectangularDom_1_int64_t_one dsiGetBaseDom2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                                          int64_t _ln,
                                                          int32_t _fn);
static DefaultRectangularDom_1_int64_t_one dsiGetBaseDom3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                                          int64_t _ln,
                                                          int32_t _fn);
static DefaultRectangularDom_1_int64_t_one dsiGetBaseDom4(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                                          int64_t _ln,
                                                          int32_t _fn);
static void dsiElementInitializationComplete(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                             int64_t _ln,
                                             int32_t _fn);
static void dsiElementInitializationComplete2(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                              int64_t _ln,
                                              int32_t _fn);
static void dsiElementInitializationComplete3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                              int64_t _ln,
                                              int32_t _fn);
static void dsiDestroyArr2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                           chpl_bool deinitElts,
                           int64_t _ln,
                           int32_t _fn);
static void dsiDestroyArr3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                           chpl_bool deinitElts,
                           int64_t _ln,
                           int32_t _fn);
static void dsiDestroyArr4(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                           chpl_bool deinitElts,
                           int64_t _ln,
                           int32_t _fn);
static _ddata_uint64_t * theData(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                 int64_t _ln,
                                 int32_t _fn);
static _ddata_int64_t * theData2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                 int64_t _ln,
                                 int32_t _fn);
static _ddata_locale * theData3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                int64_t _ln,
                                int32_t _fn);
static _ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t _getIterator17(_ir_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t * ir,
                                                                                   int64_t _ln,
                                                                                   int32_t _fn);
static void these4(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                   int64_t tasksPerLocale,
                   chpl_bool ignoreRunning,
                   int64_t minIndicesPerTask,
                   _ir_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t * _retArg);
static int64_t these_default_tasksPerLocale3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24);
static chpl_bool these_default_ignoreRunning3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24);
static int64_t these_default_minIndicesPerTask3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24);
static void computeFactoredOffs(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                int64_t _ln,
                                int32_t _fn);
static void computeFactoredOffs2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                 int64_t _ln,
                                 int32_t _fn);
static void computeFactoredOffs3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                 int64_t _ln,
                                 int32_t _fn);
static void initShiftedData(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                            int64_t _ln,
                            int32_t _fn);
static void initShiftedData2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                             int64_t _ln,
                             int32_t _fn);
static void initShiftedData3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                             int64_t _ln,
                             int32_t _fn);
static void setupFieldsAndAllocate(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                                   int64_t _ln,
                                   int32_t _fn);
static void setupFieldsAndAllocate2(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                                    int64_t _ln,
                                    int32_t _fn);
static void setupFieldsAndAllocate3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                    int64_t _ln,
                                    int32_t _fn);
static int64_t getDataIndex(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                            int64_t _e0_ind,
                            int64_t _ln,
                            int32_t _fn);
static chpl_bool getDataIndex_default_getShifted(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24);
static int64_t getDataIndex2(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                             _tuple_1_star_int64_t * ind);
static int64_t getDataIndex3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                             _tuple_1_star_int64_t * ind);
static int64_t getDataIndex4(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                             _tuple_1_star_int64_t * ind);
static chpl_bool getDataIndex_default_getShifted2(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24);
static chpl_bool getDataIndex_default_getShifted3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24);
static chpl_bool getDataIndex_default_getShifted4(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24);
static uint64_t * dsiAccess(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                            int64_t _e0_ind,
                            int64_t _ln,
                            int32_t _fn);
static locale * dsiAccess2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                           int64_t _e0_ind,
                           int64_t _ln,
                           int32_t _fn);
static int64_t * dsiAccess3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                            int64_t _e0_ind,
                            int64_t _ln,
                            int32_t _fn);
static locale * dsiAccess4(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                           int64_t _e0_ind,
                           int64_t _ln,
                           int32_t _fn);
static int64_t * dsiAccess5(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                            int64_t _e0_ind,
                            int64_t _ln,
                            int32_t _fn);
static uint64_t * dsiAccess6(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                             int64_t _e0_ind,
                             int64_t _ln,
                             int32_t _fn);
static locale * dsiAccess7(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                           _tuple_1_star_int64_t * ind,
                           int64_t _ln,
                           int32_t _fn);
static int64_t * dsiAccess8(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                            _tuple_1_star_int64_t * ind,
                            int64_t _ln,
                            int32_t _fn);
static uint64_t * dsiAccess9(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                             _tuple_1_star_int64_t * ind,
                             int64_t _ln,
                             int32_t _fn);
static int64_t * dsiAccess10(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                             _tuple_1_star_int64_t * ind,
                             int64_t _ln,
                             int32_t _fn);
static uint64_t * dsiAccess11(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                              _tuple_1_star_int64_t * ind,
                              int64_t _ln,
                              int32_t _fn);
static locale * dsiAccess12(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                            _tuple_1_star_int64_t * ind,
                            int64_t _ln,
                            int32_t _fn);
static chpl_bool dsiBoundsCheck(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                                _tuple_1_star_int64_t * i,
                                int64_t _ln,
                                int32_t _fn);
static void dsiReallocate2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
                           _tuple_1_star_range_int64_t_both_one * bounds,
                           int64_t _ln,
                           int32_t _fn);
static void dsiReallocate3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
                           _tuple_1_star_range_int64_t_both_one * bounds,
                           int64_t _ln,
                           int32_t _fn);
static void dsiReallocate4(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
                           _tuple_1_star_range_int64_t_both_one * bounds,
                           int64_t _ln,
                           int32_t _fn);
static void dsiPostReallocate2(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24);
static void dsiPostReallocate3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24);
static void dsiPostReallocate4(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24);
static _ic_chpl__serialViewIter1D _getIterator18(_ir_chpl__serialViewIter1D * ir,
                                                 int64_t _ln,
                                                 int32_t _fn);
static void chpl__serialViewIter1D(DefaultRectangularArr_1_int64_t_one_locale_int64_t arr,
                                   range_int64_t_both_one viewRange,
                                   _ir_chpl__serialViewIter1D * _retArg);
static _ic_chpl__serialViewIter _getIterator19(_ir_chpl__serialViewIter * ir,
                                               int64_t _ln,
                                               int32_t _fn);
static void chpl__serialViewIter(DefaultRectangularArr_1_int64_t_one_locale_int64_t arr,
                                 DefaultRectangularDom_1_int64_t_one viewDom,
                                 _ir_chpl__serialViewIter * _retArg);
static string doiToString(DefaultRectangularDom_1_int64_t_one this24,
                          int64_t _ln,
                          int32_t _fn);
static void coforall_fn10(int64_t len,
                          int64_t numChunks,
                          range_int64_t_both_one this24,
                          chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
                          int64_t chunk,
                          DefaultRectangularArr_1_int64_t_one_locale_int64_t this25,
                          int64_t _ln,
                          int32_t _fn);
static void wrapcoforall_fn10(_class_localscoforall_fn10 c);
static void chpl__init_ExportWrappers(int64_t _ln,
                                      int32_t _fn);
static void _initDynamicEndCount(int64_t _ln,
                                 int32_t _fn);
static void _destroyDynamicEndCount(int64_t _ln,
                                    int32_t _fn);
void chpl_libraryModuleLevelSetup(void);
void chpl_libraryModuleLevelCleanup(void);
static void chpl__init_ExternalArray(int64_t _ln,
                                     int32_t _fn);
static c_ptr_void * chpl_get_chpl_opaque_array__instance(chpl_opaque_array * this24);
static chpl_bool * chpl_get_chpl_opaque_array__unowned(chpl_opaque_array * this24);
void cleanupOpaqueArray(chpl_opaque_array * arr);
static void chpl__init_LocaleModel(int64_t _ln,
                                   int32_t _fn);
int32_t chpl_localeModel_sublocToExecutionSubloc(int32_t full_subloc);
int32_t chpl_localeModel_sublocMerge(int32_t full_subloc,
                                     int32_t execution_subloc);
static void chpl__auto_destroy_LocaleModel(LocaleModel this24,
                                           int64_t _ln,
                                           int32_t _fn);
static string * chpl_get_LocaleModel_local_name(LocaleModel this24,
                                                int64_t _ln,
                                                int32_t _fn);
static LocaleModel _new9(locale * parent_loc,
                         int64_t _ln,
                         int32_t _fn);
static void init55(LocaleModel this24,
                   locale * parent_loc,
                   int64_t _ln,
                   int32_t _fn);
static int64_t _getChildCount4(LocaleModel this24,
                               int64_t _ln,
                               int32_t _fn);
static void _getChild3(LocaleModel this24,
                       int64_t idx,
                       locale * _retArg,
                       int64_t _ln,
                       int32_t _fn);
static void setup(LocaleModel this24,
                  int64_t _ln,
                  int32_t _fn);
static _domain_DefaultRectangularDom_1_int64_t_one * chpl_get_RootLocale_myLocaleSpace(RootLocale this24,
                                                                                       int64_t _ln,
                                                                                       int32_t _fn);
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * chpl_get_RootLocale_myLocales(RootLocale this24,
                                                                                                 int64_t _ln,
                                                                                                 int32_t _fn);
static RootLocale _new10(int64_t _ln,
                         int32_t _fn);
static void init56(RootLocale this24,
                   int64_t _ln,
                   int32_t _fn);
static void setup2(RootLocale this24,
                   int64_t _ln,
                   int32_t _fn);
static int64_t _getChildCount5(RootLocale this24,
                               int64_t _ln,
                               int32_t _fn);
static void _getChild4(RootLocale this24,
                       int64_t idx,
                       locale * _retArg,
                       int64_t _ln,
                       int32_t _fn);
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * getDefaultLocaleArray(RootLocale this24,
                                                                                         int64_t _ln,
                                                                                         int32_t _fn);
static void localeIDtoLocale2(RootLocale this24,
                              chpl_localeID_t * id3,
                              locale * _retArg,
                              int64_t _ln,
                              int32_t _fn);
static void deinit16(RootLocale this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit17(int64_t _ln,
                     int32_t _fn);
static void chpl__init_LocaleModelHelpFlat(int64_t _ln,
                                           int32_t _fn);
chpl_bool chpl_doDirectExecuteOn(chpl_localeID_t loc);
void chpl_executeOn(chpl_localeID_t loc,
                    int64_t fn,
                    chpl_comm_on_bundle_p args,
                    uint64_t args_size,
                    int64_t _ln,
                    int32_t _fn);
void chpl_executeOnFast(chpl_localeID_t loc,
                        int64_t fn,
                        chpl_comm_on_bundle_p args,
                        uint64_t args_size,
                        int64_t _ln,
                        int32_t _fn);
void chpl_executeOnNB(chpl_localeID_t loc,
                      int64_t fn,
                      chpl_comm_on_bundle_p args,
                      uint64_t args_size,
                      int64_t _ln,
                      int32_t _fn);
static void chpl__init_LocaleModelHelpMem(int64_t _ln,
                                          int32_t _fn);
static void * chpl_here_alloc(int64_t size5,
                              int16_t md,
                              int64_t _ln,
                              int32_t _fn);
static void * chpl_here_alloc2(uint64_t size5,
                               int16_t md,
                               int64_t _ln,
                               int32_t _fn);
static void * chpl_here_aligned_alloc(uint64_t alignment,
                                      uint64_t size5,
                                      int16_t md,
                                      int64_t _ln,
                                      int32_t _fn);
static void * chpl_here_calloc(uint64_t size5,
                               int64_t number,
                               int16_t md,
                               int64_t _ln,
                               int32_t _fn);
static void * chpl_here_realloc(void * ptr,
                                int64_t size5,
                                int16_t md,
                                int64_t _ln,
                                int32_t _fn);
static int64_t chpl_here_good_alloc_size(int64_t min_size,
                                         int64_t _ln,
                                         int32_t _fn);
static void chpl_here_free(void * ptr,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__init_LocaleModelHelpRuntime(int64_t _ln,
                                              int32_t _fn);
static void chpl___ASSIGN_62(chpl_localeID_t * _arg1,
                             chpl_localeID_t * _arg2);
static chpl_localeID_t chpl_buildLocaleID(int32_t node,
                                          int32_t subloc,
                                          int64_t _ln,
                                          int32_t _fn);
static int32_t chpl_nodeFromLocaleID(chpl_localeID_t loc,
                                     int64_t _ln,
                                     int32_t _fn);
static int32_t chpl_sublocFromLocaleID(chpl_localeID_t loc,
                                       int64_t _ln,
                                       int32_t _fn);
static void chpl_taskAddBegin(int64_t subloc_id,
                              int64_t fn,
                              chpl_task_bundle_p args,
                              uint64_t args_size,
                              int64_t _ln,
                              int32_t _fn);
static void chpl_taskAddCoStmt(int64_t subloc_id,
                               int64_t fn,
                               chpl_task_bundle_p args,
                               uint64_t args_size,
                               int64_t _ln,
                               int32_t _fn);
static void chpl__init_LocaleModelHelpSetup(int64_t _ln,
                                            int32_t _fn);
static void chpl__auto_destroy_chpl_root_locale_accum(chpl_root_locale_accum * this24);
static AtomicT_int64_t * chpl_get_chpl_root_locale_accum_nPUsPhysAcc(chpl_root_locale_accum * this24);
static AtomicT_int64_t * chpl_get_chpl_root_locale_accum_nPUsPhysAll(chpl_root_locale_accum * this24);
static AtomicT_int64_t * chpl_get_chpl_root_locale_accum_nPUsLogAcc(chpl_root_locale_accum * this24);
static AtomicT_int64_t * chpl_get_chpl_root_locale_accum_nPUsLogAll(chpl_root_locale_accum * this24);
static AtomicT_int64_t * chpl_get_chpl_root_locale_accum_maxTaskPar(chpl_root_locale_accum * this24);
static void init57(chpl_root_locale_accum * this24);
static void accum(chpl_root_locale_accum * this24,
                  locale * loc,
                  int64_t _ln,
                  int32_t _fn);
static void setRootLocaleValues(chpl_root_locale_accum * this24,
                                RootLocale dst,
                                int64_t _ln,
                                int32_t _fn);
static void helpSetupRootLocaleFlat(RootLocale dst,
                                    int64_t _ln,
                                    int32_t _fn);
static chpl_bool localSpawn(void);
static string getNodeName(int64_t _ln,
                          int32_t _fn);
static void helpSetupLocaleFlat(LocaleModel dst,
                                string * local_name,
                                int64_t _ln,
                                int32_t _fn);
static void coforall_fn11(chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
                          int64_t locIdx,
                          RootLocale dst,
                          chpl_root_locale_accum * root_accum,
                          int64_t _ln,
                          int32_t _fn);
static void wrapcoforall_fn11(_class_localscoforall_fn11 c);
static void coforall_fn12(chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
                          int64_t locIdx,
                          RootLocale dst,
                          int64_t _ln,
                          int32_t _fn);
static void wrapcoforall_fn12(_class_localscoforall_fn12 c);
static void chpl__init_LocalesArray(int64_t _ln,
                                    int32_t _fn);
static void chpl__deinit_LocalesArray(int64_t _ln,
                                      int32_t _fn);
static void chpl__init_MemConsistency(int64_t _ln,
                                      int32_t _fn);
static memory_order c_memory_order(void);
static memory_order c_memory_order2(void);
static memory_order c_memory_order3(void);
static memory_order c_memory_order4(void);
static void chpl_rmem_consist_maybe_release2(int64_t _ln,
                                             int32_t _fn);
static void chpl_rmem_consist_maybe_release3(int64_t _ln,
                                             int32_t _fn);
static void chpl_rmem_consist_maybe_release4(int64_t _ln,
                                             int32_t _fn);
static void chpl_rmem_consist_maybe_release5(int64_t _ln,
                                             int32_t _fn);
static void chpl_rmem_consist_maybe_acquire2(int64_t _ln,
                                             int32_t _fn);
static void chpl_rmem_consist_maybe_acquire3(int64_t _ln,
                                             int32_t _fn);
static void chpl_rmem_consist_maybe_acquire4(int64_t _ln,
                                             int32_t _fn);
static void chpl_rmem_consist_maybe_acquire5(int64_t _ln,
                                             int32_t _fn);
static void chpl__init_MemTracking(int64_t _ln,
                                   int32_t _fn);
static void chpl__deinit_MemTracking(int64_t _ln,
                                     int32_t _fn);
void chpl_memTracking_returnConfigVals(chpl_bool * ret_memTrack,
                                       chpl_bool * ret_memStats,
                                       chpl_bool * ret_memLeaksByType,
                                       c_ptrConst_int8_t * ret_memLeaksByDesc,
                                       chpl_bool * ret_memLeaks,
                                       uint64_t * ret_memMax,
                                       uint64_t * ret_memThreshold,
                                       c_ptrConst_int8_t * ret_memLog,
                                       c_ptrConst_int8_t * ret_memLeaksLog);
static void chpl__init_NVStringFactory(int64_t _ln,
                                       int32_t _fn);
static string chpl_createStringWithBorrowedBufferNV(uint8_t * x2,
                                                    int64_t length,
                                                    int64_t size5,
                                                    int64_t numCodepoints2,
                                                    int64_t _ln,
                                                    int32_t _fn);
static string chpl_createStringWithOwnedBufferNV(uint8_t * x2,
                                                 int64_t length,
                                                 int64_t size5,
                                                 int64_t numCodepoints2,
                                                 int64_t _ln,
                                                 int32_t _fn);
static void chpl__init_OwnedObject(int64_t _ln,
                                   int32_t _fn);
static ChildProcessError * chpl_get__owned_chpl_p(_owned_ChildProcessError * this24);
static FileExistsError * chpl_get__owned_chpl_p10(_owned_FileExistsError * this24);
static IllegalArgumentError * chpl_get__owned_chpl_p11(_owned_IllegalArgumentError * this24);
static CodepointSplitError * chpl_get__owned_chpl_p12(_owned_CodepointSplitError * this24);
static FileNotFoundError * chpl_get__owned_chpl_p13(_owned_FileNotFoundError * this24);
static InterruptedError * chpl_get__owned_chpl_p14(_owned_InterruptedError * this24);
static Remote_R * chpl_get__owned_chpl_p15(_owned_Remote_R * this24);
static ProcessLookupError * chpl_get__owned_chpl_p16(_owned_ProcessLookupError * this24);
static IoError * chpl_get__owned_chpl_p17(_owned_IoError * this24);
static NotADirectoryError * chpl_get__owned_chpl_p18(_owned_NotADirectoryError * this24);
static IsADirectoryError * chpl_get__owned_chpl_p19(_owned_IsADirectoryError * this24);
static chpl___RemoteVarContainer_R * chpl_get__owned_chpl_p2(_owned__RemoteVarContainer_R2 * this24);
static NilClassError * chpl_get__owned_chpl_p20(_owned_NilClassError * this24);
static PermissionError * chpl_get__owned_chpl_p21(_owned_PermissionError * this24);
static SystemError * chpl_get__owned_chpl_p22(_owned_SystemError * this24);
static BadFormatError * chpl_get__owned_chpl_p23(_owned_BadFormatError * this24);
static DecodeError * chpl_get__owned_chpl_p24(_owned_DecodeError * this24);
static UnexpectedEofError * chpl_get__owned_chpl_p25(_owned_UnexpectedEofError * this24);
static EofError * chpl_get__owned_chpl_p26(_owned_EofError * this24);
static TimeoutError * chpl_get__owned_chpl_p27(_owned_TimeoutError * this24);
static IllegalArgumentError * chpl_get__owned_chpl_p28(_owned_IllegalArgumentError2 * this24);
static chpl___RemoteVarContainer_R * chpl_get__owned_chpl_p29(_owned__RemoteVarContainer_R * this24);
static BlockingIoError * chpl_get__owned_chpl_p3(_owned_BlockingIoError * this24);
static Error * chpl_get__owned_chpl_p30(_owned_Error * this24);
static Error * chpl_get__owned_chpl_p4(_owned_Error2 * this24);
static BrokenPipeError * chpl_get__owned_chpl_p5(_owned_BrokenPipeError * this24);
static TaskErrors * chpl_get__owned_chpl_p6(_owned_TaskErrors * this24);
static ConnectionAbortedError * chpl_get__owned_chpl_p7(_owned_ConnectionAbortedError * this24);
static ConnectionRefusedError * chpl_get__owned_chpl_p8(_owned_ConnectionRefusedError * this24);
static ConnectionResetError * chpl_get__owned_chpl_p9(_owned_ConnectionResetError * this24);
static Remote_R chpl_forwarding_expr13(_owned_Remote_R * this24,
                                       int64_t _ln,
                                       int32_t _fn);
static void init58(_owned_IllegalArgumentError2 * this24,
                   int64_t _ln,
                   int32_t _fn);
static void init59(_owned_Error2 * this24,
                   int64_t _ln,
                   int32_t _fn);
static void init60(_owned__RemoteVarContainer_R2 * this24,
                   int64_t _ln,
                   int32_t _fn);
static void init61(_owned_NilClassError * this24,
                   NilClassError p);
static void init62(_owned_IoError * this24,
                   IoError p);
static void init63(_owned_BrokenPipeError * this24,
                   BrokenPipeError p);
static void init64(_owned_Remote_R * this24,
                   Remote_R p);
static void init65(_owned_UnexpectedEofError * this24,
                   UnexpectedEofError p);
static void init66(_owned_ConnectionResetError * this24,
                   ConnectionResetError p);
static void init67(_owned_TaskErrors * this24,
                   TaskErrors p);
static void init68(_owned_FileExistsError * this24,
                   FileExistsError p);
static void init69(_owned__RemoteVarContainer_R * this24,
                   chpl___RemoteVarContainer_R p);
static void init70(_owned_Error * this24,
                   Error p);
static void init71(_owned_Error2 * this24,
                   Error p);
static void init72(_owned_FileNotFoundError * this24,
                   FileNotFoundError p);
static void init73(_owned_InterruptedError * this24,
                   InterruptedError p);
static void init74(_owned_SystemError * this24,
                   SystemError p);
static void init75(_owned_IllegalArgumentError * this24,
                   IllegalArgumentError p);
static void init76(_owned_TimeoutError * this24,
                   TimeoutError p);
static void init77(_owned_BadFormatError * this24,
                   BadFormatError p);
static void init78(_owned_IsADirectoryError * this24,
                   IsADirectoryError p);
static void init79(_owned_ConnectionAbortedError * this24,
                   ConnectionAbortedError p);
static void init80(_owned_NotADirectoryError * this24,
                   NotADirectoryError p);
static void init81(_owned_DecodeError * this24,
                   DecodeError p);
static void init82(_owned_EofError * this24,
                   EofError p);
static void init83(_owned_ConnectionRefusedError * this24,
                   ConnectionRefusedError p);
static void init84(_owned_PermissionError * this24,
                   PermissionError p);
static void init85(_owned_CodepointSplitError * this24,
                   CodepointSplitError p);
static void init86(_owned_BlockingIoError * this24,
                   BlockingIoError p);
static void init87(_owned_ProcessLookupError * this24,
                   ProcessLookupError p);
static void init88(_owned_ChildProcessError * this24,
                   ChildProcessError p);
static void init_ASSIGN_10(_owned_SystemError * this24,
                           _owned_ConnectionResetError * src,
                           int64_t _ln,
                           int32_t _fn);
static void init_ASSIGN_11(_owned_SystemError * this24,
                           _owned_IsADirectoryError * src,
                           int64_t _ln,
                           int32_t _fn);
static void init_ASSIGN_12(_owned_SystemError * this24,
                           _owned_TimeoutError * src,
                           int64_t _ln,
                           int32_t _fn);
static void init_ASSIGN_13(_owned_Error * this24,
                           _owned_UnexpectedEofError * src,
                           int64_t _ln,
                           int32_t _fn);
static void init_ASSIGN_14(_owned_SystemError * this24,
                           _owned_ConnectionRefusedError * src,
                           int64_t _ln,
                           int32_t _fn);
static void init_ASSIGN_15(_owned_SystemError * this24,
                           _owned_BlockingIoError * src,
                           int64_t _ln,
                           int32_t _fn);
static void init_ASSIGN_16(_owned_SystemError * this24,
                           _owned_PermissionError * src,
                           int64_t _ln,
                           int32_t _fn);
static void init_ASSIGN_17(_owned_SystemError * this24,
                           _owned_ConnectionAbortedError * src,
                           int64_t _ln,
                           int32_t _fn);
static void init_ASSIGN_18(_owned_SystemError * this24,
                           _owned_InterruptedError * src,
                           int64_t _ln,
                           int32_t _fn);
static void init_ASSIGN_19(_owned_Error * this24,
                           _owned_EofError * src,
                           int64_t _ln,
                           int32_t _fn);
static void init_ASSIGN_2(_owned_Error * this24,
                          _owned_BadFormatError * src,
                          int64_t _ln,
                          int32_t _fn);
static void init_ASSIGN_20(_owned_SystemError * this24,
                           _owned_ChildProcessError * src,
                           int64_t _ln,
                           int32_t _fn);
static void init_ASSIGN_21(_owned_SystemError * this24,
                           _owned_FileExistsError * src,
                           int64_t _ln,
                           int32_t _fn);
static void init_ASSIGN_3(_owned_SystemError * this24,
                          _owned_FileNotFoundError * src,
                          int64_t _ln,
                          int32_t _fn);
static void init_ASSIGN_4(_owned_SystemError * this24,
                          _owned_BrokenPipeError * src,
                          int64_t _ln,
                          int32_t _fn);
static void init_ASSIGN_5(_owned_Error * this24,
                          _owned_SystemError * src,
                          int64_t _ln,
                          int32_t _fn);
static void init_ASSIGN_6(_owned_SystemError * this24,
                          _owned_ProcessLookupError * src,
                          int64_t _ln,
                          int32_t _fn);
static void init_ASSIGN_7(_owned_SystemError * this24,
                          _owned_NotADirectoryError * src,
                          int64_t _ln,
                          int32_t _fn);
static void init_ASSIGN_8(_owned_SystemError * this24,
                          _owned_IoError * src,
                          int64_t _ln,
                          int32_t _fn);
static void init_ASSIGN_9(_owned_IllegalArgumentError2 * this24,
                          _owned_IllegalArgumentError * src,
                          int64_t _ln,
                          int32_t _fn);
static void init_ASSIGN_22(_owned_IllegalArgumentError2 * this24,
                           _nilType src,
                           int64_t _ln,
                           int32_t _fn);
static _owned_Error adopt(Error obj);
static BrokenPipeError release(_owned_BrokenPipeError * obj,
                               int64_t _ln,
                               int32_t _fn);
static InterruptedError release10(_owned_InterruptedError * obj,
                                  int64_t _ln,
                                  int32_t _fn);
static BlockingIoError release11(_owned_BlockingIoError * obj,
                                 int64_t _ln,
                                 int32_t _fn);
static EofError release12(_owned_EofError * obj,
                          int64_t _ln,
                          int32_t _fn);
static FileNotFoundError release13(_owned_FileNotFoundError * obj,
                                   int64_t _ln,
                                   int32_t _fn);
static ConnectionRefusedError release14(_owned_ConnectionRefusedError * obj,
                                        int64_t _ln,
                                        int32_t _fn);
static IoError release15(_owned_IoError * obj,
                         int64_t _ln,
                         int32_t _fn);
static UnexpectedEofError release16(_owned_UnexpectedEofError * obj,
                                    int64_t _ln,
                                    int32_t _fn);
static ConnectionResetError release17(_owned_ConnectionResetError * obj,
                                      int64_t _ln,
                                      int32_t _fn);
static chpl___RemoteVarContainer_R release18(_owned__RemoteVarContainer_R * obj,
                                             int64_t _ln,
                                             int32_t _fn);
static ChildProcessError release19(_owned_ChildProcessError * obj,
                                   int64_t _ln,
                                   int32_t _fn);
static IllegalArgumentError release2(_owned_IllegalArgumentError * obj,
                                     int64_t _ln,
                                     int32_t _fn);
static FileExistsError release20(_owned_FileExistsError * obj,
                                 int64_t _ln,
                                 int32_t _fn);
static TimeoutError release21(_owned_TimeoutError * obj,
                              int64_t _ln,
                              int32_t _fn);
static BadFormatError release22(_owned_BadFormatError * obj,
                                int64_t _ln,
                                int32_t _fn);
static SystemError release23(_owned_SystemError * obj,
                             int64_t _ln,
                             int32_t _fn);
static Error release3(_owned_Error2 * obj,
                      int64_t _ln,
                      int32_t _fn);
static PermissionError release4(_owned_PermissionError * obj,
                                int64_t _ln,
                                int32_t _fn);
static ConnectionAbortedError release5(_owned_ConnectionAbortedError * obj,
                                       int64_t _ln,
                                       int32_t _fn);
static Error release6(_owned_Error * obj,
                      int64_t _ln,
                      int32_t _fn);
static NotADirectoryError release7(_owned_NotADirectoryError * obj,
                                   int64_t _ln,
                                   int32_t _fn);
static IsADirectoryError release8(_owned_IsADirectoryError * obj,
                                  int64_t _ln,
                                  int32_t _fn);
static ProcessLookupError release9(_owned_ProcessLookupError * obj,
                                   int64_t _ln,
                                   int32_t _fn);
static void deinit18(_owned_FileExistsError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit19(_owned_NilClassError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit20(_owned_SystemError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit21(_owned_IsADirectoryError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit22(_owned_FileNotFoundError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit23(_owned_BlockingIoError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit24(_owned_PermissionError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit25(_owned_TimeoutError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit26(_owned_IoError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit27(_owned_ConnectionResetError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit28(_owned_InterruptedError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit29(_owned_NotADirectoryError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit30(_owned_TaskErrors * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit31(_owned_EofError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit32(_owned_ConnectionAbortedError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit33(_owned_IllegalArgumentError2 * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit34(_owned_DecodeError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit35(_owned_Error * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit36(_owned_BadFormatError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit37(_owned_UnexpectedEofError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit38(_owned_IllegalArgumentError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit39(_owned_ConnectionRefusedError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit40(_owned__RemoteVarContainer_R * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit41(_owned_Remote_R * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit42(_owned_ProcessLookupError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit43(_owned__RemoteVarContainer_R2 * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit44(_owned_CodepointSplitError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit45(_owned_Error2 * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit46(_owned_ChildProcessError * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit47(_owned_BrokenPipeError * this24,
                     int64_t _ln,
                     int32_t _fn);
static Remote_R borrow(_owned_Remote_R * this24,
                       int64_t _ln,
                       int32_t _fn);
static Error borrow2(_owned_Error2 * this24);
static chpl___RemoteVarContainer_R borrow3(_owned__RemoteVarContainer_R * this24,
                                           int64_t _ln,
                                           int32_t _fn);
static IllegalArgumentError borrow4(_owned_IllegalArgumentError2 * this24);
static void chpl___ASSIGN_63(_owned_Error2 * lhs,
                             _owned_Error * rhs,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_64(_owned_Error2 * lhs,
                             _owned_Error2 * rhs,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_65(_owned__RemoteVarContainer_R2 * lhs,
                             _owned__RemoteVarContainer_R * rhs,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_66(_owned_Error2 * lhs,
                             _nilType rhs,
                             int64_t _ln,
                             int32_t _fn);
static void chpl__autoDestroy69(_owned_UnexpectedEofError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy70(_owned_FileNotFoundError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy71(_owned_BrokenPipeError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy72(_owned_Remote_R * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy73(_owned_IsADirectoryError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy74(_owned_ChildProcessError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy75(_owned_NilClassError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy76(_owned_ConnectionResetError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy77(_owned_ProcessLookupError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy78(_owned_TimeoutError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy79(_owned_IoError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy80(_owned__RemoteVarContainer_R2 * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy81(_owned_PermissionError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy82(_owned_BadFormatError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy83(_owned_SystemError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy84(_owned_ConnectionRefusedError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy85(_owned_Error * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy86(_owned_BlockingIoError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy87(_owned_IllegalArgumentError2 * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy88(_owned__RemoteVarContainer_R * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy89(_owned_IllegalArgumentError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy90(_owned_Error2 * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy91(_owned_CodepointSplitError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy92(_owned_FileExistsError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy93(_owned_NotADirectoryError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy94(_owned_DecodeError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy95(_owned_TaskErrors * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy96(_owned_InterruptedError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy97(_owned_EofError * x2,
                                int64_t _ln,
                                int32_t _fn);
static void chpl__autoDestroy98(_owned_ConnectionAbortedError * x2,
                                int64_t _ln,
                                int32_t _fn);
static _owned_Error2 chpl___COLON_32(_owned_Error * x2,
                                     int64_t _ln,
                                     int32_t _fn);
static _owned_Error chpl___COLON_33(_owned_SystemError * x2,
                                    int64_t _ln,
                                    int32_t _fn);
static _owned_Error chpl___COLON_34(_owned_NilClassError * x2,
                                    int64_t _ln,
                                    int32_t _fn);
static _owned_Error chpl___COLON_35(_owned_IllegalArgumentError * x2,
                                    int64_t _ln,
                                    int32_t _fn);
static _owned_Error chpl___COLON_36(_owned_CodepointSplitError * x2,
                                    int64_t _ln,
                                    int32_t _fn);
static _owned_Error chpl___COLON_37(_owned_DecodeError * x2,
                                    int64_t _ln,
                                    int32_t _fn);
static _owned_Error chpl___COLON_38(_owned_TaskErrors * x2,
                                    int64_t _ln,
                                    int32_t _fn);
static _owned__RemoteVarContainer_R chpl___COLON_39(_owned__RemoteVarContainer_R2 * x2,
                                                    Error * error_out,
                                                    int64_t _ln,
                                                    int32_t _fn);
static _owned_Error2 chpl___COLON_40(_nilType x2,
                                     int64_t _ln,
                                     int32_t _fn);
static Error postfix_EXCLAMATION_37(_owned_Error2 * x2,
                                    int64_t _ln,
                                    int32_t _fn);
void chpl__init_PrintModuleInitOrder(int64_t _ln,
                                     int32_t _fn);
static void printModuleInit(c_string_rehook s1,
                            c_string_rehook s2,
                            int64_t len,
                            int64_t _ln,
                            int32_t _fn);
static void initPrint(void);
static void chpl__init_SharedObject(int64_t _ln,
                                    int32_t _fn);
static void chpl__auto_destroy_ReferenceCount(ReferenceCount this24,
                                              int64_t _ln,
                                              int32_t _fn);
static AtomicT_int64_t * chpl_get_ReferenceCount_strongCount(ReferenceCount this24,
                                                             int64_t _ln,
                                                             int32_t _fn);
static AtomicT_int64_t * chpl_get_ReferenceCount_totalCount(ReferenceCount this24,
                                                            int64_t _ln,
                                                            int32_t _fn);
static ReferenceCount _new11(int64_t _ln,
                             int32_t _fn);
static void init89(ReferenceCount this24,
                   int64_t _ln,
                   int32_t _fn);
static void retain(ReferenceCount this24,
                   int64_t _ln,
                   int32_t _fn);
static int64_t releaseStrong(ReferenceCount this24,
                             int64_t _ln,
                             int32_t _fn);
static int64_t releaseTotal(ReferenceCount this24,
                            int64_t _ln,
                            int32_t _fn);
static _serializeWrapper_defaultDeserializer * chpl_get__shared_chpl_p(_shared__serializeWrapper_defaultDeserializer * this24);
static _serializeWrapper_defaultSerializer * chpl_get__shared_chpl_p2(_shared__serializeWrapper_defaultSerializer2 * this24);
static _serializeWrapper_defaultDeserializer * chpl_get__shared_chpl_p3(_shared__serializeWrapper_defaultDeserializer2 * this24);
static _serializeWrapper_defaultSerializer * chpl_get__shared_chpl_p4(_shared__serializeWrapper_defaultSerializer * this24);
static ReferenceCount * chpl_get__shared_chpl_pn(_shared__serializeWrapper_defaultSerializer * this24);
static ReferenceCount * chpl_get__shared_chpl_pn2(_shared__serializeWrapper_defaultDeserializer * this24);
static ReferenceCount * chpl_get__shared_chpl_pn3(_shared__serializeWrapper_defaultDeserializer2 * this24);
static ReferenceCount * chpl_get__shared_chpl_pn4(_shared__serializeWrapper_defaultSerializer2 * this24);
static void init90(_shared__serializeWrapper_defaultDeserializer2 * this24,
                   int64_t _ln,
                   int32_t _fn);
static void init91(_shared__serializeWrapper_defaultSerializer * this24,
                   int64_t _ln,
                   int32_t _fn);
static void init92(_shared__serializeWrapper_defaultDeserializer * this24,
                   _serializeWrapper_defaultDeserializer p,
                   int64_t _ln,
                   int32_t _fn);
static void init93(_shared__serializeWrapper_defaultSerializer2 * this24,
                   _serializeWrapper_defaultSerializer p,
                   int64_t _ln,
                   int32_t _fn);
static void init_ASSIGN_23(_shared__serializeWrapper_defaultSerializer * this24,
                           _shared__serializeWrapper_defaultSerializer2 * src,
                           int64_t _ln,
                           int32_t _fn);
static void doClear(_shared__serializeWrapper_defaultSerializer * this24,
                    int64_t _ln,
                    int32_t _fn);
static void doClear2(_shared__serializeWrapper_defaultDeserializer2 * this24,
                     int64_t _ln,
                     int32_t _fn);
static void doClear3(_shared__serializeWrapper_defaultSerializer2 * this24,
                     int64_t _ln,
                     int32_t _fn);
static void doClear4(_shared__serializeWrapper_defaultDeserializer * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit48(_shared__serializeWrapper_defaultDeserializer2 * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit49(_shared__serializeWrapper_defaultSerializer2 * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit50(_shared__serializeWrapper_defaultSerializer * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit51(_shared__serializeWrapper_defaultDeserializer * this24,
                     int64_t _ln,
                     int32_t _fn);
static _serializeWrapper_defaultSerializer borrow5(_shared__serializeWrapper_defaultSerializer * this24);
static _serializeWrapper_defaultDeserializer borrow6(_shared__serializeWrapper_defaultDeserializer2 * this24);
static void chpl___ASSIGN_67(_shared__serializeWrapper_defaultSerializer * lhs,
                             _shared__serializeWrapper_defaultSerializer2 * rhs,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_68(_shared__serializeWrapper_defaultDeserializer2 * lhs,
                             _shared__serializeWrapper_defaultDeserializer * rhs,
                             int64_t _ln,
                             int32_t _fn);
static void chpl__autoDestroy100(_shared__serializeWrapper_defaultSerializer2 * x2,
                                 int64_t _ln,
                                 int32_t _fn);
static void chpl__autoDestroy99(_shared__serializeWrapper_defaultDeserializer * x2,
                                int64_t _ln,
                                int32_t _fn);
static _serializeWrapper_defaultDeserializer postfix_EXCLAMATION_38(_shared__serializeWrapper_defaultDeserializer2 * x2,
                                                                    int64_t _ln,
                                                                    int32_t _fn);
static _serializeWrapper_defaultSerializer postfix_EXCLAMATION_39(_shared__serializeWrapper_defaultSerializer * x2,
                                                                  int64_t _ln,
                                                                  int32_t _fn);
static void chpl__init_String(int64_t _ln,
                              int32_t _fn);
static void chpl__auto_destroy_byteIndex(byteIndex * this24);
static int64_t * chpl_get_byteIndex__bindex(byteIndex * this24);
static void init94(byteIndex * this24);
static void init_ASSIGN_24(byteIndex * this24,
                           int64_t i);
static string chpl___COLON_41(byteIndex * val,
                              int64_t _ln,
                              int32_t _fn);
static void chpl__auto_destroy_codepointIndex(codepointIndex * this24);
static int64_t * chpl_get_codepointIndex__cpindex(codepointIndex * this24);
static void init95(codepointIndex * this24);
static range_byteIndex_both_one chpl_build_bounded_range4(byteIndex * low3,
                                                          byteIndex * high2);
static range_byteIndex_low_one chpl_build_low_bounded_range2(byteIndex * low3);
static range_byteIndex_high_one chpl_build_high_bounded_range(byteIndex * high2);
static int64_t chpl__idxToInt2(byteIndex * i);
static byteIndex chpl__intToIdx2(int64_t i);
static byteIndex chpl___PLUS_8(byteIndex * x2,
                               int64_t y);
static byteIndex chpl___HYPHEN_11(byteIndex * x2,
                                  int64_t y);
static chpl_bool chpl___LESS_5(codepointIndex * x2,
                               int64_t y);
static chpl_bool chpl___GREATER__ASSIGN_8(codepointIndex * x2,
                                          int64_t y);
static chpl_bool chpl___EQUALS_21(byteIndex * x2,
                                  int64_t y);
static chpl_bool chpl___EQUALS_22(int64_t x2,
                                  codepointIndex * y);
static int64_t validateEncoding(uint8_t * buf,
                                int64_t len,
                                Error * error_out,
                                int64_t _ln,
                                int32_t _fn);
static string createBorrowingBuffer3(string * x2,
                                     int64_t _ln,
                                     int32_t _fn);
static string chpl_createStringWithLiteral(c_string_rehook buffer,
                                           int64_t offset2,
                                           c_string_rehook x2,
                                           int64_t length,
                                           int64_t numCodepoints2,
                                           int64_t _ln,
                                           int32_t _fn);
static string createAdoptingBuffer(c_string_rehook x2,
                                   int64_t length,
                                   Error * error_out,
                                   int64_t _ln,
                                   int32_t _fn);
static int64_t createAdoptingBuffer_default_length(c_string_rehook x2,
                                                   Error * error_out,
                                                   int64_t _ln,
                                                   int32_t _fn);
static string createAdoptingBuffer2(uint8_t * x2,
                                    int64_t length,
                                    int64_t size5,
                                    Error * error_out,
                                    int64_t _ln,
                                    int32_t _fn);
static string createCopyingBuffer(c_string_rehook x2,
                                  int64_t length,
                                  decodePolicy policy,
                                  Error * error_out,
                                  int64_t _ln,
                                  int32_t _fn);
static int64_t createCopyingBuffer_default_length(c_string_rehook x2,
                                                  Error * error_out,
                                                  int64_t _ln,
                                                  int32_t _fn);
static string createCopyingBuffer2(uint8_t * x2,
                                   int64_t length,
                                   int64_t size5,
                                   decodePolicy policy,
                                   Error * error_out,
                                   int64_t _ln,
                                   int32_t _fn);
static int64_t * chpl_get_string_buffLen(string * this24);
static int64_t * chpl_get_string_buffSize(string * this24);
static int64_t * chpl_get_string_cachedNumCodepoints(string * this24);
static c_ptr_uint8_t * chpl_get_string_buff(string * this24);
static chpl_bool * chpl_get_string_isOwned(string * this24);
static chpl_bool * chpl_get_string_hasEscapes(string * this24);
static int32_t * chpl_get_string_locale_id(string * this24);
static void init96(string * this24,
                   int64_t _ln,
                   int32_t _fn);
static void init_ASSIGN_25(string * this24,
                           string * s,
                           int64_t _ln,
                           int32_t _fn);
static void deinit52(string * this24,
                     int64_t _ln,
                     int32_t _fn);
static chpl_bool isASCII(string * this24);
static range_int64_t_both_one byteIndices(string * this24);
static _tuple_3_int32_t_byteIndex_int64_t _cpIndexLenHelpNoAdjustment(string * this24,
                                                                      int64_t * start,
                                                                      int64_t _ln,
                                                                      int32_t _fn);
static void _cpIndexLen(string * this24,
                        byteIndex * start,
                        _ir__cpIndexLen__ref_string * _retArg);
static byteIndex _cpIndexLen_default_start(string * this24);
static _ic__cpIndexLen__ref_string _getIterator20(_ir__cpIndexLen__ref_string * ir,
                                                  int64_t _ln,
                                                  int32_t _fn);
static _ic__indexLen__ref_string _getIterator21(_ir__indexLen__ref_string * ir,
                                                int64_t _ln,
                                                int32_t _fn);
static void _indexLen(string * this24,
                      byteIndex * start,
                      _ir__indexLen__ref_string * _retArg);
static byteIndex _indexLen_default_start(string * this24);
static int64_t doSearchUTF8(string * this24,
                            string * pattern,
                            range_byteIndex_low_one indices3,
                            int64_t _ln,
                            int32_t _fn);
static int64_t size4(string * this24);
static range_int64_t_both_one indices2(string * this24);
static int64_t numBytes(string * this24);
static int64_t numCodepoints(string * this24);
static string localize(string * this24,
                       int64_t _ln,
                       int32_t _fn);
static _ic_chpl_bytes__ref_string _getIterator22(_ir_chpl_bytes__ref_string * ir,
                                                 int64_t _ln,
                                                 int32_t _fn);
static void advance2(_ic_chpl_bytes__ref_string this24,
                     int64_t _ln,
                     int32_t _fn);
static void chpl_bytes(string * this24,
                       _ir_chpl_bytes__ref_string * _retArg);
static uint8_t getValue2(_ic_chpl_bytes__ref_string this24,
                         int64_t _ln,
                         int32_t _fn);
static int64_t hasMore2(_ic_chpl_bytes__ref_string this24,
                        int64_t _ln,
                        int32_t _fn);
static void incr2(_ic_chpl_bytes__ref_string this24,
                  int64_t _ln,
                  int32_t _fn);
static void init97(_ic_chpl_bytes__ref_string this24,
                   int64_t _ln,
                   int32_t _fn);
static void zip12(_ic_chpl_bytes__ref_string this24,
                  int64_t _ln,
                  int32_t _fn);
static void zip22(_ic_chpl_bytes__ref_string this24,
                  int64_t _ln,
                  int32_t _fn);
static void zip32(_ic_chpl_bytes__ref_string this24);
static void zip42(_ic_chpl_bytes__ref_string this24,
                  int64_t _ln,
                  int32_t _fn);
static _ic_codepoints__ref_string _getIterator23(_ir_codepoints__ref_string * ir,
                                                 int64_t _ln,
                                                 int32_t _fn);
static void codepoints(string * this24,
                       _ir_codepoints__ref_string * _retArg);
static uint8_t byte(string * this24,
                    int64_t i,
                    int64_t _ln,
                    int32_t _fn);
static string this14(string * this24,
                     codepointIndex * i,
                     int64_t _ln,
                     int32_t _fn);
static string item(string * this24,
                   codepointIndex * i,
                   int64_t _ln,
                   int32_t _fn);
static string item2(string * this24,
                    int64_t i,
                    int64_t _ln,
                    int32_t _fn);
static string this15(string * this24,
                     range_byteIndex_both_one r,
                     Error * error_out,
                     int64_t _ln,
                     int32_t _fn);
static string this16(string * this24,
                     range_byteIndex_low_one r,
                     Error * error_out,
                     int64_t _ln,
                     int32_t _fn);
static string this17(string * this24,
                     range_byteIndex_high_one r,
                     Error * error_out,
                     int64_t _ln,
                     int32_t _fn);
static string this18(string * this24,
                     range_int64_t_low_one r,
                     int64_t _ln,
                     int32_t _fn);
static string this19(string * this24,
                     range_int64_t_both_one r,
                     int64_t _ln,
                     int32_t _fn);
static chpl_bool isEmpty2(string * this24);
static byteIndex find(string * this24,
                      string * pattern,
                      range_byteIndex_low_one indices3,
                      int64_t _ln,
                      int32_t _fn);
static string replace(string * this24,
                      string * pattern,
                      string * replacement,
                      int64_t count,
                      int64_t _ln,
                      int32_t _fn);
static string strip(string * this24,
                    string * chars,
                    chpl_bool leading,
                    chpl_bool trailing,
                    int64_t _ln,
                    int32_t _fn);
static void chpl___ASSIGN_69(byteIndex * lhs,
                             int64_t rhs);
static void chpl___ASSIGN_70(byteIndex * lhs,
                             byteIndex * rhs);
static void chpl___ASSIGN_71(string * lhs,
                             string * rhs,
                             int64_t _ln,
                             int32_t _fn);
static string chpl___PLUS_9(string * s0,
                            string * s1,
                            int64_t _ln,
                            int32_t _fn);
static void chpl___PLUS__ASSIGN_3(string * lhs,
                                  string * rhs,
                                  int64_t _ln,
                                  int32_t _fn);
static chpl_bool chpl___EQUALS_23(string * a,
                                  string * b,
                                  int64_t _ln,
                                  int32_t _fn);
static chpl_bool chpl___EXCLAMATION__ASSIGN_11(string * a,
                                               string * b,
                                               int64_t _ln,
                                               int32_t _fn);
static chpl_bool chpl___LESS_6(string * a,
                               string * b,
                               int64_t _ln,
                               int32_t _fn);
static chpl_bool chpl___GREATER_6(string * a,
                                  string * b,
                                  int64_t _ln,
                                  int32_t _fn);
static int64_t chpl___COLON_42(byteIndex * cpi);
static byteIndex chpl___COLON_43(int64_t i);
static int64_t chpl___COLON_44(codepointIndex * cpi);
static codepointIndex chpl___COLON_45(int64_t i);
static void chpl__init_StringCasts(int64_t _ln,
                                   int32_t _fn);
static chpl_bool chpl___COLON_46(string * x2,
                                 Error * error_out,
                                 int64_t _ln,
                                 int32_t _fn);
static string chpl___COLON_47(uint8_t x2,
                              int64_t _ln,
                              int32_t _fn);
static string chpl___COLON_48(int64_t x2,
                              int64_t _ln,
                              int32_t _fn);
static string chpl___COLON_49(uint64_t x2,
                              int64_t _ln,
                              int32_t _fn);
static string chpl___COLON_50(int32_t x2,
                              int64_t _ln,
                              int32_t _fn);
static uint64_t chpl___COLON_51(string * x2,
                                Error * error_out,
                                int64_t _ln,
                                int32_t _fn);
static int64_t chpl___COLON_52(string * x2,
                               Error * error_out,
                               int64_t _ln,
                               int32_t _fn);
static _real64 chpl___COLON_53(string * x2,
                               Error * error_out,
                               int64_t _ln,
                               int32_t _fn);
void chpl__heapAllocateGlobals(void);
void chpl__init_preInit(int64_t _ln,
                        int32_t _fn);
static void chpl__init_currentTask(int64_t _ln,
                                   int32_t _fn);
static void yieldExecution(void);
static void chpl__init_AggregationPrimitives(int64_t _ln,
                                             int32_t _fn);
static int64_t getEnvInt(string * name,
                         int64_t default2,
                         int64_t _ln,
                         int32_t _fn);
static void chpl__init_AutoMath(int64_t _ln,
                                int32_t _fn);
static int64_t max2(int64_t x2,
                    int64_t y);
static int64_t min2(int64_t x2,
                    int64_t y);
static void chpl__init_CTypes(int64_t _ln,
                              int32_t _fn);
static _owned_Error2 * this20(_owned_Error2 * this24,
                              int64_t i);
static uint8_t * this21(uint8_t * this24,
                        int64_t i);
static int64_t * this22(int64_t * this24,
                        int64_t i);
static uint8_t * this23(uint8_t * this24,
                        uint64_t i);
static uint8_t * deref(uint8_t * this24);
static chpl_bool * deref2(chpl_bool * this24);
static int64_t * deref3(int64_t * this24);
static void chpl___ASSIGN_72(c_ptr_qio_channel_t * lhs,
                             qio_channel_t * rhs);
static void chpl___ASSIGN_73(c_ptr_void * lhs,
                             void * rhs);
static void chpl___ASSIGN_74(c_ptr_uint8_t * lhs,
                             uint8_t * rhs);
static void chpl___ASSIGN_75(c_ptr_chpl_task_infoChapel_t * lhs,
                             chpl_task_infoChapel_t * rhs);
static void chpl___ASSIGN_76(c_ptr_qio_file_t * lhs,
                             qio_file_t * rhs);
static void chpl___ASSIGN_77(c_ptr__owned_Error * lhs,
                             _owned_Error2 * rhs);
static void chpl___ASSIGN_78(c_ptrConst_int8_t * lhs,
                             c_string_rehook rhs);
static void chpl___ASSIGN_79(c_ptr_uint8_t * lhs,
                             _nilType rhs,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_80(c_ptrConst_int8_t * lhs,
                             _nilType rhs,
                             int64_t _ln,
                             int32_t _fn);
static uint8_t * chpl___COLON_54(chpl_task_infoChapel_t * x2,
                                 int64_t _ln,
                                 int32_t _fn);
static uint8_t * chpl___COLON_55(c_string_rehook x2,
                                 int64_t _ln,
                                 int32_t _fn);
static _owned_Error2 * chpl___COLON_56(void * x2,
                                       int64_t _ln,
                                       int32_t _fn);
static int64_t * chpl___COLON_57(void * x2,
                                 int64_t _ln,
                                 int32_t _fn);
static uint8_t * chpl___COLON_58(void * x2,
                                 int64_t _ln,
                                 int32_t _fn);
static QioPluginFile chpl___COLON_59(void * x2,
                                     int64_t _ln,
                                     int32_t _fn);
static QioPluginChannel chpl___COLON_60(void * x2,
                                        int64_t _ln,
                                        int32_t _fn);
static BaseArr chpl___COLON_61(void * x2,
                               int64_t _ln,
                               int32_t _fn);
static _ddata_uint64_t chpl___COLON_62(void * x2,
                                       int64_t _ln,
                                       int32_t _fn);
static _ddata_int64_t chpl___COLON_63(void * x2,
                                      int64_t _ln,
                                      int32_t _fn);
static _ddata_locale chpl___COLON_64(void * x2,
                                     int64_t _ln,
                                     int32_t _fn);
static void * chpl___COLON_65(_ddata_uint64_t x2,
                              int64_t _ln,
                              int32_t _fn);
static void * chpl___COLON_66(_ddata_int64_t x2,
                              int64_t _ln,
                              int32_t _fn);
static void * chpl___COLON_67(_ddata_locale x2,
                              int64_t _ln,
                              int32_t _fn);
static chpl_bool chpl___EQUALS_24(uint8_t * a,
                                  _nilType b);
static chpl_bool chpl___EQUALS_25(qio_file_t * a,
                                  _nilType b);
static chpl_bool chpl___EQUALS_26(qio_channel_t * a,
                                  _nilType b);
static chpl_bool chpl___EXCLAMATION__ASSIGN_12(chpl_bool * a,
                                               _nilType b);
static chpl_bool chpl___EXCLAMATION__ASSIGN_13(uint8_t * a,
                                               _nilType b);
static chpl_bool chpl___EXCLAMATION__ASSIGN_14(_owned_Error2 * a,
                                               _nilType b);
static uint8_t * chpl___PLUS_10(uint8_t * a,
                                int32_t b);
static uint8_t * chpl___PLUS_11(uint8_t * a,
                                int64_t b);
static _ddata_int64_t * c_ptrTo(_ddata_int64_t * x2);
static uint8_t * c_ptrTo2(uint8_t * x2);
static _ddata_locale * c_ptrTo3(_ddata_locale * x2);
static _ddata_uint64_t * c_ptrTo4(_ddata_uint64_t * x2);
static int64_t * c_ptrTo5(int64_t * x2);
static chpl_localeID_t * c_ptrTo6(chpl_localeID_t * x2);
static c_ptr_void * c_ptrTo7(c_ptr_void * x2);
static raw_c_void_ptr * c_ptrTo8(raw_c_void_ptr * x2);
static void * c_ptrTo9(QioPluginChannel c,
                       int64_t _ln,
                       int32_t _fn);
static chpl_localeID_t * c_addrOf(chpl_localeID_t * x2);
static _ddata_locale * c_addrOf2(_ddata_locale * x2);
static raw_c_void_ptr * c_addrOf3(raw_c_void_ptr * x2);
static c_ptr_void * c_addrOf4(c_ptr_void * x2);
static uint8_t * c_addrOf5(uint8_t * x2);
static int64_t * c_addrOf6(int64_t * x2);
static _ddata_int64_t * c_addrOf7(_ddata_int64_t * x2);
static _ddata_uint64_t * c_addrOf8(_ddata_uint64_t * x2);
static int16_t offset_ARRAY_ELEMENTS(void);
static uint64_t c_sizeof(void);
static uint64_t c_sizeof2(void);
static uint64_t c_sizeof3(void);
static uint64_t c_sizeof4(void);
static uint64_t c_sizeof5(void);
static uint64_t c_sizeof6(void);
static uint64_t c_sizeof7(void);
static uint8_t * allocate(uint64_t size5,
                          chpl_bool clear2,
                          uint64_t alignment,
                          int64_t _ln,
                          int32_t _fn);
static int64_t * allocate2(uint64_t size5,
                           chpl_bool clear2,
                           uint64_t alignment,
                           int64_t _ln,
                           int32_t _fn);
static _owned_Error2 * allocate3(uint64_t size5,
                                 chpl_bool clear2,
                                 uint64_t alignment,
                                 int64_t _ln,
                                 int32_t _fn);
static uint64_t allocate_default_alignment(void);
static uint64_t allocate_default_alignment2(void);
static uint64_t allocate_default_alignment3(void);
static void deallocate(void * data,
                       int64_t _ln,
                       int32_t _fn);
static int64_t strLen(c_string_rehook x2,
                      int64_t _ln,
                      int32_t _fn);
static const int8_t * c_str(string * this24,
                            int64_t _ln,
                            int32_t _fn);
static void chpl__init_ChapelIO(int64_t _ln,
                                int32_t _fn);
static int64_t chpl____numIOFields(void);
static int64_t chpl____numIOFields2(void);
static int64_t chpl____numIOFields3(void);
static void serializeDefaultImpl(fileWriter_F_defaultSerializer * writer3,
                                 defaultSerializer * serializer2,
                                 chpl___RemoteVarContainer_R x2,
                                 Error * error_out,
                                 int64_t _ln,
                                 int32_t _fn);
static void serializeDefaultImpl2(fileWriter_F_defaultSerializer * writer3,
                                  defaultSerializer * serializer2,
                                  Remote_R x2,
                                  Error * error_out,
                                  int64_t _ln,
                                  int32_t _fn);
static void serializeDefaultImpl3(fileWriter_F_defaultSerializer * writer3,
                                  defaultSerializer * serializer2,
                                  R * x2,
                                  Error * error_out,
                                  int64_t _ln,
                                  int32_t _fn);
static void writeln(string * _e0_args,
                    int64_t _ln,
                    int32_t _fn);
static void writeln2(string * _e0_args,
                     string * _e1_args,
                     string * _e2_args,
                     Remote_R _e3_args,
                     string * _e4_args,
                     R * _e5_args,
                     int64_t _ln,
                     int32_t _fn);
static void writeln3(_owned_Remote_R * _e0_args,
                     Remote_R _e1_args,
                     int64_t _ln,
                     int32_t _fn);
static void writeln4(Remote_R _e0_args,
                     int64_t _ln,
                     int32_t _fn);
static void writeln5(int64_t _ln,
                     int32_t _fn);
static string chpl_stringify_wrapper(string * _e0_args,
                                     range_byteIndex_both_one _e1_args,
                                     string * _e2_args,
                                     int64_t _e3_args,
                                     int64_t _ln,
                                     int32_t _fn);
static string chpl_stringify_wrapper10(string * _e0_args,
                                       ArrayInit _e1_args,
                                       string * _e2_args,
                                       int64_t _ln,
                                       int32_t _fn);
static string chpl_stringify_wrapper11(string * _e0_args,
                                       int64_t _e1_args,
                                       string * _e2_args,
                                       int64_t _ln,
                                       int32_t _fn);
static string chpl_stringify_wrapper12(string * _e0_args,
                                       range_int64_t_low_one _e1_args,
                                       string * _e2_args,
                                       int64_t _e3_args,
                                       int64_t _ln,
                                       int32_t _fn);
static string chpl_stringify_wrapper13(string * _e0_args,
                                       range_byteIndex_low_one _e1_args,
                                       string * _e2_args,
                                       int64_t _e3_args,
                                       int64_t _ln,
                                       int32_t _fn);
static string chpl_stringify_wrapper14(string * _e0_args,
                                       string * _e1_args,
                                       string * _e2_args,
                                       string * _e3_args,
                                       int64_t _ln,
                                       int32_t _fn);
static string chpl_stringify_wrapper15(c_string_rehook _e0_args,
                                       int64_t _ln,
                                       int32_t _fn);
static string chpl_stringify_wrapper2(string * _e0_args,
                                      range_byteIndex_high_one _e1_args,
                                      string * _e2_args,
                                      int64_t _e3_args,
                                      int64_t _ln,
                                      int32_t _fn);
static string chpl_stringify_wrapper3(string * _e0_args,
                                      int64_t _e1_args,
                                      int64_t _ln,
                                      int32_t _fn);
static string chpl_stringify_wrapper4(string * _e0_args,
                                      int32_t _e1_args,
                                      string * _e2_args,
                                      int64_t _e3_args,
                                      int64_t _ln,
                                      int32_t _fn);
static string chpl_stringify_wrapper5(string * _e0_args,
                                      string * _e1_args,
                                      int64_t _e2_args,
                                      string * _e3_args,
                                      range_int64_t_both_one _e4_args,
                                      int64_t _ln,
                                      int32_t _fn);
static string chpl_stringify_wrapper6(string * _e0_args,
                                      range_int64_t_both_one _e1_args,
                                      string * _e2_args,
                                      int64_t _e3_args,
                                      int64_t _ln,
                                      int32_t _fn);
static string chpl_stringify_wrapper7(string * _e0_args,
                                      int64_t _e1_args,
                                      string * _e2_args,
                                      int64_t _e3_args,
                                      string * _e4_args,
                                      int64_t _ln,
                                      int32_t _fn);
static string chpl_stringify_wrapper8(string * _e0_args,
                                      uint64_t _e1_args,
                                      int64_t _ln,
                                      int32_t _fn);
static string chpl_stringify_wrapper9(string * _e0_args,
                                      int64_t _e1_args,
                                      string * _e2_args,
                                      int64_t _e3_args,
                                      int64_t _ln,
                                      int32_t _fn);
static void chpl__init_ChapelSysCTypes(int64_t _ln,
                                       int32_t _fn);
static void chpl__init_Communication(int64_t _ln,
                                     int32_t _fn);
static void get(void * dest,
                void * src,
                int64_t srcLocID,
                uint64_t numBytes2,
                int64_t _ln,
                int32_t _fn);
static void chpl__init_CopyAggregation(int64_t _ln,
                                       int32_t _fn);
static void chpl__init_DSIUtil(int64_t _ln,
                               int32_t _fn);
static void createTuple(int64_t val,
                        _tuple_1_star_int64_t * _retArg);
static void _computeChunkStuff(int64_t maxTasks,
                               chpl_bool ignoreRunning,
                               int64_t minSize,
                               _tuple_1_star_range_int64_t_both_one * ranges,
                               _tuple_2_star_int64_t * _retArg,
                               int64_t _ln,
                               int32_t _fn);
static int64_t _computeNumChunks(int64_t maxTasks,
                                 chpl_bool ignoreRunning,
                                 int64_t minSize,
                                 int64_t numElems,
                                 int64_t _ln,
                                 int32_t _fn);
static int64_t _computeNumChunks2(int64_t maxTasks,
                                  chpl_bool ignoreRunning,
                                  int64_t minSize,
                                  uint64_t numElems,
                                  int64_t _ln,
                                  int32_t _fn);
static int64_t _computeNumChunks3(int64_t numElems,
                                  int64_t _ln,
                                  int32_t _fn);
static uint64_t intCeilXDivByY(uint64_t x2,
                               uint64_t y,
                               int64_t _ln,
                               int32_t _fn);
static void _computeBlock(uint64_t numelems,
                          int64_t numblocks,
                          int64_t blocknum,
                          int64_t wayhi,
                          int64_t waylo,
                          int64_t lo,
                          _tuple_2_star_int64_t * _retArg,
                          int64_t _ln,
                          int32_t _fn);
static void _computeBlock2(int64_t numelems,
                           int64_t numblocks,
                           int64_t blocknum,
                           int64_t wayhi,
                           int64_t waylo,
                           int64_t lo,
                           _tuple_2_star_int64_t * _retArg,
                           int64_t _ln,
                           int32_t _fn);
static void chpl__init_Debugger(int64_t _ln,
                                int32_t _fn);
static void breakpoint(void);
static void chpl__init_Errors(int64_t _ln,
                              int32_t _fn);
static void chpl__auto_destroy_Error(Error this24,
                                     int64_t _ln,
                                     int32_t _fn);
static Error * chpl_get_Error__next(Error this24,
                                    int64_t _ln,
                                    int32_t _fn);
static int64_t * chpl_get_Error_thrownLine(Error this24,
                                           int64_t _ln,
                                           int32_t _fn);
static int32_t * chpl_get_Error_thrownFileId(Error this24,
                                             int64_t _ln,
                                             int32_t _fn);
static string * chpl_get_Error__msg(Error this24,
                                    int64_t _ln,
                                    int32_t _fn);
static chpl_bool * chpl_get_Error__hasThrowInfo(Error this24,
                                                int64_t _ln,
                                                int32_t _fn);
static void init98(Error this24,
                   int64_t _ln,
                   int32_t _fn);
static void init99(Error this24,
                   string * msg,
                   int64_t _ln,
                   int32_t _fn);
static void message(Error this24,
                    string * _retArg,
                    int64_t _ln,
                    int32_t _fn);
static NilThrownError _new12(int64_t _ln,
                             int32_t _fn);
static void chpl__auto_destroy_NilThrownError(NilThrownError this24,
                                              int64_t _ln,
                                              int32_t _fn);
static void init100(NilThrownError this24,
                    int64_t _ln,
                    int32_t _fn);
static void message2(NilThrownError this24,
                     string * _retArg,
                     int64_t _ln,
                     int32_t _fn);
static NilClassError _new13(int64_t _ln,
                            int32_t _fn);
static void chpl__auto_destroy_NilClassError(NilClassError this24,
                                             int64_t _ln,
                                             int32_t _fn);
static void init101(NilClassError this24,
                    int64_t _ln,
                    int32_t _fn);
static void message3(NilClassError this24,
                     string * _retArg,
                     int64_t _ln,
                     int32_t _fn);
static DecodeError _new14(int64_t _ln,
                          int32_t _fn);
static void chpl__auto_destroy_DecodeError(DecodeError this24,
                                           int64_t _ln,
                                           int32_t _fn);
static void init102(DecodeError this24,
                    int64_t _ln,
                    int32_t _fn);
static void message4(DecodeError this24,
                     string * _retArg,
                     int64_t _ln,
                     int32_t _fn);
static void chpl__auto_destroy_IllegalArgumentError(IllegalArgumentError this24,
                                                    int64_t _ln,
                                                    int32_t _fn);
static IllegalArgumentError _new15(string * msg,
                                   int64_t _ln,
                                   int32_t _fn);
static void init103(IllegalArgumentError this24,
                    string * msg,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_CodepointSplitError(CodepointSplitError this24,
                                                   int64_t _ln,
                                                   int32_t _fn);
static CodepointSplitError _new16(string * info,
                                  int64_t _ln,
                                  int32_t _fn);
static void init104(CodepointSplitError this24,
                    string * info,
                    int64_t _ln,
                    int32_t _fn);
static void message5(CodepointSplitError this24,
                     string * _retArg,
                     int64_t _ln,
                     int32_t _fn);
static void chpl__auto_destroy_chpl_TaskErrors(chpl_TaskErrors * this24);
static void init105(chpl_TaskErrors * this24,
                    Error _head,
                    chpl_LocalSpinlock * _errorsLock);
static Error * chpl_get_chpl_TaskErrors__head(chpl_TaskErrors * this24);
static Error init_default__head(int64_t _ln,
                                int32_t _fn);
static chpl_LocalSpinlock * chpl_get_chpl_TaskErrors__errorsLock(chpl_TaskErrors * this24);
static chpl_LocalSpinlock init_default__errorsLock(void);
static void append(chpl_TaskErrors * this24,
                   Error err,
                   int64_t _ln,
                   int32_t _fn);
static chpl_bool empty(chpl_TaskErrors * this24,
                       int64_t _ln,
                       int32_t _fn);
static int64_t * chpl_get_TaskErrors_nErrors(TaskErrors this24,
                                             int64_t _ln,
                                             int32_t _fn);
static c_ptr__owned_Error * chpl_get_TaskErrors_errorsArray(TaskErrors this24,
                                                            int64_t _ln,
                                                            int32_t _fn);
static TaskErrors _new17(chpl_TaskErrors * group,
                         int64_t _ln,
                         int32_t _fn);
static void init106(TaskErrors this24,
                    chpl_TaskErrors * group,
                    int64_t _ln,
                    int32_t _fn);
static TaskErrors _new18(Error err,
                         int64_t _ln,
                         int32_t _fn);
static void init107(TaskErrors this24,
                    Error err,
                    int64_t _ln,
                    int32_t _fn);
static void deinit53(TaskErrors this24,
                     int64_t _ln,
                     int32_t _fn);
static _ic_these_TaskErrors _getIterator24(_ir_these_TaskErrors * ir,
                                           int64_t _ln,
                                           int32_t _fn);
static void these5(TaskErrors this24,
                   _ir_these_TaskErrors * _retArg);
static void message6(TaskErrors this24,
                     string * _retArg,
                     int64_t _ln,
                     int32_t _fn);
static string chpl_error_type_name(Error err,
                                   int64_t _ln,
                                   int32_t _fn);
static string chpl_describe_error(Error err,
                                  int64_t _ln,
                                  int32_t _fn);
static Error chpl_do_fix_thrown_error(Error err,
                                      int64_t _ln,
                                      int32_t _fn);
static Error chpl_fix_thrown_error(_owned_Error * err,
                                   int64_t _ln,
                                   int32_t _fn);
static void chpl_delete_error(Error err,
                              int64_t _ln,
                              int32_t _fn);
static void chpl_uncaught_error(Error err,
                                int64_t _ln,
                                int32_t _fn);
static void chpl_propagate_error(Error err,
                                 int64_t _ln,
                                 int32_t _fn);
static Error chpl_forall_error(Error err,
                               int64_t _ln,
                               int32_t _fn);
static void chpl_enum_cast_error(uint8_t casted,
                                 string * enumName,
                                 Error * error_out,
                                 int64_t _ln,
                                 int32_t _fn);
static void assert2(chpl_bool test,
                    int64_t _ln,
                    int32_t _fn);
static void assert3(chpl_bool test,
                    string * _e0_args,
                    int32_t _e1_args,
                    string * _e2_args,
                    int64_t _e3_args,
                    int64_t _ln,
                    int32_t _fn);
static void compilerWarning(void);
static void compilerAssert(void);
static void compilerAssert2(void);
static void halt(string * msg,
                 int64_t _ln,
                 int32_t _fn);
static void halt10(c_string_rehook _e0_args,
                   int64_t _ln,
                   int32_t _fn);
static void halt11(string * _e0_args,
                   int64_t _e1_args,
                   string * _e2_args,
                   int64_t _ln,
                   int32_t _fn);
static void halt12(string * _e0_args,
                   range_byteIndex_high_one _e1_args,
                   string * _e2_args,
                   int64_t _e3_args,
                   int64_t _ln,
                   int32_t _fn);
static void halt13(string * _e0_args,
                   ArrayInit _e1_args,
                   string * _e2_args,
                   int64_t _ln,
                   int32_t _fn);
static void halt14(string * _e0_args,
                   range_byteIndex_both_one _e1_args,
                   string * _e2_args,
                   int64_t _e3_args,
                   int64_t _ln,
                   int32_t _fn);
static void halt15(string * _e0_args,
                   int64_t _e1_args,
                   string * _e2_args,
                   int64_t _e3_args,
                   int64_t _ln,
                   int32_t _fn);
static void halt2(string * _e0_args,
                  int64_t _e1_args,
                  int64_t _ln,
                  int32_t _fn);
static void halt3(string * _e0_args,
                  string * _e1_args,
                  string * _e2_args,
                  string * _e3_args,
                  int64_t _ln,
                  int32_t _fn);
static void halt4(string * _e0_args,
                  range_int64_t_both_one _e1_args,
                  string * _e2_args,
                  int64_t _e3_args,
                  int64_t _ln,
                  int32_t _fn);
static void halt5(string * _e0_args,
                  int64_t _e1_args,
                  string * _e2_args,
                  int64_t _e3_args,
                  string * _e4_args,
                  int64_t _ln,
                  int32_t _fn);
static void halt6(string * _e0_args,
                  range_int64_t_low_one _e1_args,
                  string * _e2_args,
                  int64_t _e3_args,
                  int64_t _ln,
                  int32_t _fn);
static void halt7(string * _e0_args,
                  string * _e1_args,
                  int64_t _e2_args,
                  string * _e3_args,
                  range_int64_t_both_one _e4_args,
                  int64_t _ln,
                  int32_t _fn);
static void halt8(string * _e0_args,
                  range_byteIndex_low_one _e1_args,
                  string * _e2_args,
                  int64_t _e3_args,
                  int64_t _ln,
                  int32_t _fn);
static void halt9(string * _e0_args,
                  uint64_t _e1_args,
                  int64_t _ln,
                  int32_t _fn);
static void chpl__init_FormattedIO(int64_t _ln,
                                   int32_t _fn);
static void chpl__init_HaltWrappers(int64_t _ln,
                                    int32_t _fn);
static void pureVirtualMethodHalt(int64_t _ln,
                                  int32_t _fn);
static void nilCheckHalt(string * s,
                         int64_t _ln,
                         int32_t _fn);
static void boundsCheckHalt(string * s,
                            int64_t _ln,
                            int32_t _fn);
static void safeCastCheckHalt(string * s,
                              int64_t _ln,
                              int32_t _fn);
static void chpl__init_HideDeprecatedReexport(int64_t _ln,
                                              int32_t _fn);
static void chpl__init_IO(int64_t _ln,
                          int32_t _fn);
static void chpl__deinit_IO(int64_t _ln,
                            int32_t _fn);
static void chpl___ASSIGN_81(iostyleInternal * _arg1,
                             iostyleInternal * _arg2);
static void chpl__auto_destroy_QioPluginFile(QioPluginFile this24,
                                             int64_t _ln,
                                             int32_t _fn);
static syserr setupChannel(QioPluginFile this24,
                           QioPluginChannel * pluginChannel,
                           int64_t start,
                           int64_t end,
                           qio_channel_t * qioChannelPtr,
                           int64_t _ln,
                           int32_t _fn);
static syserr filelength(QioPluginFile this24,
                         int64_t * length);
static syserr getpath(QioPluginFile this24,
                      c_ptr_uint8_t * path,
                      int64_t * len,
                      int64_t _ln,
                      int32_t _fn);
static syserr fsync2(QioPluginFile this24);
static syserr getChunk(QioPluginFile this24,
                       int64_t * length);
static syserr getLocalesForRegion(QioPluginFile this24,
                                  int64_t start,
                                  int64_t end,
                                  c_ptr_c_ptrConst_int8_t * localeNames,
                                  int64_t * nLocales,
                                  int64_t _ln,
                                  int32_t _fn);
static syserr close2(QioPluginFile this24);
static void chpl__auto_destroy_QioPluginChannel(QioPluginChannel this24,
                                                int64_t _ln,
                                                int32_t _fn);
static syserr readAtLeast(QioPluginChannel this24,
                          int64_t amt);
static syserr write5(QioPluginChannel this24,
                     int64_t amt);
static syserr close3(QioPluginChannel this24);
syserr chpl_qio_setup_plugin_channel(void * file2,
                                     c_ptr_void * plugin_ch,
                                     int64_t start,
                                     int64_t end,
                                     qio_channel_t * qio_ch);
syserr chpl_qio_read_atleast(void * ch_plugin,
                             int64_t amt);
syserr chpl_qio_write(void * ch_plugin,
                      int64_t amt);
syserr chpl_qio_channel_close(void * ch);
syserr chpl_qio_filelength(void * file2,
                           int64_t * length);
syserr chpl_qio_getpath(void * file2,
                        c_ptr_uint8_t * str,
                        int64_t * len);
syserr chpl_qio_fsync(void * file2);
syserr chpl_qio_get_chunk(void * file2,
                          int64_t * length);
syserr chpl_qio_get_locales_for_region(void * file2,
                                       int64_t start,
                                       int64_t end,
                                       c_ptr_void * localeNames,
                                       int64_t * nLocales);
syserr chpl_qio_file_close(void * file2);
static iostyleInternal defaultIOStyleInternal(void);
static void chpl__auto_destroy_ioHintSet(ioHintSet * this24);
static void init108(ioHintSet * this24,
                    int32_t _internal);
static int32_t * chpl_get_ioHintSet__internal(ioHintSet * this24);
static ioHintSet empty2(void);
static locale * chpl_get_file__home(file * this24);
static c_ptr_qio_file_t * chpl_get_file__file_internal(file * this24);
static void init109(file * this24,
                    int64_t _ln,
                    int32_t _fn);
static void init110(file * this24,
                    _cfiletype * fp,
                    ioHintSet * hints,
                    chpl_bool own,
                    Error * error_out,
                    int64_t _ln,
                    int32_t _fn);
static ioHintSet init_default_hints(Error * error_out);
static void initHelper(file * f,
                       _cfiletype * fp,
                       ioHintSet * hints,
                       chpl_bool own,
                       Error * error_out,
                       int64_t _ln,
                       int32_t _fn);
static void init111(file * this24,
                    int64_t fileDescriptor,
                    ioHintSet * hints,
                    chpl_bool own,
                    Error * error_out,
                    int64_t _ln,
                    int32_t _fn);
static ioHintSet init_default_hints2(Error * error_out);
static void initHelper2(file * f,
                        int32_t fd,
                        ioHintSet * hints,
                        chpl_bool own,
                        Error * error_out,
                        int64_t _ln,
                        int32_t _fn);
static void checkAssumingLocal(file * this24,
                               Error * error_out,
                               int64_t _ln,
                               int32_t _fn);
static void deinit54(file * this24,
                     int64_t _ln,
                     int32_t _fn);
static iostyleInternal _style(file * this24,
                              Error * error_out,
                              int64_t _ln,
                              int32_t _fn);
static void close4(file * this24,
                   Error * error_out,
                   int64_t _ln,
                   int32_t _fn);
static string _tryGetPath(file * this24,
                          int64_t _ln,
                          int32_t _fn);
static string fileRelPathHelper(file * f,
                                Error * error_out,
                                int64_t _ln,
                                int32_t _fn);
static file openMemFile(Error * error_out,
                        int64_t _ln,
                        int32_t _fn);
static file openMemFileHelper(Error * error_out,
                              int64_t _ln,
                              int32_t _fn);
static defaultSerializer defaultSerializeVal(void);
static defaultDeserializer defaultSerializeVal2(void);
static _serializeWrapper_defaultSerializer _new19(defaultSerializer * member,
                                                  int64_t chpl____dummy,
                                                  int64_t _ln,
                                                  int32_t _fn);
static _serializeWrapper_defaultDeserializer _new20(defaultDeserializer * member,
                                                    int64_t chpl____dummy,
                                                    int64_t _ln,
                                                    int32_t _fn);
static void chpl__auto_destroy__serializeWrapper(_serializeWrapper_binarySerializer this24,
                                                 int64_t _ln,
                                                 int32_t _fn);
static void chpl__auto_destroy__serializeWrapper2(_serializeWrapper_binaryDeserializer this24,
                                                  int64_t _ln,
                                                  int32_t _fn);
static void chpl__auto_destroy__serializeWrapper3(_serializeWrapper_defaultSerializer this24,
                                                  int64_t _ln,
                                                  int32_t _fn);
static void chpl__auto_destroy__serializeWrapper4(_serializeWrapper_defaultDeserializer this24,
                                                  int64_t _ln,
                                                  int32_t _fn);
static void init112(_serializeWrapper_defaultSerializer this24,
                    defaultSerializer * member,
                    int64_t chpl____dummy,
                    int64_t _ln,
                    int32_t _fn);
static void init113(_serializeWrapper_defaultDeserializer this24,
                    defaultDeserializer * member,
                    int64_t chpl____dummy,
                    int64_t _ln,
                    int32_t _fn);
static defaultSerializer * chpl_get__serializeWrapper_member(_serializeWrapper_defaultSerializer this24,
                                                             int64_t _ln,
                                                             int32_t _fn);
static defaultDeserializer * chpl_get__serializeWrapper_member2(_serializeWrapper_defaultDeserializer this24,
                                                                int64_t _ln,
                                                                int32_t _fn);
static locale * chpl_get_fileReader__home(fileReader_F_defaultDeserializer * this24);
static locale * chpl_get_fileReader__home2(fileReader_T_defaultDeserializer * this24);
static c_ptr_qio_channel_t * chpl_get_fileReader__channel_internal(fileReader_F_defaultDeserializer * this24);
static c_ptr_qio_channel_t * chpl_get_fileReader__channel_internal2(fileReader_T_defaultDeserializer * this24);
static _shared__serializeWrapper_defaultDeserializer2 * chpl_get_fileReader__deserializer(fileReader_F_defaultDeserializer * this24);
static _shared__serializeWrapper_defaultDeserializer2 * chpl_get_fileReader__deserializer2(fileReader_T_defaultDeserializer * this24);
static defaultDeserializer * deserializer(fileReader_T_defaultDeserializer * this24,
                                          int64_t _ln,
                                          int32_t _fn);
static defaultDeserializer * deserializer2(fileReader_F_defaultDeserializer * this24,
                                           int64_t _ln,
                                           int32_t _fn);
static locale * chpl_get_fileWriter__home(fileWriter_F_defaultSerializer * this24);
static locale * chpl_get_fileWriter__home2(fileWriter_T_defaultSerializer * this24);
static c_ptr_qio_channel_t * chpl_get_fileWriter__channel_internal(fileWriter_F_defaultSerializer * this24);
static c_ptr_qio_channel_t * chpl_get_fileWriter__channel_internal2(fileWriter_T_defaultSerializer * this24);
static _shared__serializeWrapper_defaultSerializer * chpl_get_fileWriter__serializer(fileWriter_F_defaultSerializer * this24);
static _shared__serializeWrapper_defaultSerializer * chpl_get_fileWriter__serializer2(fileWriter_T_defaultSerializer * this24);
static locale * chpl_get_fileWriter__readWriteThisFromLocale(fileWriter_F_defaultSerializer * this24);
static locale * chpl_get_fileWriter__readWriteThisFromLocale2(fileWriter_T_defaultSerializer * this24);
static defaultSerializer * serializer(fileWriter_F_defaultSerializer * this24,
                                      int64_t _ln,
                                      int32_t _fn);
static void chpl__auto_destroy_defaultSerializer(defaultSerializer * this24);
static void init114(defaultSerializer * this24);
static void _serializeClassOrPtr(defaultSerializer * this24,
                                 fileWriter_F_defaultSerializer * writer3,
                                 Remote_R x2,
                                 Error * error_out,
                                 int64_t _ln,
                                 int32_t _fn);
static void _serializeClassOrPtr2(defaultSerializer * this24,
                                  fileWriter_F_defaultSerializer * writer3,
                                  _owned_Remote_R * x2,
                                  Error * error_out,
                                  int64_t _ln,
                                  int32_t _fn);
static void _serializeClassOrPtr3(defaultSerializer * this24,
                                  fileWriter_F_defaultSerializer * writer3,
                                  _owned__RemoteVarContainer_R * x2,
                                  Error * error_out,
                                  int64_t _ln,
                                  int32_t _fn);
static void serializeValue(defaultSerializer * this24,
                           fileWriter_F_defaultSerializer * writer3,
                           _owned__RemoteVarContainer_R * val,
                           Error * error_out,
                           int64_t _ln,
                           int32_t _fn);
static void serializeValue2(defaultSerializer * this24,
                            fileWriter_F_defaultSerializer * writer3,
                            R * val,
                            Error * error_out,
                            int64_t _ln,
                            int32_t _fn);
static void serializeValue3(defaultSerializer * this24,
                            fileWriter_F_defaultSerializer * writer3,
                            string * val,
                            Error * error_out,
                            int64_t _ln,
                            int32_t _fn);
static void serializeValue4(defaultSerializer * this24,
                            fileWriter_F_defaultSerializer * writer3,
                            Remote_R val,
                            Error * error_out,
                            int64_t _ln,
                            int32_t _fn);
static void serializeValue5(defaultSerializer * this24,
                            fileWriter_F_defaultSerializer * writer3,
                            _owned_Remote_R * val,
                            Error * error_out,
                            int64_t _ln,
                            int32_t _fn);
static void serializeValue6(defaultSerializer * this24,
                            fileWriter_F_defaultSerializer * writer3,
                            ArrayInit val,
                            Error * error_out,
                            int64_t _ln,
                            int32_t _fn);
static void serializeValue7(defaultSerializer * this24,
                            fileWriter_F_defaultSerializer * writer3,
                            int64_t val,
                            Error * error_out,
                            int64_t _ln,
                            int32_t _fn);
static AggregateSerializer_fileWriter_F_defaultSerializer startClass(defaultSerializer * this24,
                                                                     fileWriter_F_defaultSerializer * writer3,
                                                                     string * name,
                                                                     int64_t size5,
                                                                     Error * error_out,
                                                                     int64_t _ln,
                                                                     int32_t _fn);
static AggregateSerializer_fileWriter_F_defaultSerializer startRecord(defaultSerializer * this24,
                                                                      fileWriter_F_defaultSerializer * writer3,
                                                                      string * name,
                                                                      int64_t size5,
                                                                      Error * error_out,
                                                                      int64_t _ln,
                                                                      int32_t _fn);
static void chpl__auto_destroy_AggregateSerializer(AggregateSerializer_fileWriter_F_defaultSerializer * this24,
                                                   int64_t _ln,
                                                   int32_t _fn);
static void init115(AggregateSerializer_fileWriter_F_defaultSerializer * this24,
                    fileWriter_F_defaultSerializer * writer3,
                    chpl_bool _parent,
                    chpl_bool _first,
                    string * _ending,
                    chpl_bool * _firstPtr);
static fileWriter_F_defaultSerializer * chpl_get_AggregateSerializer_writer(AggregateSerializer_fileWriter_F_defaultSerializer * this24);
static chpl_bool * chpl_get_AggregateSerializer__parent(AggregateSerializer_fileWriter_F_defaultSerializer * this24);
static chpl_bool * chpl_get_AggregateSerializer__first(AggregateSerializer_fileWriter_F_defaultSerializer * this24);
static chpl_bool init_default__first(void);
static string * chpl_get_AggregateSerializer__ending(AggregateSerializer_fileWriter_F_defaultSerializer * this24);
static c_ptr_chpl_bool * chpl_get_AggregateSerializer__firstPtr(AggregateSerializer_fileWriter_F_defaultSerializer * this24);
static chpl_bool * init_default__firstPtr(int64_t _ln,
                                          int32_t _fn);
static void writeField(AggregateSerializer_fileWriter_F_defaultSerializer * this24,
                       string * name,
                       R * field,
                       Error * error_out,
                       int64_t _ln,
                       int32_t _fn);
static void writeField2(AggregateSerializer_fileWriter_F_defaultSerializer * this24,
                        string * name,
                        _owned__RemoteVarContainer_R * field,
                        Error * error_out,
                        int64_t _ln,
                        int32_t _fn);
static void writeField3(AggregateSerializer_fileWriter_F_defaultSerializer * this24,
                        string * name,
                        int64_t field,
                        Error * error_out,
                        int64_t _ln,
                        int32_t _fn);
static void endClass(AggregateSerializer_fileWriter_F_defaultSerializer * this24,
                     Error * error_out,
                     int64_t _ln,
                     int32_t _fn);
static void endRecord(AggregateSerializer_fileWriter_F_defaultSerializer * this24,
                      Error * error_out,
                      int64_t _ln,
                      int32_t _fn);
static void chpl__auto_destroy_defaultDeserializer(defaultDeserializer * this24);
static void init116(defaultDeserializer * this24);
static void chpl__auto_destroy_binarySerializer(binarySerializer * this24);
static void chpl__auto_destroy_binaryDeserializer(binaryDeserializer * this24);
static void chpl___ASSIGN_82(fileReader_T_defaultDeserializer * lhs,
                             fileReader_T_defaultDeserializer * rhs,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_83(fileReader_F_defaultDeserializer * lhs,
                             fileReader_F_defaultDeserializer * rhs,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_84(fileWriter_F_defaultSerializer * lhs,
                             fileWriter_F_defaultSerializer * rhs,
                             int64_t _ln,
                             int32_t _fn);
static void chpl___ASSIGN_85(fileWriter_T_defaultSerializer * lhs,
                             fileWriter_T_defaultSerializer * rhs,
                             int64_t _ln,
                             int32_t _fn);
static void init117(fileReader_T_defaultDeserializer * this24,
                    int64_t _ln,
                    int32_t _fn);
static void init118(fileReader_F_defaultDeserializer * this24,
                    int64_t _ln,
                    int32_t _fn);
static void init119(fileWriter_T_defaultSerializer * this24,
                    int64_t _ln,
                    int32_t _fn);
static void init120(fileWriter_F_defaultSerializer * this24,
                    int64_t _ln,
                    int32_t _fn);
static void init_ASSIGN_26(fileWriter_F_defaultSerializer * this24,
                           fileWriter_F_defaultSerializer * x2,
                           int64_t _ln,
                           int32_t _fn);
static void init121(fileReader_T_defaultDeserializer * this24,
                    defaultDeserializer * deserializer3,
                    file * f,
                    syserr * error,
                    ioHintSet * hints,
                    int64_t start,
                    int64_t end,
                    iostyleInternal local_style,
                    int64_t _ln,
                    int32_t _fn);
static void init122(fileReader_F_defaultDeserializer * this24,
                    defaultDeserializer * deserializer3,
                    file * f,
                    syserr * error,
                    ioHintSet * hints,
                    int64_t start,
                    int64_t end,
                    iostyleInternal local_style,
                    int64_t _ln,
                    int32_t _fn);
static void init123(fileWriter_F_defaultSerializer * this24,
                    defaultSerializer * serializer2,
                    file * f,
                    syserr * error,
                    ioHintSet * hints,
                    int64_t start,
                    int64_t end,
                    iostyleInternal local_style,
                    int64_t _ln,
                    int32_t _fn);
static void init124(fileWriter_T_defaultSerializer * this24,
                    defaultSerializer * serializer2,
                    file * f,
                    syserr * error,
                    ioHintSet * hints,
                    int64_t start,
                    int64_t end,
                    iostyleInternal local_style,
                    int64_t _ln,
                    int32_t _fn);
static void deinit55(fileReader_F_defaultDeserializer * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit56(fileReader_T_defaultDeserializer * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit57(fileWriter_T_defaultSerializer * this24,
                     int64_t _ln,
                     int32_t _fn);
static void deinit58(fileWriter_F_defaultSerializer * this24,
                     int64_t _ln,
                     int32_t _fn);
static void chpl__auto_destroy_chpl_ioNewline(chpl_ioNewline * this24);
static void init125(chpl_ioNewline * this24,
                    chpl_bool skipWhitespaceOnly);
static chpl_bool init_default_skipWhitespaceOnly(void);
static int32_t EEOF2(void);
static void _ch_ioerror(fileReader_F_defaultDeserializer * this24,
                        syserr error,
                        string * msg,
                        Error * error_out,
                        int64_t _ln,
                        int32_t _fn);
static void _ch_ioerror2(fileWriter_T_defaultSerializer * this24,
                         syserr error,
                         string * msg,
                         Error * error_out,
                         int64_t _ln,
                         int32_t _fn);
static void _ch_ioerror3(fileWriter_F_defaultSerializer * this24,
                         syserr error,
                         string * msg,
                         Error * error_out,
                         int64_t _ln,
                         int32_t _fn);
static void lock2(fileWriter_T_defaultSerializer * this24,
                  Error * error_out,
                  int64_t _ln,
                  int32_t _fn);
static void lock3(fileWriter_F_defaultSerializer * this24,
                  Error * error_out,
                  int64_t _ln,
                  int32_t _fn);
static void unlock2(fileWriter_T_defaultSerializer * this24,
                    int64_t _ln,
                    int32_t _fn);
static void unlock3(fileWriter_F_defaultSerializer * this24);
static int64_t offset(fileWriter_F_defaultSerializer * this24);
static locale getLocaleOfIoRequest(fileWriter_F_defaultSerializer * this24,
                                   int64_t _ln,
                                   int32_t _fn);
static locale getLocaleOfIoRequest2(fileWriter_T_defaultSerializer * this24,
                                    int64_t _ln,
                                    int32_t _fn);
static fileReader_F_defaultDeserializer reader(file * this24,
                                               range_int64_t_low_one region,
                                               ioHintSet * hints,
                                               defaultDeserializer * deserializer3,
                                               Error * error_out,
                                               int64_t _ln,
                                               int32_t _fn);
static fileReader_T_defaultDeserializer reader2(file * this24,
                                                range_int64_t_low_one region,
                                                ioHintSet * hints,
                                                defaultDeserializer * deserializer3,
                                                Error * error_out,
                                                int64_t _ln,
                                                int32_t _fn);
static ioHintSet reader_default_hints(file * this24,
                                      Error * error_out);
static ioHintSet reader_default_hints2(file * this24,
                                       Error * error_out);
static range_int64_t_low_one reader_default_region(file * this24,
                                                   Error * error_out);
static range_int64_t_low_one reader_default_region2(file * this24,
                                                    Error * error_out);
static defaultDeserializer reader_default_deserializer(file * this24,
                                                       Error * error_out);
static defaultDeserializer reader_default_deserializer2(file * this24,
                                                        Error * error_out);
static fileReader_T_defaultDeserializer readerHelper(file * this24,
                                                     range_int64_t_low_one region,
                                                     ioHintSet * hints,
                                                     iostyleInternal * style,
                                                     defaultDeserializer * deserializer3,
                                                     Error * error_out,
                                                     int64_t _ln,
                                                     int32_t _fn);
static fileReader_F_defaultDeserializer readerHelper2(file * this24,
                                                      range_int64_t_low_one region,
                                                      ioHintSet * hints,
                                                      iostyleInternal * style,
                                                      defaultDeserializer * deserializer3,
                                                      Error * error_out,
                                                      int64_t _ln,
                                                      int32_t _fn);
static iostyleInternal readerHelper_default_style(file * this24,
                                                  Error * error_out,
                                                  int64_t _ln,
                                                  int32_t _fn);
static iostyleInternal readerHelper_default_style2(file * this24,
                                                   Error * error_out,
                                                   int64_t _ln,
                                                   int32_t _fn);
static fileWriter_T_defaultSerializer writer(file * this24,
                                             range_int64_t_low_one region,
                                             ioHintSet * hints,
                                             defaultSerializer * serializer2,
                                             Error * error_out,
                                             int64_t _ln,
                                             int32_t _fn);
static fileWriter_F_defaultSerializer writer2(file * this24,
                                              range_int64_t_low_one region,
                                              ioHintSet * hints,
                                              defaultSerializer * serializer2,
                                              Error * error_out,
                                              int64_t _ln,
                                              int32_t _fn);
static ioHintSet writer_default_hints(file * this24,
                                      Error * error_out);
static ioHintSet writer_default_hints2(file * this24,
                                       Error * error_out);
static range_int64_t_low_one writer_default_region(file * this24,
                                                   Error * error_out);
static range_int64_t_low_one writer_default_region2(file * this24,
                                                    Error * error_out);
static defaultSerializer writer_default_serializer(file * this24,
                                                   Error * error_out);
static defaultSerializer writer_default_serializer2(file * this24,
                                                    Error * error_out);
static fileWriter_T_defaultSerializer writerHelper(file * this24,
                                                   range_int64_t_low_one region,
                                                   ioHintSet * hints,
                                                   iostyleInternal * style,
                                                   defaultSerializer * serializer2,
                                                   Error * error_out,
                                                   int64_t _ln,
                                                   int32_t _fn);
static fileWriter_F_defaultSerializer writerHelper2(file * this24,
                                                    range_int64_t_low_one region,
                                                    ioHintSet * hints,
                                                    iostyleInternal * style,
                                                    defaultSerializer * serializer2,
                                                    Error * error_out,
                                                    int64_t _ln,
                                                    int32_t _fn);
static iostyleInternal writerHelper_default_style(file * this24,
                                                  Error * error_out,
                                                  int64_t _ln,
                                                  int32_t _fn);
static iostyleInternal writerHelper_default_style2(file * this24,
                                                   Error * error_out,
                                                   int64_t _ln,
                                                   int32_t _fn);
static syserr _write_text_internal(qio_channel_t * _channel_internal,
                                   ArrayInit x2,
                                   int64_t _ln,
                                   int32_t _fn);
static syserr _write_text_internal2(qio_channel_t * _channel_internal,
                                    string * x2,
                                    int64_t _ln,
                                    int32_t _fn);
static syserr _write_text_internal3(qio_channel_t * _channel_internal,
                                    int64_t x2,
                                    int64_t _ln,
                                    int32_t _fn);
static syserr _write_binary_internal(qio_channel_t * _channel_internal,
                                     ArrayInit x2,
                                     int64_t _ln,
                                     int32_t _fn);
static syserr _write_binary_internal10(qio_channel_t * _channel_internal,
                                       string * x2,
                                       int64_t _ln,
                                       int32_t _fn);
static syserr _write_binary_internal11(qio_channel_t * _channel_internal,
                                       string * x2,
                                       int64_t _ln,
                                       int32_t _fn);
static syserr _write_binary_internal12(qio_channel_t * _channel_internal,
                                       string * x2,
                                       int64_t _ln,
                                       int32_t _fn);
static syserr _write_binary_internal2(qio_channel_t * _channel_internal,
                                      uint8_t x2,
                                      int64_t _ln,
                                      int32_t _fn);
static syserr _write_binary_internal3(qio_channel_t * _channel_internal,
                                      ArrayInit x2,
                                      int64_t _ln,
                                      int32_t _fn);
static syserr _write_binary_internal4(qio_channel_t * _channel_internal,
                                      ArrayInit x2,
                                      int64_t _ln,
                                      int32_t _fn);
static syserr _write_binary_internal5(qio_channel_t * _channel_internal,
                                      int64_t x2,
                                      int64_t _ln,
                                      int32_t _fn);
static syserr _write_binary_internal6(qio_channel_t * _channel_internal,
                                      uint8_t x2,
                                      int64_t _ln,
                                      int32_t _fn);
static syserr _write_binary_internal7(qio_channel_t * _channel_internal,
                                      int64_t x2,
                                      int64_t _ln,
                                      int32_t _fn);
static syserr _write_binary_internal8(qio_channel_t * _channel_internal,
                                      int64_t x2,
                                      int64_t _ln,
                                      int32_t _fn);
static syserr _write_binary_internal9(qio_channel_t * _channel_internal,
                                      uint8_t x2,
                                      int64_t _ln,
                                      int32_t _fn);
static string _constructIoErrorMsg(fileWriter_F_defaultSerializer * this24,
                                   string * x2,
                                   int64_t _ln,
                                   int32_t _fn);
static string _constructIoErrorMsg2(fileWriter_F_defaultSerializer * this24,
                                    ArrayInit x2,
                                    int64_t _ln,
                                    int32_t _fn);
static string _constructIoErrorMsg3(fileWriter_F_defaultSerializer * this24,
                                    int64_t x2,
                                    int64_t _ln,
                                    int32_t _fn);
static string _constructIoErrorMsg4(fileWriter_F_defaultSerializer * this24,
                                    chpl_ioNewline * x2,
                                    int64_t _ln,
                                    int32_t _fn);
static string escapedNonUTF8ErrorMessage(int64_t _ln,
                                         int32_t _fn);
static void _serializeOne(fileWriter_T_defaultSerializer * this24,
                          _owned_Remote_R * x2,
                          locale * loc,
                          Error * error_out,
                          int64_t _ln,
                          int32_t _fn);
static void _serializeOne10(fileWriter_F_defaultSerializer * this24,
                            _owned__RemoteVarContainer_R * x2,
                            locale * loc,
                            Error * error_out,
                            int64_t _ln,
                            int32_t _fn);
static void _serializeOne2(fileWriter_T_defaultSerializer * this24,
                           chpl_ioNewline * x2,
                           locale * loc,
                           Error * error_out,
                           int64_t _ln,
                           int32_t _fn);
static void _serializeOne3(fileWriter_F_defaultSerializer * this24,
                           int64_t x2,
                           locale * loc,
                           Error * error_out,
                           int64_t _ln,
                           int32_t _fn);
static void _serializeOne4(fileWriter_T_defaultSerializer * this24,
                           R * x2,
                           locale * loc,
                           Error * error_out,
                           int64_t _ln,
                           int32_t _fn);
static void _serializeOne5(fileWriter_T_defaultSerializer * this24,
                           string * x2,
                           locale * loc,
                           Error * error_out,
                           int64_t _ln,
                           int32_t _fn);
static void _serializeOne6(fileWriter_F_defaultSerializer * this24,
                           ArrayInit x2,
                           locale * loc,
                           Error * error_out,
                           int64_t _ln,
                           int32_t _fn);
static void _serializeOne7(fileWriter_T_defaultSerializer * this24,
                           Remote_R x2,
                           locale * loc,
                           Error * error_out,
                           int64_t _ln,
                           int32_t _fn);
static void _serializeOne8(fileWriter_F_defaultSerializer * this24,
                           R * x2,
                           locale * loc,
                           Error * error_out,
                           int64_t _ln,
                           int32_t _fn);
static void _serializeOne9(fileWriter_F_defaultSerializer * this24,
                           string * x2,
                           locale * loc,
                           Error * error_out,
                           int64_t _ln,
                           int32_t _fn);
static void _writeOne(fileWriter_F_defaultSerializer * this24,
                      chpl_ioNewline * x2,
                      locale * loc,
                      Error * error_out,
                      int64_t _ln,
                      int32_t _fn);
static void _writeOne2(fileWriter_F_defaultSerializer * this24,
                       ArrayInit x2,
                       locale * loc,
                       Error * error_out,
                       int64_t _ln,
                       int32_t _fn);
static void _writeOne3(fileWriter_F_defaultSerializer * this24,
                       string * x2,
                       locale * loc,
                       Error * error_out,
                       int64_t _ln,
                       int32_t _fn);
static void _writeOne4(fileWriter_F_defaultSerializer * this24,
                       int64_t x2,
                       locale * loc,
                       Error * error_out,
                       int64_t _ln,
                       int32_t _fn);
static syserr _write_one_internal(qio_channel_t * _channel_internal,
                                  chpl_ioNewline * x2,
                                  locale * loc,
                                  Error * error_out,
                                  int64_t _ln,
                                  int32_t _fn);
static syserr _write_one_internal2(qio_channel_t * _channel_internal,
                                   int64_t x2,
                                   locale * loc,
                                   Error * error_out,
                                   int64_t _ln,
                                   int32_t _fn);
static syserr _write_one_internal3(qio_channel_t * _channel_internal,
                                   string * x2,
                                   locale * loc,
                                   Error * error_out,
                                   int64_t _ln,
                                   int32_t _fn);
static syserr _write_one_internal4(qio_channel_t * _channel_internal,
                                   ArrayInit x2,
                                   locale * loc,
                                   Error * error_out,
                                   int64_t _ln,
                                   int32_t _fn);
static string literalErrorHelper(string * x2,
                                 string * action,
                                 chpl_bool isLiteral,
                                 int64_t _ln,
                                 int32_t _fn);
static void _checkLiteralError(fileWriter_F_defaultSerializer * this24,
                               string * x2,
                               syserr err,
                               string * action,
                               chpl_bool isLiteral,
                               Error * error_out,
                               int64_t _ln,
                               int32_t _fn);
static void _writeLiteralCommon(fileWriter_F_defaultSerializer * this24,
                                string * x2,
                                Error * error_out,
                                int64_t _ln,
                                int32_t _fn);
static void writeLiteral(fileWriter_F_defaultSerializer * this24,
                         string * literal,
                         Error * error_out,
                         int64_t _ln,
                         int32_t _fn);
static string chpl_stringify(string * _e0_args,
                             uint64_t _e1_args,
                             int64_t _ln,
                             int32_t _fn);
static string chpl_stringify10(string * _e0_args,
                               int32_t _e1_args,
                               string * _e2_args,
                               int64_t _e3_args,
                               int64_t _ln,
                               int32_t _fn);
static string chpl_stringify11(string * _e0_args,
                               range_byteIndex_both_one _e1_args,
                               string * _e2_args,
                               int64_t _e3_args,
                               int64_t _ln,
                               int32_t _fn);
static string chpl_stringify12(c_string_rehook _e0_args,
                               int64_t _ln,
                               int32_t _fn);
static string chpl_stringify13(string * _e0_args,
                               range_int64_t_both_one _e1_args,
                               string * _e2_args,
                               int64_t _e3_args,
                               int64_t _ln,
                               int32_t _fn);
static string chpl_stringify14(string * _e0_args,
                               int64_t _e1_args,
                               string * _e2_args,
                               int64_t _ln,
                               int32_t _fn);
static string chpl_stringify15(string * _e0_args,
                               range_int64_t_low_one _e1_args,
                               string * _e2_args,
                               int64_t _e3_args,
                               int64_t _ln,
                               int32_t _fn);
static string chpl_stringify2(string * _e0_args,
                              range_byteIndex_high_one _e1_args,
                              string * _e2_args,
                              int64_t _e3_args,
                              int64_t _ln,
                              int32_t _fn);
static string chpl_stringify3(string * _e0_args,
                              int64_t _e1_args,
                              string * _e2_args,
                              int64_t _e3_args,
                              int64_t _ln,
                              int32_t _fn);
static string chpl_stringify4(string * _e0_args,
                              int64_t _e1_args,
                              string * _e2_args,
                              int64_t _e3_args,
                              string * _e4_args,
                              int64_t _ln,
                              int32_t _fn);
static string chpl_stringify5(string * _e0_args,
                              string * _e1_args,
                              string * _e2_args,
                              string * _e3_args,
                              int64_t _ln,
                              int32_t _fn);
static string chpl_stringify6(string * _e0_args,
                              string * _e1_args,
                              int64_t _e2_args,
                              string * _e3_args,
                              range_int64_t_both_one _e4_args,
                              int64_t _ln,
                              int32_t _fn);
static string chpl_stringify7(string * _e0_args,
                              int64_t _e1_args,
                              int64_t _ln,
                              int32_t _fn);
static string chpl_stringify8(string * _e0_args,
                              range_byteIndex_low_one _e1_args,
                              string * _e2_args,
                              int64_t _e3_args,
                              int64_t _ln,
                              int32_t _fn);
static string chpl_stringify9(string * _e0_args,
                              ArrayInit _e1_args,
                              string * _e2_args,
                              int64_t _ln,
                              int32_t _fn);
static int64_t readBinary(fileReader_F_defaultDeserializer * this24,
                          uint8_t * ptr,
                          int64_t maxBytes,
                          Error * error_out,
                          int64_t _ln,
                          int32_t _fn);
static void write10(fileWriter_F_defaultSerializer * this24,
                    int64_t _e0_args,
                    Error * error_out,
                    int64_t _ln,
                    int32_t _fn);
static void write11(fileWriter_T_defaultSerializer * this24,
                    Remote_R _e0_args,
                    chpl_ioNewline * _e1_args,
                    Error * error_out,
                    int64_t _ln,
                    int32_t _fn);
static void write12(fileWriter_F_defaultSerializer * this24,
                    _owned__RemoteVarContainer_R * _e0_args,
                    Error * error_out,
                    int64_t _ln,
                    int32_t _fn);
static void write13(fileWriter_T_defaultSerializer * this24,
                    string * _e0_args,
                    chpl_ioNewline * _e1_args,
                    Error * error_out,
                    int64_t _ln,
                    int32_t _fn);
static void write14(fileWriter_T_defaultSerializer * this24,
                    _owned_Remote_R * _e0_args,
                    Remote_R _e1_args,
                    chpl_ioNewline * _e2_args,
                    Error * error_out,
                    int64_t _ln,
                    int32_t _fn);
static void write6(fileWriter_T_defaultSerializer * this24,
                   string * _e0_args,
                   string * _e1_args,
                   string * _e2_args,
                   Remote_R _e3_args,
                   string * _e4_args,
                   R * _e5_args,
                   chpl_ioNewline * _e6_args,
                   Error * error_out,
                   int64_t _ln,
                   int32_t _fn);
static void write7(fileWriter_F_defaultSerializer * this24,
                   string * _e0_args,
                   ArrayInit _e1_args,
                   string * _e2_args,
                   Error * error_out,
                   int64_t _ln,
                   int32_t _fn);
static void write8(fileWriter_F_defaultSerializer * this24,
                   R * _e0_args,
                   Error * error_out,
                   int64_t _ln,
                   int32_t _fn);
static void write9(fileWriter_T_defaultSerializer * this24,
                   chpl_ioNewline * _e0_args,
                   Error * error_out,
                   int64_t _ln,
                   int32_t _fn);
static void writeln6(fileWriter_T_defaultSerializer * this24,
                     Error * error_out,
                     int64_t _ln,
                     int32_t _fn);
static void writeln10(fileWriter_T_defaultSerializer * this24,
                      Remote_R _e0_args,
                      Error * error_out,
                      int64_t _ln,
                      int32_t _fn);
static void writeln7(fileWriter_T_defaultSerializer * this24,
                     string * _e0_args,
                     Error * error_out,
                     int64_t _ln,
                     int32_t _fn);
static void writeln8(fileWriter_T_defaultSerializer * this24,
                     string * _e0_args,
                     string * _e1_args,
                     string * _e2_args,
                     Remote_R _e3_args,
                     string * _e4_args,
                     R * _e5_args,
                     Error * error_out,
                     int64_t _ln,
                     int32_t _fn);
static void writeln9(fileWriter_T_defaultSerializer * this24,
                     _owned_Remote_R * _e0_args,
                     Remote_R _e1_args,
                     Error * error_out,
                     int64_t _ln,
                     int32_t _fn);
static void close5(fileReader_F_defaultDeserializer * this24,
                   Error * error_out,
                   int64_t _ln,
                   int32_t _fn);
static void close6(fileWriter_F_defaultSerializer * this24,
                   Error * error_out,
                   int64_t _ln,
                   int32_t _fn);
static void chpl__init_InsertionSort(int64_t _ln,
                                     int32_t _fn);
static void chpl__init_List(int64_t _ln,
                            int32_t _fn);
static void chpl__init_MSBRadixSort(int64_t _ln,
                                    int32_t _fn);
static void chpl__init_Math(int64_t _ln,
                            int32_t _fn);
static int64_t _logBasePow2Help(uint64_t val,
                                int64_t baseLog2,
                                int64_t _ln,
                                int32_t _fn);
static int64_t chpl_logBasePow2(uint64_t val,
                                int64_t baseLog2,
                                int64_t _ln,
                                int32_t _fn);
static int64_t log22(uint64_t x2,
                     int64_t _ln,
                     int32_t _fn);
static void chpl__init_OS(int64_t _ln,
                          int32_t _fn);
static chpl_bool chpl___EQUALS_27(syserr a,
                                  int32_t b);
static chpl_bool chpl___EQUALS_28(syserr a,
                                  int64_t b,
                                  int64_t _ln,
                                  int32_t _fn);
static chpl_bool chpl___EXCLAMATION__ASSIGN_15(syserr a,
                                               int32_t b);
static chpl_bool chpl___EXCLAMATION__ASSIGN_16(syserr a,
                                               int64_t b,
                                               int64_t _ln,
                                               int32_t _fn);
static chpl_bool chpl___EXCLAMATION_2(syserr a);
static chpl_bool chpl_cond_test_method(syserr this24);
static syserr chpl___COLON_68(int32_t x2);
static syserr chpl___COLON_69(int64_t x2,
                              int64_t _ln,
                              int32_t _fn);
static void chpl___ASSIGN_86(syserr * ret,
                             syserr x2);
static int32_t EEOF3(void);
static int32_t ESHORT2(void);
static int32_t EFORMAT2(void);
static void chpl__auto_destroy_SystemError(SystemError this24,
                                           int64_t _ln,
                                           int32_t _fn);
static syserr * chpl_get_SystemError_err(SystemError this24,
                                         int64_t _ln,
                                         int32_t _fn);
static string * chpl_get_SystemError_details(SystemError this24,
                                             int64_t _ln,
                                             int32_t _fn);
static SystemError _new21(syserr err,
                          string * details,
                          int64_t _ln,
                          int32_t _fn);
static void init126(SystemError this24,
                    syserr err,
                    string * details,
                    int64_t _ln,
                    int32_t _fn);
static void message7(SystemError this24,
                     string * _retArg,
                     int64_t _ln,
                     int32_t _fn);
static _owned_Error createSystemOrChplError(syserr err,
                                            string * details,
                                            int64_t _ln,
                                            int32_t _fn);
static _owned_Error createSystemOrChplError2(int64_t err,
                                             string * details,
                                             int64_t _ln,
                                             int32_t _fn);
static _owned_SystemError createSystemError(syserr err,
                                            string * details,
                                            int64_t _ln,
                                            int32_t _fn);
static _owned_SystemError createSystemError2(int64_t err,
                                             string * details,
                                             int64_t _ln,
                                             int32_t _fn);
static void chpl__auto_destroy_BlockingIoError(BlockingIoError this24,
                                               int64_t _ln,
                                               int32_t _fn);
static BlockingIoError _new22(string * details,
                              syserr err,
                              int64_t _ln,
                              int32_t _fn);
static void init127(BlockingIoError this24,
                    string * details,
                    syserr err,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_ChildProcessError(ChildProcessError this24,
                                                 int64_t _ln,
                                                 int32_t _fn);
static ChildProcessError _new23(string * details,
                                syserr err,
                                int64_t _ln,
                                int32_t _fn);
static void init128(ChildProcessError this24,
                    string * details,
                    syserr err,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_ConnectionError(ConnectionError this24,
                                               int64_t _ln,
                                               int32_t _fn);
static void init129(ConnectionError this24,
                    syserr err,
                    string * details,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_BrokenPipeError(BrokenPipeError this24,
                                               int64_t _ln,
                                               int32_t _fn);
static BrokenPipeError _new24(string * details,
                              syserr err,
                              int64_t _ln,
                              int32_t _fn);
static void init130(BrokenPipeError this24,
                    string * details,
                    syserr err,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_ConnectionAbortedError(ConnectionAbortedError this24,
                                                      int64_t _ln,
                                                      int32_t _fn);
static ConnectionAbortedError _new25(string * details,
                                     syserr err,
                                     int64_t _ln,
                                     int32_t _fn);
static void init131(ConnectionAbortedError this24,
                    string * details,
                    syserr err,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_ConnectionRefusedError(ConnectionRefusedError this24,
                                                      int64_t _ln,
                                                      int32_t _fn);
static ConnectionRefusedError _new26(string * details,
                                     syserr err,
                                     int64_t _ln,
                                     int32_t _fn);
static void init132(ConnectionRefusedError this24,
                    string * details,
                    syserr err,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_ConnectionResetError(ConnectionResetError this24,
                                                    int64_t _ln,
                                                    int32_t _fn);
static ConnectionResetError _new27(string * details,
                                   syserr err,
                                   int64_t _ln,
                                   int32_t _fn);
static void init133(ConnectionResetError this24,
                    string * details,
                    syserr err,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_FileExistsError(FileExistsError this24,
                                               int64_t _ln,
                                               int32_t _fn);
static FileExistsError _new28(string * details,
                              syserr err,
                              int64_t _ln,
                              int32_t _fn);
static void init134(FileExistsError this24,
                    string * details,
                    syserr err,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_FileNotFoundError(FileNotFoundError this24,
                                                 int64_t _ln,
                                                 int32_t _fn);
static FileNotFoundError _new29(string * details,
                                syserr err,
                                int64_t _ln,
                                int32_t _fn);
static void init135(FileNotFoundError this24,
                    string * details,
                    syserr err,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_InterruptedError(InterruptedError this24,
                                                int64_t _ln,
                                                int32_t _fn);
static InterruptedError _new30(string * details,
                               syserr err,
                               int64_t _ln,
                               int32_t _fn);
static void init136(InterruptedError this24,
                    string * details,
                    syserr err,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_IsADirectoryError(IsADirectoryError this24,
                                                 int64_t _ln,
                                                 int32_t _fn);
static IsADirectoryError _new31(string * details,
                                syserr err,
                                int64_t _ln,
                                int32_t _fn);
static void init137(IsADirectoryError this24,
                    string * details,
                    syserr err,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_NotADirectoryError(NotADirectoryError this24,
                                                  int64_t _ln,
                                                  int32_t _fn);
static NotADirectoryError _new32(string * details,
                                 syserr err,
                                 int64_t _ln,
                                 int32_t _fn);
static void init138(NotADirectoryError this24,
                    string * details,
                    syserr err,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_PermissionError(PermissionError this24,
                                               int64_t _ln,
                                               int32_t _fn);
static PermissionError _new33(string * details,
                              syserr err,
                              int64_t _ln,
                              int32_t _fn);
static void init139(PermissionError this24,
                    string * details,
                    syserr err,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_ProcessLookupError(ProcessLookupError this24,
                                                  int64_t _ln,
                                                  int32_t _fn);
static ProcessLookupError _new34(string * details,
                                 syserr err,
                                 int64_t _ln,
                                 int32_t _fn);
static void init140(ProcessLookupError this24,
                    string * details,
                    syserr err,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_TimeoutError(TimeoutError this24,
                                            int64_t _ln,
                                            int32_t _fn);
static TimeoutError _new35(string * details,
                           syserr err,
                           int64_t _ln,
                           int32_t _fn);
static void init141(TimeoutError this24,
                    string * details,
                    syserr err,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_IoError(IoError this24,
                                       int64_t _ln,
                                       int32_t _fn);
static IoError _new36(syserr err,
                      string * details,
                      int64_t _ln,
                      int32_t _fn);
static void init142(IoError this24,
                    syserr err,
                    string * details,
                    int64_t _ln,
                    int32_t _fn);
static void chpl__auto_destroy_EofError(EofError this24,
                                        int64_t _ln,
                                        int32_t _fn);
static string * chpl_get_EofError_details(EofError this24,
                                          int64_t _ln,
                                          int32_t _fn);
static EofError _new37(string * details,
                       string * err_msg,
                       int64_t _ln,
                       int32_t _fn);
static void init143(EofError this24,
                    string * details,
                    string * err_msg,
                    int64_t _ln,
                    int32_t _fn);
static void message8(EofError this24,
                     string * _retArg,
                     int64_t _ln,
                     int32_t _fn);
static void chpl__auto_destroy_UnexpectedEofError(UnexpectedEofError this24,
                                                  int64_t _ln,
                                                  int32_t _fn);
static string * chpl_get_UnexpectedEofError_details(UnexpectedEofError this24,
                                                    int64_t _ln,
                                                    int32_t _fn);
static UnexpectedEofError _new38(string * details,
                                 string * err_msg,
                                 int64_t _ln,
                                 int32_t _fn);
static void init144(UnexpectedEofError this24,
                    string * details,
                    string * err_msg,
                    int64_t _ln,
                    int32_t _fn);
static void message9(UnexpectedEofError this24,
                     string * _retArg,
                     int64_t _ln,
                     int32_t _fn);
static void chpl__auto_destroy_BadFormatError(BadFormatError this24,
                                              int64_t _ln,
                                              int32_t _fn);
static string * chpl_get_BadFormatError_details(BadFormatError this24,
                                                int64_t _ln,
                                                int32_t _fn);
static BadFormatError _new39(string * details,
                             string * err_msg,
                             int64_t _ln,
                             int32_t _fn);
static void init145(BadFormatError this24,
                    string * details,
                    string * err_msg,
                    int64_t _ln,
                    int32_t _fn);
static void message10(BadFormatError this24,
                      string * _retArg,
                      int64_t _ln,
                      int32_t _fn);
static string quote_string(string * s,
                           int64_t len,
                           int64_t _ln,
                           int32_t _fn);
static void ioerror(syserr error,
                    string * msg,
                    string * path,
                    int64_t offset2,
                    Error * error_out,
                    int64_t _ln,
                    int32_t _fn);
static void ioerror2(syserr error,
                     string * msg,
                     string * path,
                     Error * error_out,
                     int64_t _ln,
                     int32_t _fn);
static void ioerror3(syserr error,
                     string * msg,
                     Error * error_out,
                     int64_t _ln,
                     int32_t _fn);
static void chpl__init_POSIX(int64_t _ln,
                             int32_t _fn);
static void memmove2(void * dest,
                     void * src,
                     uint64_t n);
static void memcpy2(void * dest,
                    void * src,
                    uint64_t n);
static int64_t memcmp2(void * s1,
                       void * s2,
                       uint64_t n,
                       int64_t _ln,
                       int32_t _fn);
static void * memset2(void * s,
                      int8_t c,
                      uint64_t n,
                      int64_t _ln,
                      int32_t _fn);
static void * memset3(void * s,
                      int64_t c,
                      uint64_t n,
                      int64_t _ln,
                      int32_t _fn);
static void chpl__init_QuickSort(int64_t _ln,
                                 int32_t _fn);
static void chpl__init_RadixSortHelp(int64_t _ln,
                                     int32_t _fn);
static void chpl__init_RangeChunk(int64_t _ln,
                                  int32_t _fn);
static void chpl__init_Reflection(int64_t _ln,
                                  int32_t _fn);
static void chpl__init_Regex(int64_t _ln,
                             int32_t _fn);
static void chpl__init_RegexIoSupport(int64_t _ln,
                                      int32_t _fn);
static void chpl__init_Search(int64_t _ln,
                              int32_t _fn);
static void chpl__init_ShallowCopy(int64_t _ln,
                                   int32_t _fn);
static void chpl__init_ShellSort(int64_t _ln,
                                 int32_t _fn);
static void chpl__init_Sort(int64_t _ln,
                            int32_t _fn);
static void chpl__deinit_Sort(void);
static void chpl__auto_destroy_DefaultComparator(DefaultComparator * this24);
static void init146(DefaultComparator * this24);
static void chpl__auto_destroy_ReverseComparator(ReverseComparator_DefaultComparator * this24);
static void init147(ReverseComparator_DefaultComparator * this24);
static void chpl__init_TimSort(int64_t _ln,
                               int32_t _fn);
static void chpl__init_TwoArrayPartitioning(int64_t _ln,
                                            int32_t _fn);
static void chpl__init_TwoArrayRadixSort(int64_t _ln,
                                         int32_t _fn);
static void chpl__init_Types(int64_t _ln,
                             int32_t _fn);
static uint64_t safeCast(uint64_t this24,
                         int64_t _ln,
                         int32_t _fn);
static int32_t safeCast2(int64_t this24,
                         int64_t _ln,
                         int32_t _fn);
static int64_t safeCast3(int64_t this24,
                         int64_t _ln,
                         int32_t _fn);
static int64_t safeCast4(uint64_t this24,
                         int64_t _ln,
                         int32_t _fn);
static uint64_t safeCast5(int64_t this24,
                          int64_t _ln,
                          int32_t _fn);
static int64_t safeCast6(int32_t this24,
                         int64_t _ln,
                         int32_t _fn);
static int32_t safeCast7(int8_t this24,
                         int64_t _ln,
                         int32_t _fn);
static _owned_IllegalArgumentError2 chpl_checkValue(uint64_t this24,
                                                    int64_t _ln,
                                                    int32_t _fn);
static _owned_IllegalArgumentError2 chpl_checkValue2(int64_t this24,
                                                     int64_t _ln,
                                                     int32_t _fn);
static _owned_IllegalArgumentError2 chpl_checkValue3(int32_t this24,
                                                     int64_t _ln,
                                                     int32_t _fn);
static _owned_IllegalArgumentError2 chpl_checkValue4(int64_t this24,
                                                     int64_t _ln,
                                                     int32_t _fn);
static _owned_IllegalArgumentError2 chpl_checkValue5(int8_t this24,
                                                     int64_t _ln,
                                                     int32_t _fn);
static _owned_IllegalArgumentError2 chpl_checkValue6(int64_t this24,
                                                     int64_t _ln,
                                                     int32_t _fn);
static _owned_IllegalArgumentError2 chpl_checkValue7(uint64_t this24,
                                                     int64_t _ln,
                                                     int32_t _fn);
static void chpl__init_Remote(int64_t _ln,
                              int32_t _fn);
static void _auto__RemoteVarContainer_serialize(chpl___RemoteVarContainer_R this24,
                                                fileWriter_F_defaultSerializer * writer3,
                                                defaultSerializer * serializer2,
                                                Error * error_out,
                                                int64_t _ln,
                                                int32_t _fn);
static chpl___RemoteVarContainer_R _new40(R * containedValue,
                                          int64_t _ln,
                                          int32_t _fn);
static void chpl__auto_destroy__RemoteVarContainer(chpl___RemoteVarContainer_R this24,
                                                   int64_t _ln,
                                                   int32_t _fn);
static void init148(chpl___RemoteVarContainer_R this24,
                    R * containedValue,
                    int64_t _ln,
                    int32_t _fn);
static R * chpl_get__RemoteVarContainer_containedValue(chpl___RemoteVarContainer_R this24,
                                                       int64_t _ln,
                                                       int32_t _fn);
static void _auto_Remote_serialize(Remote_R this24,
                                   fileWriter_F_defaultSerializer * writer3,
                                   defaultSerializer * serializer2,
                                   Error * error_out,
                                   int64_t _ln,
                                   int32_t _fn);
static void chpl__auto_destroy_Remote(Remote_R this24,
                                      int64_t _ln,
                                      int32_t _fn);
static _owned__RemoteVarContainer_R * chpl_get_Remote_value(Remote_R this24,
                                                            int64_t _ln,
                                                            int32_t _fn);
static Remote_R * get2(Remote_R * this24);
static Remote_R _new41(_owned__RemoteVarContainer_R * value,
                       int64_t _ln,
                       int32_t _fn);
static void init149(Remote_R this24,
                    _owned__RemoteVarContainer_R * value);
static locale defaultDevice(void);
static _owned_Remote_R chpl__buildRemoteWrapper(locale * loc,
                                                _tr_chpl__thunk2 * tr,
                                                int64_t _ln,
                                                int32_t _fn);
static void chpl__init_remoteTest(int64_t _ln,
                                  int32_t _fn);
int64_t chpl_gen_main(chpl_main_argument * _arg);
static void chpl_user_main(void);
static void chpl__deinit_remoteTest(void);
static void _auto_R_serialize(R * this24,
                              fileWriter_F_defaultSerializer * writer3,
                              defaultSerializer * serializer2,
                              Error * error_out,
                              int64_t _ln,
                              int32_t _fn);
static void chpl__auto_destroy_R(R * this24);
static void init150(R * this24,
                    int64_t n);
static _tr_chpl__thunk2 chpl__thunk2(void);
static R invoke(_tr_chpl__thunk2 * this24);
/*** Function Pointer Table ***/

extern const chpl_fn_p chpl_ftable[];
extern const chpl_fn_info chpl_finfo[];
/*** Virtual Method Table ***/

extern const chpl_fn_p chpl_vmtable[];
/*** Global Variables ***/

static uint8_t byteType;
static c_ptr_uint8_t bufferType;
static int32_t locIdType;
static AtomicT_int64_t numPrivateObjects;
static int64_t nullPid;
static chpl_bool rootLocaleInitialized;
static int64_t chpl_unstableInternalSymbolForTesting;
static ArrayInit chpl_arrayInitMethod;
static chpl___EndCount_AtomicT_int64_t_int64_t _remoteEndCountType;
static chpl_ModuleDeinit chpl_moduleDeinitFuns;
static chpl_bool chpl__testParOn;
static _real64 defaultHashTableResizeThreshold;
static int32_t chpl_nodeID_t;
static int32_t chpl_sublocID_t;
static locale nilLocale;
static locale defaultLocale;
static locale dummyLocale;
static locale rootLocale;
static locale origRootLocale;
static int64_t numLocales;
static bytes _bytes_literal_2828;
static bytes _bytes_literal_2829;
static bytes _bytes_literal_2830;
static bytes _bytes_literal_2831;
static bytes _bytes_literal_2832;
static bytes _bytes_literal_2833;
static bytes _bytes_literal_2834;
static bytes _bytes_literal_2835;
static bytes _bytes_literal_2847;
static bytes _bytes_literal_2848;
static bytes _bytes_literal_2849;
static bytes _bytes_literal_2850;
static bytes _bytes_literal_2856;
static bytes _bytes_literal_2857;
static bytes _bytes_literal_2858;
static bytes _bytes_literal_2859;
static bytes _bytes_literal_2860;
static bytes _bytes_literal_2861;
static bytes _bytes_literal_2869;
static bytes _bytes_literal_2870;
static bytes _bytes_literal_2871;
static bytes _bytes_literal_2872;
static bytes _bytes_literal_2873;
static bytes _bytes_literal_2874;
static bytes _bytes_literal_2875;
static bytes _bytes_literal_2876;
static bytes _bytes_literal_2877;
static bytes _bytes_literal_2878;
static bytes _bytes_literal_2890;
static bytes _bytes_literal_2891;
static bytes _bytes_literal_2892;
static bytes _bytes_literal_2893;
static bytes _bytes_literal_2894;
static bytes _bytes_literal_2895;
static bytes _bytes_literal_2929;
static bytes _bytes_literal_2930;
static bytes _bytes_literal_2931;
static bytes _bytes_literal_2932;
static bytes _bytes_literal_2933;
static bytes _bytes_literal_2934;
static bytes _bytes_literal_2935;
static bytes _bytes_literal_2936;
static bytes _bytes_literal_2937;
static bytes _bytes_literal_2938;
static bytes _bytes_literal_2950;
static bytes _bytes_literal_2951;
static bytes _bytes_literal_2952;
static bytes _bytes_literal_2953;
static bytes _bytes_literal_2954;
static bytes _bytes_literal_2955;
static bytes _bytes_literal_2956;
static bytes _bytes_literal_2957;
static bytes _bytes_literal_2965;
static bytes _bytes_literal_2966;
static bytes _bytes_literal_2967;
static bytes _bytes_literal_2968;
static bytes _bytes_literal_2969;
static bytes _bytes_literal_2970;
static bytes _bytes_literal_2971;
static bytes _bytes_literal_2972;
static bytes _bytes_literal_2973;
static bytes _bytes_literal_2974;
static bytes _bytes_literal_2987;
static bytes _bytes_literal_2988;
static bytes _bytes_literal_2989;
static bytes _bytes_literal_2990;
static bytes _bytes_literal_2991;
static bytes _bytes_literal_2992;
static bytes _bytes_literal_2993;
static bytes _bytes_literal_2994;
static bytes _bytes_literal_2995;
static bytes _bytes_literal_3006;
static bytes _bytes_literal_3007;
static bytes _bytes_literal_3008;
static bytes _bytes_literal_3009;
static bytes _bytes_literal_3010;
static bytes _bytes_literal_3011;
static bytes _bytes_literal_3012;
static bytes _bytes_literal_3013;
static bytes _bytes_literal_3014;
static bytes _bytes_literal_3024;
static bytes _bytes_literal_3025;
static bytes _bytes_literal_3026;
static bytes _bytes_literal_3027;
static bytes _bytes_literal_3028;
static bytes _bytes_literal_3029;
static bytes _bytes_literal_3030;
static bytes _bytes_literal_3031;
static bytes _bytes_literal_3041;
static bytes _bytes_literal_3042;
static bytes _bytes_literal_3043;
static bytes _bytes_literal_3048;
static bytes _bytes_literal_3049;
static bytes _bytes_literal_3050;
static bytes _bytes_literal_3051;
static bytes _bytes_literal_3052;
static bytes _bytes_literal_3053;
static bytes _bytes_literal_3054;
static bytes _bytes_literal_3055;
static bytes _bytes_literal_3056;
static bytes _bytes_literal_3057;
static bytes _bytes_literal_3058;
static bytes _bytes_literal_3059;
static bytes _bytes_literal_3060;
static bytes _bytes_literal_3061;
static bytes _bytes_literal_3077;
static bytes _bytes_literal_3078;
static bytes _bytes_literal_3079;
static bytes _bytes_literal_3080;
static bytes _bytes_literal_3081;
static bytes _bytes_literal_3082;
static bytes _bytes_literal_3083;
static bytes _bytes_literal_3084;
static bytes _bytes_literal_3085;
static bytes _bytes_literal_3086;
static bytes _bytes_literal_3087;
static bytes _bytes_literal_3088;
static bytes _bytes_literal_3134;
static bytes _bytes_literal_3135;
static bytes _bytes_literal_3136;
static bytes _bytes_literal_3137;
static bytes _bytes_literal_3138;
static bytes _bytes_literal_3139;
static bytes _bytes_literal_3147;
static bytes _bytes_literal_3148;
static bytes _bytes_literal_3149;
static bytes _bytes_literal_3150;
static bytes _bytes_literal_3151;
static bytes _bytes_literal_3152;
static bytes _bytes_literal_3161;
static bytes _bytes_literal_3162;
static bytes _bytes_literal_3163;
static bytes _bytes_literal_3164;
static bytes _bytes_literal_3165;
static bytes _bytes_literal_3166;
static bytes _bytes_literal_3174;
static bytes _bytes_literal_3175;
static bytes _bytes_literal_3176;
static bytes _bytes_literal_3177;
static bytes _bytes_literal_3185;
static bytes _bytes_literal_3186;
static bytes _bytes_literal_3187;
static bytes _bytes_literal_3188;
static string _str_literal_2793;
static string _str_literal_2836;
static string _str_literal_2837;
static string _str_literal_2838;
static string _str_literal_2839;
static string _str_literal_2840;
static string _str_literal_2841;
static string _str_literal_2842;
static string _str_literal_2843;
static string _str_literal_2844;
static string _str_literal_2845;
static string _str_literal_2846;
static string _str_literal_2851;
static string _str_literal_2852;
static string _str_literal_2853;
static string _str_literal_2854;
static string _str_literal_2855;
static string _str_literal_2862;
static string _str_literal_2863;
static string _str_literal_2864;
static string _str_literal_2865;
static string _str_literal_2866;
static string _str_literal_2867;
static string _str_literal_2868;
static string _str_literal_2879;
static string _str_literal_2880;
static string _str_literal_2881;
static string _str_literal_2882;
static string _str_literal_2883;
static string _str_literal_2884;
static string _str_literal_2885;
static string _str_literal_2886;
static string _str_literal_2887;
static string _str_literal_2888;
static string _str_literal_2889;
static string _str_literal_2896;
static string _str_literal_2897;
static string _str_literal_2898;
static string _str_literal_2899;
static string _str_literal_2900;
static string _str_literal_2901;
static string _str_literal_2902;
static string _str_literal_2904;
static string _str_literal_2905;
static string _str_literal_2928;
static string _str_literal_2939;
static string _str_literal_2940;
static string _str_literal_2941;
static string _str_literal_2942;
static string _str_literal_2943;
static string _str_literal_2944;
static string _str_literal_2945;
static string _str_literal_2946;
static string _str_literal_2947;
static string _str_literal_2948;
static string _str_literal_2949;
static string _str_literal_2958;
static string _str_literal_2959;
static string _str_literal_2960;
static string _str_literal_2961;
static string _str_literal_2962;
static string _str_literal_2963;
static string _str_literal_2964;
static string _str_literal_2975;
static string _str_literal_2976;
static string _str_literal_2977;
static string _str_literal_2978;
static string _str_literal_2979;
static string _str_literal_2980;
static string _str_literal_2981;
static string _str_literal_2982;
static string _str_literal_2983;
static string _str_literal_2984;
static string _str_literal_2985;
static string _str_literal_2986;
static string _str_literal_2996;
static string _str_literal_2997;
static string _str_literal_2998;
static string _str_literal_2999;
static string _str_literal_3000;
static string _str_literal_3001;
static string _str_literal_3002;
static string _str_literal_3003;
static string _str_literal_3004;
static string _str_literal_3005;
static string _str_literal_3015;
static string _str_literal_3016;
static string _str_literal_3017;
static string _str_literal_3018;
static string _str_literal_3019;
static string _str_literal_3020;
static string _str_literal_3021;
static string _str_literal_3022;
static string _str_literal_3023;
static string _str_literal_3032;
static string _str_literal_3033;
static string _str_literal_3034;
static string _str_literal_3035;
static string _str_literal_3036;
static string _str_literal_3037;
static string _str_literal_3038;
static string _str_literal_3039;
static string _str_literal_3040;
static string _str_literal_3044;
static string _str_literal_3045;
static string _str_literal_3046;
static string _str_literal_3047;
static string _str_literal_3062;
static string _str_literal_3063;
static string _str_literal_3064;
static string _str_literal_3065;
static string _str_literal_3066;
static string _str_literal_3067;
static string _str_literal_3068;
static string _str_literal_3069;
static string _str_literal_3070;
static string _str_literal_3071;
static string _str_literal_3072;
static string _str_literal_3073;
static string _str_literal_3074;
static string _str_literal_3075;
static string _str_literal_3076;
static string _str_literal_3089;
static string _str_literal_3090;
static string _str_literal_3091;
static string _str_literal_3092;
static string _str_literal_3093;
static string _str_literal_3094;
static string _str_literal_3095;
static string _str_literal_3096;
static string _str_literal_3097;
static string _str_literal_3098;
static string _str_literal_3099;
static string _str_literal_3100;
static string _str_literal_3101;
static string _str_literal_3132;
static string _str_literal_3140;
static string _str_literal_3141;
static string _str_literal_3142;
static string _str_literal_3143;
static string _str_literal_3144;
static string _str_literal_3145;
static string _str_literal_3146;
static string _str_literal_3153;
static string _str_literal_3154;
static string _str_literal_3155;
static string _str_literal_3156;
static string _str_literal_3157;
static string _str_literal_3158;
static string _str_literal_3159;
static string _str_literal_3160;
static string _str_literal_3167;
static string _str_literal_3168;
static string _str_literal_3169;
static string _str_literal_3170;
static string _str_literal_3171;
static string _str_literal_3172;
static string _str_literal_3173;
static string _str_literal_3178;
static string _str_literal_3179;
static string _str_literal_3180;
static string _str_literal_3181;
static string _str_literal_3182;
static string _str_literal_3183;
static string _str_literal_3189;
static string _str_literal_3190;
static string _str_literal_3191;
static string _str_literal_3192;
static string _str_literal_3193;
static string _str_literal_3373;
static string _str_literal_2569;
static bytes _bytes_literal_226;
static string _str_literal_2367;
static string _str_literal_2563;
static string _str_literal_2564;
static string _str_literal_2368;
static bytes _bytes_literal_227;
static string _str_literal_946;
static string _str_literal_980;
static string _str_literal_981;
static string _str_literal_2290;
static string _str_literal_2552;
static string _str_literal_102;
static string _str_literal_2281;
static string _str_literal_2553;
static string _str_literal_187;
static string _str_literal_2554;
static string _str_literal_3217;
static string _str_literal_103;
static string _str_literal_2282;
static string _str_literal_741;
static string _str_literal_228;
static string _str_literal_2283;
static string _str_literal_2492;
static string _str_literal_2284;
static string _str_literal_2768;
static string _str_literal_2285;
static string _str_literal_188;
static string _str_literal_1975;
static string _str_literal_3218;
static string _str_literal_947;
static string _str_literal_1976;
static string _str_literal_2286;
static string _str_literal_2287;
static string _str_literal_29;
static string _str_literal_2288;
static string _str_literal_104;
static string _str_literal_2289;
static string _str_literal_229;
static string _str_literal_2532;
static string _str_literal_1977;
static string _str_literal_1978;
static string _str_literal_2560;
static string _str_literal_2769;
static string _str_literal_189;
static string _str_literal_2570;
static string _str_literal_1979;
static string _str_literal_216;
static string _str_literal_370;
static string _str_literal_1557;
static string _str_literal_217;
static string _str_literal_504;
static string _str_literal_742;
static string _str_literal_105;
static string _str_literal_106;
static string _str_literal_1980;
static string _str_literal_2136;
static string _str_literal_190;
static string _str_literal_3219;
static string _str_literal_505;
static string _str_literal_218;
static string _str_literal_506;
static string _str_literal_219;
static string _str_literal_507;
static string _str_literal_191;
static string _str_literal_2519;
static string _str_literal_3220;
static string _str_literal_107;
static string _str_literal_508;
static string _str_literal_601;
static string _str_literal_108;
static string _str_literal_485;
static string _str_literal_509;
static string _str_literal_3221;
static string _str_literal_510;
static string _str_literal_109;
static string _str_literal_1558;
static string _str_literal_15;
static string _str_literal_1981;
static string _str_literal_602;
static string _str_literal_192;
static string _str_literal_2240;
static string _str_literal_1982;
static string _str_literal_2561;
static string _str_literal_488;
static string _str_literal_955;
static string _str_literal_2512;
static string _str_literal_1983;
static string _str_literal_956;
static string _str_literal_193;
static string _str_literal_603;
static string _str_literal_2252;
static string _str_literal_2253;
static string _str_literal_194;
static string _str_literal_2254;
static string _str_literal_2562;
static string _str_literal_221;
static string _str_literal_222;
static string _str_literal_256;
static string _str_literal_257;
static string _str_literal_2241;
static string _str_literal_557;
static string _str_literal_604;
static string _str_literal_1102;
static string _str_literal_110;
static string _str_literal_710;
static string _str_literal_711;
static string _str_literal_195;
static string _str_literal_223;
static string _str_literal_2249;
static string _str_literal_743;
static string _str_literal_258;
static string _str_literal_1193;
static string _str_literal_196;
static string _str_literal_2355;
static string _str_literal_2356;
static string _str_literal_259;
static string _str_literal_2533;
static string _str_literal_558;
static string _str_literal_712;
static string _str_literal_2534;
static string _str_literal_515;
static string _str_literal_1021;
static string _str_literal_16;
static string _str_literal_17;
static string _str_literal_197;
static string _str_literal_2137;
static string _str_literal_2536;
static string _str_literal_2537;
static string _str_literal_631;
static string _str_literal_2256;
static string _str_literal_2538;
static string _str_literal_489;
static string _str_literal_490;
static string _str_literal_744;
static string _str_literal_745;
static string _str_literal_2138;
static string _str_literal_198;
static string _str_literal_2301;
static string _str_literal_2567;
static string _str_literal_3359;
static string _str_literal_3360;
static string _str_literal_3361;
static string _str_literal_1559;
static string _str_literal_559;
static string _str_literal_2242;
static string _str_literal_199;
static string _str_literal_2243;
static string _str_literal_2244;
static string _str_literal_985;
static string _str_literal_2357;
static string _str_literal_2513;
static string _str_literal_986;
static string _str_literal_1022;
static string _str_literal_1788;
static string _str_literal_200;
static string _str_literal_2245;
static string _str_literal_713;
static string _str_literal_1105;
static string _str_literal_2257;
static string _str_literal_2246;
static string _str_literal_2258;
static string _str_literal_232;
static string _str_literal_1789;
static string _str_literal_201;
static string _str_literal_560;
static string _str_literal_714;
static string _str_literal_1562;
static string _str_literal_1563;
static string _str_literal_1790;
static string _str_literal_202;
static string _str_literal_3222;
static string _str_literal_2259;
static string _str_literal_953;
static string _str_literal_1791;
static string _str_literal_1024;
static string _str_literal_952;
static string _str_literal_203;
static string _str_literal_3223;
static string _str_literal_607;
static string _str_literal_111;
static string _str_literal_1564;
static string _str_literal_1565;
static string _str_literal_320;
static string _str_literal_321;
static string _str_literal_204;
static string _str_literal_233;
static string _str_literal_3224;
static string _str_literal_715;
static string _str_literal_716;
static string _str_literal_2250;
static string _str_literal_2520;
static string _str_literal_112;
static string _str_literal_747;
static string _str_literal_1194;
static string _str_literal_2521;
static string _str_literal_1567;
static string _str_literal_491;
static string _str_literal_1195;
static string _str_literal_1568;
static string _str_literal_205;
static string _str_literal_2522;
static string _str_literal_3225;
static string _str_literal_1522;
static string _str_literal_1523;
static string _str_literal_717;
static string _str_literal_2505;
static string _str_literal_616;
static string _str_literal_1196;
static string _str_literal_2504;
static string _str_literal_492;
static string _str_literal_113;
static string _str_literal_114;
static string _str_literal_206;
static string _str_literal_3226;
static string _str_literal_238;
static string _str_literal_2501;
static string _str_literal_632;
static string _str_literal_2358;
static string _str_literal_633;
static string _str_literal_748;
static string _str_literal_2260;
static string _str_literal_2502;
static string _str_literal_207;
static string _str_literal_2139;
static string _str_literal_2261;
static string _str_literal_2503;
static string _str_literal_561;
static string _str_literal_617;
static string _str_literal_2140;
static string _str_literal_2359;
static string _str_literal_20;
static string _str_literal_2360;
static string _str_literal_208;
static string _str_literal_21;
static string _str_literal_22;
static string _str_literal_493;
static string _str_literal_2361;
static string _str_literal_636;
static string _str_literal_2262;
static string _str_literal_209;
static string _str_literal_2362;
static string _str_literal_3227;
static string _str_literal_562;
static string _str_literal_2141;
static string _str_literal_2142;
static string _str_literal_23;
static string _str_literal_2363;
static string _str_literal_24;
static string _str_literal_32;
static string _str_literal_33;
static string _str_literal_371;
static string _str_literal_637;
static string _str_literal_638;
static string _str_literal_210;
static string _str_literal_372;
static string _str_literal_2251;
static string _str_literal_958;
static string _str_literal_1990;
static string _str_literal_1991;
static string _str_literal_718;
static string _str_literal_959;
static string _str_literal_960;
static string _str_literal_961;
static string _str_literal_1106;
static string _str_literal_211;
static string _str_literal_2506;
static string _str_literal_2514;
static string _str_literal_719;
static string _str_literal_494;
static string _str_literal_2247;
static string _str_literal_212;
static string _str_literal_1992;
static string _str_literal_2143;
static string _str_literal_213;
static string _str_literal_2540;
static string _str_literal_1570;
static string _str_literal_1094;
static string _str_literal_214;
static string _str_literal_2144;
static string _str_literal_2145;
static string _str_literal_2526;
static string _str_literal_639;
static string _str_literal_1993;
static string _str_literal_2524;
static string _str_literal_963;
static string _str_literal_2525;
static string _str_literal_215;
static string _str_literal_1095;
static string _str_literal_640;
static string _str_literal_2146;
static string _str_literal_720;
static string _str_literal_964;
static string _str_literal_34;
static string _str_literal_2370;
static string _str_literal_35;
static string _str_literal_516;
static string _str_literal_3235;
static string _str_literal_373;
static string _str_literal_517;
static string _str_literal_518;
static string _str_literal_2147;
static string _str_literal_2148;
static string _str_literal_234;
static string _str_literal_519;
static string _str_literal_2265;
static string _str_literal_520;
static string _str_literal_3293;
static string _str_literal_2248;
static string _str_literal_521;
static string _str_literal_522;
static string _str_literal_3366;
static string _str_literal_3368;
static string _str_literal_1571;
static string _str_literal_115;
static string _str_literal_1572;
static string _str_literal_2149;
static string _str_literal_2150;
static string _str_literal_523;
static string _str_literal_721;
static string _str_literal_1027;
static string _str_literal_116;
static string _str_literal_2366;
static string _str_literal_1028;
static string _str_literal_36;
static string _str_literal_1029;
static string _str_literal_1096;
static string _str_literal_2516;
static string _str_literal_37;
static string _str_literal_722;
static string _str_literal_2527;
static string _str_literal_1030;
static string _str_literal_38;
static string _str_literal_2528;
static string _str_literal_3367;
static string _str_literal_3369;
static string _str_literal_3370;
static string _str_literal_1573;
static string _str_literal_1574;
static string _str_literal_1575;
static string _str_literal_1793;
static string _str_literal_1794;
static string _str_literal_324;
static string _str_literal_2304;
static string _str_literal_99;
static string _str_literal_1080;
static string _str_literal_325;
static string _str_literal_751;
static string _str_literal_2173;
static string _str_literal_495;
static string _str_literal_100;
static string _str_literal_117;
static string _str_literal_2174;
static string _str_literal_496;
static string _str_literal_497;
static bytes _bytes_literal_235;
static string _str_literal_498;
static string _str_literal_524;
static string _str_literal_2151;
static string _str_literal_2175;
static string _str_literal_2305;
static string _str_literal_725;
static string _str_literal_118;
static string _str_literal_2176;
static string _str_literal_1994;
static string _str_literal_1995;
static string _str_literal_2306;
static string _str_literal_121;
static string _str_literal_1996;
static bytes _bytes_literal_236;
static string _str_literal_122;
static string _str_literal_2267;
static string _str_literal_2307;
static string _str_literal_123;
static string _str_literal_1577;
static string _str_literal_1578;
static string _str_literal_124;
static string _str_literal_262;
static string _str_literal_326;
static string _str_literal_327;
static string _str_literal_1795;
static string _str_literal_525;
static string _str_literal_1579;
static string _str_literal_1580;
static string _str_literal_1796;
static string _str_literal_2546;
static string _str_literal_1202;
static string _str_literal_237;
static string _str_literal_1524;
static string _str_literal_1525;
static string _str_literal_526;
static string _str_literal_641;
static string _str_literal_125;
static string _str_literal_1997;
static string _str_literal_642;
static string _str_literal_643;
static string _str_literal_1526;
static string _str_literal_1527;
static string _str_literal_1581;
static string _str_literal_1528;
static string _str_literal_2371;
static string _str_literal_126;
static string _str_literal_2372;
static string _str_literal_527;
static string _str_literal_1529;
static string _str_literal_500;
static string _str_literal_1530;
static string _str_literal_501;
static string _str_literal_2373;
static string _str_literal_2374;
static string _str_literal_329;
static string _str_literal_568;
static string _str_literal_569;
static string _str_literal_263;
static string _str_literal_528;
static string _str_literal_619;
static string _str_literal_755;
static string _str_literal_1531;
static string _str_literal_2178;
static string _str_literal_756;
static string _str_literal_1532;
static string _str_literal_2375;
static string _str_literal_2376;
static string _str_literal_661;
static string _str_literal_662;
static string _str_literal_663;
static string _str_literal_2377;
static string _str_literal_2378;
static string _str_literal_757;
static string _str_literal_1582;
static string _str_literal_613;
static string _str_literal_758;
static string _str_literal_1054;
static string _str_literal_1583;
static string _str_literal_330;
static string _str_literal_645;
static string _str_literal_665;
static string _str_literal_2379;
static string _str_literal_759;
static string _str_literal_2179;
static string _str_literal_614;
static string _str_literal_760;
static string _str_literal_1533;
static string _str_literal_1534;
static string _str_literal_2380;
static string _str_literal_570;
static string _str_literal_2381;
static string _str_literal_264;
static string _str_literal_1056;
static string _str_literal_2180;
static string _str_literal_475;
static string _str_literal_1841;
static string _str_literal_2382;
static string _str_literal_474;
static string _str_literal_1998;
static string _str_literal_2181;
static string _str_literal_668;
static string _str_literal_530;
static string _str_literal_1584;
static string _str_literal_1840;
static string _str_literal_2182;
static string _str_literal_476;
static string _str_literal_1797;
static string _str_literal_1798;
static string _str_literal_669;
static string _str_literal_1839;
static string _str_literal_2183;
static string _str_literal_1837;
static string _str_literal_1838;
static string _str_literal_239;
static string _str_literal_2184;
static string _str_literal_670;
static string _str_literal_671;
static string _str_literal_1098;
static string _str_literal_1536;
static string _str_literal_2185;
static string _str_literal_2186;
static string _str_literal_2268;
static string _str_literal_331;
static string _str_literal_332;
static string _str_literal_2383;
static string _str_literal_648;
static string _str_literal_2187;
static string _str_literal_1999;
static string _str_literal_2188;
static string _str_literal_1538;
static string _str_literal_1539;
static string _str_literal_764;
static string _str_literal_765;
static string _str_literal_1200;
static string _str_literal_766;
static string _str_literal_532;
static string _str_literal_767;
static string _str_literal_1585;
static string _str_literal_1586;
static string _str_literal_2000;
static string _str_literal_1587;
static string _str_literal_40;
static string _str_literal_1540;
static string _str_literal_650;
static string _str_literal_1541;
static string _str_literal_1099;
static string _str_literal_1542;
static string _str_literal_2270;
static string _str_literal_1842;
static string _str_literal_1843;
static string _str_literal_1543;
static string _str_literal_2271;
static string _str_literal_240;
static string _str_literal_1544;
static string _str_literal_1588;
static string _str_literal_334;
static string _str_literal_1844;
static string _str_literal_1545;
static string _str_literal_1845;
static string _str_literal_673;
static string _str_literal_1546;
static string _str_literal_265;
static string _str_literal_335;
static string _str_literal_1589;
static string _str_literal_266;
static string _str_literal_1547;
static string _str_literal_1846;
static string _str_literal_1847;
static string _str_literal_1548;
static string _str_literal_572;
static string _str_literal_1549;
static string _str_literal_675;
static string _str_literal_573;
static string _str_literal_1848;
static string _str_literal_1849;
static string _str_literal_269;
static string _str_literal_270;
static string _str_literal_271;
static string _str_literal_3301;
static string _str_literal_726;
static string _str_literal_768;
static string _str_literal_1550;
static string _str_literal_1551;
static string _str_literal_336;
static string _str_literal_1590;
static string _str_literal_1850;
static string _str_literal_241;
static string _str_literal_769;
static string _str_literal_1591;
static string _str_literal_770;
static string _str_literal_1851;
static string _str_literal_771;
static string _str_literal_772;
static string _str_literal_773;
static string _str_literal_1592;
static string _str_literal_774;
static string _str_literal_1593;
static string _str_literal_1852;
static string _str_literal_1853;
static string _str_literal_1552;
static string _str_literal_1553;
static string _str_literal_1594;
static string _str_literal_2003;
static string _str_literal_242;
static string _str_literal_273;
static string _str_literal_2314;
static string _str_literal_274;
static string _str_literal_276;
static string _str_literal_574;
static string _str_literal_2315;
static string _str_literal_652;
static string _str_literal_727;
static string _str_literal_1100;
static string _str_literal_278;
static string _str_literal_502;
static string _str_literal_1116;
static string _str_literal_503;
static string _str_literal_623;
static string _str_literal_624;
static string _str_literal_2161;
static string _str_literal_2162;
static string _str_literal_2163;
static string _str_literal_2274;
static string _str_literal_2384;
static string _str_literal_775;
static string _str_literal_1117;
static string _str_literal_1118;
static string _str_literal_2385;
static string _str_literal_2386;
static string _str_literal_1119;
static string _str_literal_1120;
static string _str_literal_676;
static string _str_literal_1121;
static string _str_literal_280;
static string _str_literal_575;
static string _str_literal_1596;
static string _str_literal_728;
static string _str_literal_1597;
static string _str_literal_2275;
static string _str_literal_678;
static string _str_literal_776;
static string _str_literal_777;
static string _str_literal_2387;
static string _str_literal_1149;
static string _str_literal_1799;
static string _str_literal_1800;
static string _str_literal_1801;
static string _str_literal_1802;
static string _str_literal_680;
static string _str_literal_681;
static string _str_literal_682;
static string _str_literal_729;
static string _str_literal_654;
static string _str_literal_1803;
static string _str_literal_1804;
static string _str_literal_683;
static string _str_literal_1598;
static string _str_literal_374;
static string _str_literal_1599;
static string _str_literal_2005;
static string _str_literal_684;
static string _str_literal_2388;
static string _str_literal_998;
static string _str_literal_2276;
static string _str_literal_337;
static string _str_literal_338;
static string _str_literal_339;
static string _str_literal_730;
static string _str_literal_2389;
static string _str_literal_283;
static string _str_literal_340;
static string _str_literal_999;
static string _str_literal_477;
static string _str_literal_134;
static string _str_literal_579;
static string _str_literal_580;
static string _str_literal_2321;
static string _str_literal_341;
static string _str_literal_1122;
static string _str_literal_2322;
static string _str_literal_2323;
static string _str_literal_581;
static string _str_literal_1554;
static string _str_literal_1555;
static string _str_literal_2390;
static string _str_literal_2391;
static string _str_literal_478;
static string _str_literal_479;
static string _str_literal_2324;
static string _str_literal_1000;
static string _str_literal_2392;
static string _str_literal_687;
static string _str_literal_2393;
static string _str_literal_731;
static string _str_literal_582;
static string _str_literal_583;
static string _str_literal_2277;
static string _str_literal_1083;
static string _str_literal_2278;
static string _str_literal_1084;
static string _str_literal_2394;
static string _str_literal_3400;
static string _str_literal_480;
static string _str_literal_481;
static string _str_literal_482;
static string _str_literal_732;
static string _str_literal_2326;
static string _str_literal_342;
static string _str_literal_2327;
static string _str_literal_483;
static string _str_literal_484;
static string _str_literal_970;
static string _str_literal_2328;
static string _str_literal_584;
static string _str_literal_690;
static string _str_literal_778;
static string _str_literal_585;
static string _str_literal_586;
static string _str_literal_587;
static string _str_literal_588;
static string _str_literal_779;
static string _str_literal_1600;
static string _str_literal_285;
static string _str_literal_1601;
static string _str_literal_1602;
static string _str_literal_1603;
static string _str_literal_1604;
static string _str_literal_1605;
static string _str_literal_286;
static string _str_literal_780;
static string _str_literal_733;
static string _str_literal_1606;
static string _str_literal_1607;
static string _str_literal_1608;
static string _str_literal_781;
static string _str_literal_2009;
static string _str_literal_971;
static string _str_literal_2165;
static string _str_literal_589;
static string _str_literal_2279;
static string _str_literal_590;
static string _str_literal_1123;
static string _str_literal_782;
static string _str_literal_1124;
static string _str_literal_783;
static string _str_literal_625;
static string _str_literal_734;
static string _str_literal_591;
static string _str_literal_626;
static string _str_literal_2010;
static string _str_literal_1609;
static string _str_literal_784;
static string _str_literal_1610;
static string _str_literal_1611;
static string _str_literal_592;
static string _str_literal_593;
static string _str_literal_1612;
static string _str_literal_2280;
static string _str_literal_594;
static string _str_literal_1002;
static string _str_literal_1613;
static string _str_literal_1155;
static string _str_literal_343;
static string _str_literal_344;
static string _str_literal_345;
static string _str_literal_2167;
static string _str_literal_346;
static string _str_literal_595;
static string _str_literal_2011;
static string _str_literal_2168;
static string _str_literal_2169;
static string _str_literal_735;
static string _str_literal_2192;
static string _str_literal_785;
static string _str_literal_786;
static string _str_literal_536;
static string _str_literal_596;
static string _str_literal_1165;
static string _str_literal_288;
static string _str_literal_736;
static string _str_literal_1073;
static string _str_literal_692;
static string _str_literal_62;
static string _str_literal_41;
static string _str_literal_1614;
static string _str_literal_2012;
static string _str_literal_1074;
static string _str_literal_537;
static string _str_literal_1075;
static string _str_literal_2329;
static string _str_literal_597;
static string _str_literal_1129;
static string _str_literal_1004;
static string _str_literal_737;
static string _str_literal_2013;
static string _str_literal_2014;
static string _str_literal_2015;
static string _str_literal_2330;
static string _str_literal_2331;
static string _str_literal_738;
static string _str_literal_1864;
static string _str_literal_538;
static string _str_literal_2016;
static string _str_literal_539;
static string _str_literal_1805;
static string _str_literal_63;
static string _str_literal_2194;
static string _str_literal_1865;
static string _str_literal_739;
static string _str_literal_1615;
static string _str_literal_375;
static string _str_literal_693;
static string _str_literal_694;
static string _str_literal_540;
static string _str_literal_2195;
static string _str_literal_2017;
static string _str_literal_695;
static string _str_literal_696;
static string _str_literal_740;
static string _str_literal_697;
static string _str_literal_698;
static string _str_literal_2018;
static string _str_literal_1132;
static string _str_literal_1203;
static string _str_literal_1204;
static string _str_literal_541;
static string _str_literal_542;
static string _str_literal_2019;
static string _str_literal_1205;
static string _str_literal_1206;
static string _str_literal_1207;
static string _str_literal_1008;
static string _str_literal_43;
static string _str_literal_2020;
static string _str_literal_44;
static string _str_literal_45;
static string _str_literal_1616;
static string _str_literal_788;
static string _str_literal_47;
static string _str_literal_543;
static string _str_literal_1133;
static string _str_literal_48;
static string _str_literal_1134;
static string _str_literal_289;
static string _str_literal_1135;
static string _str_literal_1136;
static string _str_literal_2395;
static string _str_literal_1137;
static string _str_literal_1138;
static string _str_literal_1139;
static string _str_literal_1140;
static string _str_literal_1208;
static string _str_literal_544;
static string _str_literal_1866;
static string _str_literal_545;
static string _str_literal_2196;
static string _str_literal_290;
static string _str_literal_1086;
static string _str_literal_1142;
static string _str_literal_2396;
static string _str_literal_546;
static string _str_literal_598;
static string _str_literal_2343;
static string _str_literal_1619;
static string _str_literal_1620;
static string _str_literal_1621;
static string _str_literal_1622;
static string _str_literal_244;
static string _str_literal_245;
static string _str_literal_1146;
static string _str_literal_599;
static string _str_literal_1087;
static string _str_literal_1625;
static string _str_literal_1626;
static string _str_literal_1627;
static bytes _bytes_literal_246;
static string _str_literal_2197;
static string _str_literal_1870;
static string _str_literal_1867;
static string _str_literal_2198;
static string _str_literal_2344;
static string _str_literal_547;
static string _str_literal_1869;
static string _str_literal_2199;
static string _str_literal_1212;
static string _str_literal_548;
static string _str_literal_1628;
static string _str_literal_1629;
static string _str_literal_2200;
static string _str_literal_549;
static string _str_literal_2201;
static string _str_literal_291;
static string _str_literal_1630;
static string _str_literal_550;
static string _str_literal_347;
static string _str_literal_1631;
static string _str_literal_551;
static string _str_literal_143;
static string _str_literal_1871;
static string _str_literal_2347;
static string _str_literal_2348;
static string _str_literal_376;
static string _str_literal_2349;
static string _str_literal_2350;
static string _str_literal_1632;
static string _str_literal_1633;
static string _str_literal_2202;
static string _str_literal_2203;
static string _str_literal_348;
static string _str_literal_1221;
static string _str_literal_73;
static string _str_literal_292;
static string _str_literal_349;
static string _str_literal_350;
static string _str_literal_352;
static string _str_literal_354;
static string _str_literal_2022;
static string _str_literal_2023;
static string _str_literal_2024;
static string _str_literal_1634;
static string _str_literal_2204;
static string _str_literal_293;
static string _str_literal_1635;
static string _str_literal_2205;
static string _str_literal_355;
static string _str_literal_972;
static string _str_literal_2025;
static string _str_literal_2026;
static string _str_literal_2027;
static string _str_literal_2028;
static string _str_literal_2029;
static string _str_literal_2030;
static string _str_literal_2031;
static string _str_literal_147;
static string _str_literal_2032;
static string _str_literal_973;
static string _str_literal_1636;
static string _str_literal_1637;
static string _str_literal_148;
static string _str_literal_356;
static string _str_literal_149;
static string _str_literal_1077;
static string _str_literal_1078;
static string _str_literal_2034;
static string _str_literal_2035;
static string _str_literal_2036;
static string _str_literal_1223;
static string _str_literal_3197;
static string _str_literal_1224;
static string _str_literal_3200;
static string _str_literal_2206;
static string _str_literal_1638;
static string _str_literal_1225;
static string _str_literal_1874;
static string _str_literal_2037;
static string _str_literal_2038;
static string _str_literal_798;
static string _str_literal_358;
static string _str_literal_3249;
static string _str_literal_377;
static string _str_literal_378;
static string _str_literal_296;
static string _str_literal_359;
static string _str_literal_799;
static string _str_literal_1226;
static string _str_literal_2039;
static string _str_literal_360;
static string _str_literal_2208;
static string _str_literal_297;
static string _str_literal_2040;
static string _str_literal_2209;
static string _str_literal_1227;
static string _str_literal_1228;
static string _str_literal_2210;
static string _str_literal_1806;
static string _str_literal_1807;
static string _str_literal_2211;
static string _str_literal_2212;
static string _str_literal_2213;
static string _str_literal_1239;
static string _str_literal_1229;
static string _str_literal_2214;
static string _str_literal_2351;
static string _str_literal_2041;
static string _str_literal_2215;
static string _str_literal_74;
static string _str_literal_379;
static string _str_literal_2216;
static string _str_literal_2217;
static string _str_literal_1171;
static string _str_literal_1172;
static string _str_literal_804;
static string _str_literal_2218;
static string _str_literal_300;
static string _str_literal_2219;
static string _str_literal_1230;
static string _str_literal_1231;
static string _str_literal_2220;
static string _str_literal_361;
static string _str_literal_1808;
static string _str_literal_1809;
static string _str_literal_362;
static string _str_literal_1810;
static string _str_literal_2221;
static string _str_literal_1811;
static string _str_literal_2222;
static string _str_literal_2223;
static string _str_literal_380;
static string _str_literal_363;
static string _str_literal_2224;
static string _str_literal_364;
static string _str_literal_2225;
static string _str_literal_806;
static string _str_literal_807;
static string _str_literal_1812;
static string _str_literal_2042;
static string _str_literal_974;
static string _str_literal_365;
static string _str_literal_1813;
static string _str_literal_302;
static string _str_literal_303;
static string _str_literal_366;
static string _str_literal_383;
static string _str_literal_64;
static string _str_literal_384;
static string _str_literal_65;
static string _str_literal_975;
static string _str_literal_304;
static string _str_literal_155;
static string _str_literal_2411;
static string _str_literal_2412;
static string _str_literal_2413;
static string _str_literal_2414;
static string _str_literal_305;
static string _str_literal_2415;
static string _str_literal_976;
static string _str_literal_367;
static string _str_literal_2226;
static string _str_literal_2227;
static string _str_literal_2228;
static string _str_literal_2043;
static string _str_literal_2416;
static string _str_literal_809;
static bytes _bytes_literal_248;
static string _str_literal_368;
static bytes _bytes_literal_249;
static bytes _bytes_literal_250;
static string _str_literal_369;
static string _str_literal_1879;
static string _str_literal_810;
static string _str_literal_2417;
static string _str_literal_306;
static string _str_literal_977;
static string _str_literal_2418;
static string _str_literal_811;
static string _str_literal_812;
static string _str_literal_1643;
static string _str_literal_2419;
static string _str_literal_385;
static string _str_literal_386;
static string _str_literal_387;
static string _str_literal_388;
static string _str_literal_389;
static string _str_literal_1644;
static string _str_literal_1645;
static string _str_literal_307;
static string _str_literal_2420;
static bytes _bytes_literal_308;
static string _str_literal_2421;
static string _str_literal_309;
static string _str_literal_77;
static string _str_literal_1175;
static string _str_literal_2045;
static string _str_literal_81;
static string _str_literal_82;
static string _str_literal_1646;
static string _str_literal_310;
static string _str_literal_1884;
static string _str_literal_1885;
static string _str_literal_1180;
static string _str_literal_2422;
static string _str_literal_816;
static string _str_literal_817;
static string _str_literal_2046;
static string _str_literal_2047;
static string _str_literal_391;
static string _str_literal_2049;
static string _str_literal_818;
static string _str_literal_819;
static string _str_literal_2424;
static string _str_literal_1814;
static string _str_literal_1815;
static string _str_literal_392;
static string _str_literal_2236;
static string _str_literal_3330;
static string _str_literal_2237;
static string _str_literal_3331;
static string _str_literal_393;
static string _str_literal_1182;
static string _str_literal_395;
static string _str_literal_311;
static string _str_literal_1648;
static string _str_literal_163;
static string _str_literal_164;
static string _str_literal_165;
static string _str_literal_166;
static string _str_literal_1184;
static string _str_literal_397;
static string _str_literal_398;
static string _str_literal_399;
static string _str_literal_167;
static string _str_literal_400;
static string _str_literal_2050;
static string _str_literal_2051;
static string _str_literal_2775;
static string _str_literal_312;
static string _str_literal_405;
static string _str_literal_821;
static string _str_literal_402;
static string _str_literal_822;
static string _str_literal_1186;
static string _str_literal_403;
static string _str_literal_404;
static string _str_literal_2052;
static string _str_literal_1891;
static string _str_literal_169;
static string _str_literal_823;
static string _str_literal_2053;
static string _str_literal_824;
static string _str_literal_2054;
static string _str_literal_170;
static string _str_literal_2055;
static string _str_literal_1649;
static string _str_literal_2056;
static string _str_literal_1650;
static string _str_literal_2057;
static string _str_literal_2058;
static string _str_literal_1651;
static string _str_literal_1653;
static string _str_literal_1187;
static string _str_literal_1654;
static string _str_literal_1892;
static string _str_literal_1893;
static string _str_literal_316;
static string _str_literal_317;
static string _str_literal_1657;
static string _str_literal_2059;
static string _str_literal_2060;
static string _str_literal_2061;
static string _str_literal_2425;
static string _str_literal_1658;
static string _str_literal_2426;
static string _str_literal_407;
static string _str_literal_2062;
static string _str_literal_2063;
static string _str_literal_2064;
static string _str_literal_409;
static string _str_literal_410;
static string _str_literal_2427;
static string _str_literal_1816;
static string _str_literal_318;
static string _str_literal_1817;
static string _str_literal_1818;
static string _str_literal_411;
static string _str_literal_319;
static string _str_literal_1660;
static string _str_literal_1661;
static string _str_literal_67;
static string _str_literal_2428;
static string _str_literal_2429;
static string _str_literal_2065;
static string _str_literal_1894;
static string _str_literal_1895;
static string _str_literal_1896;
static string _str_literal_1897;
static string _str_literal_1898;
static string _str_literal_2066;
static string _str_literal_1663;
static string _str_literal_1899;
static string _str_literal_68;
static string _str_literal_2067;
static string _str_literal_1664;
static string _str_literal_2068;
static string _str_literal_69;
static string _str_literal_1665;
static string _str_literal_1666;
static string _str_literal_825;
static string _str_literal_1821;
static string _str_literal_416;
static string _str_literal_417;
static string _str_literal_1667;
static string _str_literal_1668;
static string _str_literal_1669;
static string _str_literal_1670;
static string _str_literal_1671;
static string _str_literal_70;
static string _str_literal_2070;
static string _str_literal_71;
static string _str_literal_72;
static string _str_literal_1672;
static string _str_literal_2071;
static string _str_literal_2072;
static string _str_literal_2073;
static string _str_literal_1674;
static string _str_literal_1675;
static string _str_literal_2074;
static string _str_literal_1824;
static string _str_literal_1822;
static string _str_literal_1823;
static string _str_literal_1900;
static string _str_literal_1825;
static string _str_literal_1826;
static string _str_literal_1827;
static string _str_literal_86;
static string _str_literal_418;
static string _str_literal_177;
static string _str_literal_178;
static string _str_literal_1677;
static string _str_literal_2075;
static string _str_literal_88;
static string _str_literal_179;
static string _str_literal_2432;
static string _str_literal_90;
static string _str_literal_91;
static string _str_literal_2433;
static string _str_literal_1901;
static string _str_literal_421;
static string _str_literal_422;
static string _str_literal_2076;
static string _str_literal_828;
static string _str_literal_829;
static string _str_literal_830;
static string _str_literal_92;
static string _str_literal_831;
static string _str_literal_2434;
static string _str_literal_424;
static string _str_literal_2435;
static string _str_literal_425;
static string _str_literal_2078;
static string _str_literal_832;
static string _str_literal_833;
static string _str_literal_2079;
static string _str_literal_1680;
static string _str_literal_1681;
static string _str_literal_834;
static string _str_literal_1682;
static string _str_literal_3310;
static string _str_literal_1265;
static string _str_literal_1266;
static string _str_literal_1686;
static string _str_literal_1687;
static string _str_literal_1688;
static string _str_literal_1689;
static string _str_literal_1690;
static string _str_literal_1912;
static string _str_literal_1913;
static string _str_literal_1692;
static string _str_literal_1693;
static string _str_literal_1694;
static string _str_literal_1917;
static string _str_literal_1918;
static string _str_literal_1695;
static string _str_literal_1696;
static string _str_literal_1267;
static string _str_literal_430;
static string _str_literal_2438;
static string _str_literal_1268;
static string _str_literal_1269;
static string _str_literal_835;
static string _str_literal_1698;
static string _str_literal_1830;
static string _str_literal_1699;
static string _str_literal_1831;
static string _str_literal_1700;
static string _str_literal_836;
static string _str_literal_2439;
static string _str_literal_837;
static string _str_literal_2440;
static string _str_literal_2441;
static string _str_literal_2442;
static string _str_literal_2443;
static string _str_literal_1927;
static string _str_literal_1928;
static string _str_literal_1929;
static string _str_literal_838;
static string _str_literal_1704;
static string _str_literal_1705;
static string _str_literal_839;
static string _str_literal_840;
static string _str_literal_841;
static string _str_literal_842;
static string _str_literal_1930;
static string _str_literal_1706;
static string _str_literal_1271;
static string _str_literal_1707;
static string _str_literal_2444;
static string _str_literal_2445;
static string _str_literal_1708;
static string _str_literal_1709;
static string _str_literal_1931;
static string _str_literal_1932;
static string _str_literal_1933;
static string _str_literal_1710;
static string _str_literal_2446;
static string _str_literal_1711;
static string _str_literal_1273;
static string _str_literal_1712;
static string _str_literal_843;
static string _str_literal_2447;
static string _str_literal_844;
static string _str_literal_1934;
static string _str_literal_845;
static string _str_literal_1935;
static string _str_literal_1713;
static string _str_literal_1714;
static string _str_literal_1275;
static string _str_literal_2084;
static string _str_literal_1937;
static string _str_literal_2448;
static string _str_literal_1938;
static string _str_literal_2449;
static string _str_literal_846;
static string _str_literal_1940;
static string _str_literal_847;
static string _str_literal_1944;
static string _str_literal_1276;
static string _str_literal_1277;
static string _str_literal_1278;
static string _str_literal_1945;
static string _str_literal_1279;
static string _str_literal_1280;
static string _str_literal_1281;
static string _str_literal_848;
static string _str_literal_849;
static string _str_literal_1946;
static string _str_literal_1287;
static string _str_literal_2450;
static string _str_literal_2451;
static string _str_literal_2452;
static string _str_literal_2453;
static string _str_literal_2454;
static string _str_literal_850;
static string _str_literal_445;
static string _str_literal_446;
static string _str_literal_2088;
static string _str_literal_2089;
static string _str_literal_2090;
static string _str_literal_1948;
static string _str_literal_1949;
static string _str_literal_2091;
static string _str_literal_1288;
static string _str_literal_1950;
static string _str_literal_1291;
static string _str_literal_2092;
static string _str_literal_1718;
static string _str_literal_1719;
static string _str_literal_1720;
static string _str_literal_1721;
static string _str_literal_1722;
static string _str_literal_1951;
static string _str_literal_1723;
static string _str_literal_2792;
static string _str_literal_851;
static string _str_literal_1724;
static string _str_literal_2455;
static string _str_literal_2456;
static string _str_literal_852;
static string _str_literal_853;
static string _str_literal_3198;
static string _str_literal_3199;
static string _str_literal_3201;
static string _str_literal_3203;
static string _str_literal_3204;
static string _str_literal_3205;
static string _str_literal_3206;
static string _str_literal_3207;
static string _str_literal_3229;
static string _str_literal_3230;
static string _str_literal_3231;
static string _str_literal_3232;
static string _str_literal_3233;
static string _str_literal_3234;
static string _str_literal_3236;
static string _str_literal_3237;
static string _str_literal_3238;
static string _str_literal_3241;
static string _str_literal_3248;
static string _str_literal_3250;
static string _str_literal_3251;
static string _str_literal_3252;
static string _str_literal_3255;
static string _str_literal_3256;
static string _str_literal_3257;
static string _str_literal_3258;
static string _str_literal_3281;
static string _str_literal_3282;
static string _str_literal_3283;
static string _str_literal_3285;
static string _str_literal_3286;
static string _str_literal_3287;
static string _str_literal_3288;
static string _str_literal_3289;
static string _str_literal_3290;
static string _str_literal_3294;
static string _str_literal_3299;
static string _str_literal_3300;
static string _str_literal_3302;
static string _str_literal_3303;
static string _str_literal_3307;
static string _str_literal_3309;
static string _str_literal_3311;
static string _str_literal_3312;
static string _str_literal_3313;
static string _str_literal_3315;
static string _str_literal_3321;
static string _str_literal_3322;
static string _str_literal_3323;
static string _str_literal_3324;
static string _str_literal_3325;
static string _str_literal_3326;
static string _str_literal_3327;
static string _str_literal_3332;
static string _str_literal_3340;
static string _str_literal_3353;
static string _str_literal_3356;
static string _str_literal_3357;
static string _str_literal_3372;
static string _str_literal_3401;
static string _str_literal_3402;
static string _str_literal_3406;
static string _str_literal_3419;
static string _str_literal_3424;
static string _str_literal_854;
static string _str_literal_1952;
static string _str_literal_1953;
static string _str_literal_855;
static string _str_literal_2457;
static string _str_literal_2458;
static string _str_literal_1292;
static string _str_literal_856;
static string _str_literal_2459;
static string _str_literal_2460;
static string _str_literal_857;
static string _str_literal_447;
static string _str_literal_1293;
static string _str_literal_2461;
static string _str_literal_448;
static string _str_literal_449;
static string _str_literal_450;
static string _str_literal_859;
static string _str_literal_2462;
static string _str_literal_2463;
static string _str_literal_2464;
static string _str_literal_1294;
static string _str_literal_860;
static string _str_literal_2465;
static string _str_literal_2466;
static string _str_literal_861;
static string _str_literal_2467;
static string _str_literal_2468;
static string _str_literal_1725;
static string _str_literal_183;
static string _str_literal_1726;
static string _str_literal_1727;
static string _str_literal_1728;
static string _str_literal_1730;
static string _str_literal_2469;
static string _str_literal_2470;
static string _str_literal_2471;
static string _str_literal_862;
static string _str_literal_1731;
static string _str_literal_2094;
static string _str_literal_1732;
static string _str_literal_1733;
static string _str_literal_863;
static string _str_literal_2096;
static string _str_literal_864;
static string _str_literal_2097;
static string _str_literal_2472;
static string _str_literal_2473;
static string _str_literal_2474;
static string _str_literal_2475;
static string _str_literal_865;
static string _str_literal_2476;
static string _str_literal_2477;
static string _str_literal_2109;
static string _str_literal_2098;
static string _str_literal_2108;
static string _str_literal_866;
static string _str_literal_2100;
static string _str_literal_2107;
static string _str_literal_2102;
static string _str_literal_867;
static string _str_literal_2106;
static string _str_literal_868;
static string _str_literal_184;
static string _str_literal_2104;
static string _str_literal_2478;
static string _str_literal_869;
static string _str_literal_2110;
static string _str_literal_2111;
static string _str_literal_871;
static string _str_literal_2479;
static string _str_literal_2480;
static string _str_literal_2481;
static string _str_literal_872;
static string _str_literal_873;
static string _str_literal_874;
static string _str_literal_1734;
static string _str_literal_1735;
static string _str_literal_1736;
static string _str_literal_1737;
static string _str_literal_1738;
static string _str_literal_1739;
static string _str_literal_1740;
static string _str_literal_1741;
static string _str_literal_452;
static string _str_literal_1742;
static string _str_literal_2484;
static string _str_literal_2485;
static string _str_literal_1744;
static string _str_literal_1745;
static string _str_literal_2486;
static string _str_literal_1746;
static string _str_literal_1747;
static string _str_literal_2487;
static string _str_literal_2488;
static string _str_literal_1748;
static string _str_literal_2489;
static string _str_literal_2490;
static string _str_literal_2112;
static string _str_literal_2113;
static string _str_literal_1750;
static string _str_literal_1751;
static string _str_literal_1752;
static string _str_literal_453;
static string _str_literal_454;
static string _str_literal_455;
static string _str_literal_456;
static string _str_literal_457;
static string _str_literal_458;
static string _str_literal_459;
static string _str_literal_1753;
static string _str_literal_875;
static string _str_literal_876;
static string _str_literal_877;
static string _str_literal_1755;
static string _str_literal_878;
static string _str_literal_1756;
static string _str_literal_1757;
static string _str_literal_879;
static string _str_literal_880;
static string _str_literal_1763;
static string _str_literal_1764;
static string _str_literal_881;
static string _str_literal_883;
static string _str_literal_885;
static string _str_literal_886;
static string _str_literal_1767;
static string _str_literal_887;
static string _str_literal_1771;
static string _str_literal_1772;
static string _str_literal_1773;
static string _str_literal_1956;
static string _str_literal_888;
static string _str_literal_889;
static string _str_literal_890;
static string _str_literal_1777;
static string _str_literal_1778;
static string _str_literal_1781;
static string _str_literal_1780;
static string _str_literal_2114;
static string _str_literal_2116;
static string _str_literal_2117;
static string _str_literal_2118;
static string _str_literal_2119;
static string _str_literal_2120;
static string _str_literal_1299;
static string _str_literal_1782;
static string _str_literal_1962;
static string _str_literal_1963;
static string _str_literal_2121;
static string _str_literal_2122;
static string _str_literal_2123;
static string _str_literal_2124;
static string _str_literal_2125;
static string _str_literal_1783;
static string _str_literal_1784;
static string _str_literal_1785;
static string _str_literal_1786;
static string _str_literal_1966;
static string _str_literal_1967;
static string _str_literal_2126;
static string _str_literal_2127;
static string _str_literal_893;
static string _str_literal_894;
static string _str_literal_895;
static string _str_literal_1969;
static string _str_literal_2128;
static string _str_literal_461;
static string _str_literal_462;
static string _str_literal_2129;
static string _str_literal_897;
static string _str_literal_898;
static string _str_literal_463;
static string _str_literal_464;
static string _str_literal_465;
static string _str_literal_899;
static string _str_literal_900;
static string _str_literal_466;
static string _str_literal_901;
static string _str_literal_467;
static string _str_literal_468;
static string _str_literal_469;
static string _str_literal_470;
static string _str_literal_471;
static string _str_literal_472;
static string _str_literal_473;
static string _str_literal_1301;
static string _str_literal_1302;
static string _str_literal_1303;
static string _str_literal_903;
static string _str_literal_1973;
static string _str_literal_904;
static string _str_literal_905;
static string _str_literal_906;
static string _str_literal_2130;
static string _str_literal_907;
static string _str_literal_909;
static string _str_literal_910;
static string _str_literal_911;
static string _str_literal_912;
static string _str_literal_913;
static string _str_literal_915;
static string _str_literal_916;
static string _str_literal_917;
static string _str_literal_918;
static string _str_literal_919;
static string _str_literal_920;
static string _str_literal_921;
static string _str_literal_922;
static string _str_literal_924;
static string _str_literal_925;
static string _str_literal_926;
static string _str_literal_927;
static string _str_literal_928;
static string _str_literal_929;
static string _str_literal_930;
static string _str_literal_931;
static string _str_literal_932;
static string _str_literal_933;
static string _str_literal_935;
static string _str_literal_937;
static string _str_literal_2132;
static string _str_literal_2133;
static string _str_literal_938;
static string _str_literal_940;
static string _str_literal_941;
static string _str_literal_942;
static string _str_literal_943;
static string _str_literal_1314;
static string _str_literal_1315;
static string _str_literal_1317;
static string _str_literal_1318;
static string _str_literal_1319;
static string _str_literal_1320;
static string _str_literal_1321;
static string _str_literal_1331;
static string _str_literal_1332;
static string _str_literal_1333;
static string _str_literal_1334;
static string _str_literal_1335;
static string _str_literal_1336;
static string _str_literal_1337;
static string _str_literal_1338;
static string _str_literal_1339;
static string _str_literal_1340;
static string _str_literal_1341;
static string _str_literal_1342;
static string _str_literal_1343;
static string _str_literal_1344;
static string _str_literal_1345;
static string _str_literal_1346;
static string _str_literal_1347;
static string _str_literal_1349;
static string _str_literal_1350;
static string _str_literal_1353;
static string _str_literal_1354;
static string _str_literal_1355;
static string _str_literal_1356;
static string _str_literal_1357;
static string _str_literal_1358;
static string _str_literal_1359;
static string _str_literal_1360;
static string _str_literal_1361;
static string _str_literal_1362;
static string _str_literal_1363;
static string _str_literal_1364;
static string _str_literal_1365;
static string _str_literal_1366;
static string _str_literal_1367;
static string _str_literal_1368;
static string _str_literal_3371;
static string _str_literal_1371;
static string _str_literal_1372;
static string _str_literal_1379;
static string _str_literal_1380;
static string _str_literal_1382;
static string _str_literal_1384;
static string _str_literal_1385;
static string _str_literal_1386;
static string _str_literal_1387;
static string _str_literal_1388;
static string _str_literal_1389;
static string _str_literal_1390;
static string _str_literal_1391;
static string _str_literal_1394;
static string _str_literal_1395;
static string _str_literal_1396;
static string _str_literal_1397;
static string _str_literal_1398;
static string _str_literal_1399;
static string _str_literal_1401;
static string _str_literal_1402;
static string _str_literal_1403;
static string _str_literal_1405;
static string _str_literal_1407;
static string _str_literal_1408;
static string _str_literal_1409;
static string _str_literal_1410;
static string _str_literal_1411;
static string _str_literal_1413;
static string _str_literal_1414;
static string _str_literal_1415;
static string _str_literal_1416;
static string _str_literal_1417;
static string _str_literal_1418;
static string _str_literal_1419;
static string _str_literal_1420;
static string _str_literal_1421;
static string _str_literal_1422;
static string _str_literal_1424;
static string _str_literal_1425;
static string _str_literal_1426;
static string _str_literal_1427;
static string _str_literal_1428;
static string _str_literal_1429;
static string _str_literal_1430;
static string _str_literal_1431;
static string _str_literal_1432;
static string _str_literal_1433;
static string _str_literal_1435;
static string _str_literal_1436;
static string _str_literal_1437;
static string _str_literal_1439;
static string _str_literal_1440;
static string _str_literal_1442;
static string _str_literal_1443;
static string _str_literal_1444;
static string _str_literal_1445;
static string _str_literal_1446;
static string _str_literal_1447;
static string _str_literal_1448;
static string _str_literal_1449;
static string _str_literal_1450;
static string _str_literal_1451;
static string _str_literal_1452;
static string _str_literal_1454;
static string _str_literal_1455;
static string _str_literal_1456;
static string _str_literal_1457;
static string _str_literal_1458;
static string _str_literal_1459;
static string _str_literal_1460;
static string _str_literal_1462;
static string _str_literal_1464;
static string _str_literal_1466;
static string _str_literal_1467;
static string _str_literal_1468;
static string _str_literal_1469;
static string _str_literal_1471;
static string _str_literal_1472;
static string _str_literal_1473;
static string _str_literal_1474;
static string _str_literal_1475;
static string _str_literal_1476;
static string _str_literal_1496;
static string _str_literal_1497;
static string _str_literal_1504;
static string _str_literal_1505;
static string _str_literal_1506;
static string _str_literal_1507;
static string _str_literal_1508;
static string _str_literal_1511;
static string _str_literal_1512;
static string _str_literal_1513;
static string _str_literal_1515;
static string _str_literal_1516;
static string _str_literal_1517;
static string _str_literal_1518;
static string _str_literal_1520;
static string _str_literal_1521;
static uint64_t chpl_offset_endCount;
static uint64_t chpl_offset_serial;
static uint64_t chpl_offset_nextCoStmtSerial;
static uint64_t chpl_offset_commDiagsTemporarilyDisabled;
static uint64_t chpl_offset_end;
static int64_t numThreadsPerLocale;
static int64_t dataParTasksPerLocale;
static chpl_bool dataParIgnoreRunningTasks;
static int64_t dataParMinGranularity;
static _distribution_DefaultDist defaultDist;
static _domain_DefaultRectangularDom_1_int64_t_one chpl_emptyLocaleSpace;
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t chpl_emptyLocales;
static _ref__domain_DefaultRectangularDom_1_int64_t_one call_tmp;
static BaseLocale coerce_tmp;
static RootLocale call_tmp2;
static RootLocale call_tmp3;
static _ref_BaseLocale call_tmp4;
static _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t Locales;
static _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp5;
static _domain_DefaultRectangularDom_1_int64_t_one LocaleSpace;
static chpl_bool memTrack;
static chpl_bool memStats;
static chpl_bool memLeaksByType;
static chpl_bool memLeaks;
static uint64_t memMax;
static uint64_t memThreshold;
static string memLog;
static string memLeaksLog;
static string memLeaksByDesc;
static uint64_t cMemMax;
static uint64_t cMemThreshold;
static chpl_bool printModuleInitOrder;
static int32_t moduleInitLevel;
static chpl_bool chpl__init_ChapelStringLiterals_p;
static chpl_bool chpl__init_ChapelSysCTypes_p;
static chpl_bool chpl__init_DSIUtil_p;
static chpl_bool chpl__init_Remote_p;
static chpl_bool chpl__init_remoteTest_p;
static chpl_bool chpl__init_ByteBufferHelpers_p;
static chpl_bool chpl__init_BytesStringCommon_p;
static chpl_bool chpl__init_ChapelDistribution_p;
static chpl_bool chpl__init_ChapelPrivatization_p;
static chpl_bool chpl__init_ChapelStaticVars_p;
static chpl_bool chpl__init_LocaleModelHelpFlat_p;
static chpl_bool chpl__init_MemConsistency_p;
static chpl_bool chpl__init_StringCasts_p;
static chpl_bool chpl__init_ExportWrappers_p;
static chpl_bool chpl__init_OwnedObject_p;
static chpl_bool chpl__init_SharedObject_p;
static chpl_bool chpl__init_ChapelDomain_p;
static chpl_bool chpl__init_ChapelNumLocales_p;
static chpl_bool chpl__init_ChapelRange_p;
static chpl_bool chpl__init_ChapelTaskDataHelp_p;
static chpl_bool chpl__init_ChapelTaskData_p;
static chpl_bool chpl__init_ChapelTaskTable_p;
static chpl_bool chpl__init_ChapelTuple_p;
static chpl_bool chpl__init_DefaultRectangular_p;
static chpl_bool chpl__init_MemTracking_p;
static chpl_bool chpl__init_Search_p;
static chpl_bool chpl__init_ChapelArray_p;
static chpl_bool chpl__init_ChapelBase_p;
static chpl_bool chpl__init_ChapelContext_p;
static chpl_bool chpl__init_ChapelIOStringifyHelper_p;
static chpl_bool chpl__init_ChapelLocks_p;
static chpl_bool chpl__init_ChapelStandard_p;
static chpl_bool chpl__init_ChapelUtil_p;
static chpl_bool chpl__init_Debugger_p;
static chpl_bool chpl__init_HaltWrappers_p;
static chpl_bool chpl__init_Types_p;
static chpl_bool chpl__init_Bytes_p;
static chpl_bool chpl__init_CString_p;
static chpl_bool chpl__init_ExternalArray_p;
static chpl_bool chpl__init_ChapelLocale_p;
static chpl_bool chpl__init_ChapelDebugPrint_p;
static chpl_bool chpl__init_HideDeprecatedReexport_p;
static chpl_bool chpl__init_Reflection_p;
static chpl_bool chpl__init_ChapelHashtable_p;
static chpl_bool chpl__init_ChapelThreads_p;
static chpl_bool chpl__init_LocaleModelHelpMem_p;
static chpl_bool chpl__init_LocaleModelHelpRuntime_p;
static chpl_bool chpl__init_LocaleModel_p;
static chpl_bool chpl__init_PrintModuleInitOrder_p;
static chpl_bool chpl__init_LocaleModelHelpSetup_p;
static chpl_bool chpl__init_Communication_p;
static chpl_bool chpl__init_Errors_p;
static chpl_bool chpl__init_OS_p;
static chpl_bool chpl__init_ChapelIO_p;
static chpl_bool chpl__init_RangeChunk_p;
static chpl_bool chpl__init_CTypes_p;
static chpl_bool chpl__init_ChapelIteratorSupport_p;
static chpl_bool chpl__init_LocalesArray_p;
static chpl_bool chpl__init_String_p;
static chpl_bool chpl__init_POSIX_p;
static chpl_bool chpl__init_List_p;
static chpl_bool chpl__init_AutoMath_p;
static chpl_bool chpl__init_CopyAggregation_p;
static chpl_bool chpl__init_Atomics_p;
static chpl_bool chpl__init_Math_p;
static chpl_bool chpl__init_Sort_p;
static chpl_bool chpl__init_Regex_p;
static chpl_bool chpl__init_AggregationPrimitives_p;
static chpl_bool chpl__init_NVStringFactory_p;
static chpl_bool chpl__init_IO_p;
static chpl_bool chpl__init_InsertionSort_p;
static chpl_bool chpl__init_TimSort_p;
static chpl_bool chpl__init_QuickSort_p;
static chpl_bool chpl__init_AlignedTSupport_p;
static chpl_bool chpl__init_ShellSort_p;
static chpl_bool chpl__init_RadixSortHelp_p;
static chpl_bool chpl__init_RegexIoSupport_p;
static chpl_bool chpl__init_ShallowCopy_p;
static chpl_bool chpl__init_TwoArrayPartitioning_p;
static chpl_bool chpl__init_currentTask_p;
static chpl_bool chpl__init_TwoArrayRadixSort_p;
static chpl_bool chpl__init_MSBRadixSort_p;
static chpl_bool chpl__init_FormattedIO_p;
static int64_t yieldFrequency;
static int64_t dstBuffSize;
static int64_t srcBuffSize;
static int32_t IOHINTS_NONE;
static int32_t IOHINTS_SEQUENTIAL;
static int32_t IOHINTS_RANDOM;
static int32_t IOHINTS_PREFETCH;
static int32_t IOHINTS_MMAP;
static int32_t IOHINTS_NOMMAP;
static _tuple_6_star_string _arg_to_proto_names;
static fileReader_T_defaultDeserializer stdin2;
static fileWriter_T_defaultSerializer stdout2;
static fileWriter_T_defaultSerializer stderr2;
static int64_t _initialCapacity;
static int64_t _initialArrayCapacity;
static int64_t chpl_unstableStandardSymbolForTesting;
static int64_t initBufferSizeForSlowReplaceAndCount;
static DefaultComparator defaultComparator;
static ReverseComparator_DefaultComparator reverseComparator;
static locale dev;
static _owned_Remote_R chpl_wrapper_x;
static _ref_Remote_R call_tmp6;
static _ref_Remote_R x;
static _tr_chpl__thunk2 call_tmp7;
static Remote_R _chpl_forward_tgt;
extern const int chpl_numGlobalsOnHeap;

extern ptr_wide_ptr_t chpl_globals_registry[1];

extern const char* chpl_mem_descs[];
extern const int chpl_mem_numDescs;

extern void* const chpl_private_broadcast_table[];
#include "chpl-gen-includes.h"

#endif /* END CHPL_GEN_HEADER_INCLUDE_GUARD */
