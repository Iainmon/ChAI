#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
/* AutoMath.chpl:83 */
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
static void chpl__init_AutoMath(int64_t _ln,
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
                                int32_t _fn) {
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  if (chpl__init_AutoMath_p) /* ZLINE: 83 /Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl */
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  {
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
    goto _exit_chpl__init_AutoMath;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  }
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  printModuleInit("%*s\n", "AutoMath", INT64(8), _ln, _fn);
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  refIndentLevel = &moduleInitLevel;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  *(refIndentLevel) += INT64(1);
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  chpl__init_AutoMath_p = UINT8(true);
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  {
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  }
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  *(refIndentLevel) -= INT64(1);
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  _exit_chpl__init_AutoMath:;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  return;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
}

#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
/* AutoMath.chpl:325 */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
static int64_t max2(int64_t x2,
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
                    int64_t y) {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  int64_t T;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  chpl_bool call_tmp8;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  call_tmp8 = chpl___GREATER_(x2, y);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  if (call_tmp8) /* ZLINE: 325 /Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
    T = x2;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  } else /* ZLINE: 325 /Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
    T = y;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  }
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  return T;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
}

#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
/* AutoMath.chpl:394 */
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
static int64_t min2(int64_t x2,
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
                    int64_t y) {
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  int64_t T;
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  chpl_bool call_tmp8;
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  call_tmp8 = chpl___LESS_3(x2, y);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  if (call_tmp8) /* ZLINE: 394 /Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl */
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  {
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
    T = x2;
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  } else /* ZLINE: 394 /Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl */
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  {
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
    T = y;
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  }
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
  return T;
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/AutoMath.chpl"
}

