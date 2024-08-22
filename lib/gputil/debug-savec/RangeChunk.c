#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
/* RangeChunk.chpl:38 */
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
static void chpl__init_RangeChunk(int64_t _ln,
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
                                  int32_t _fn) {
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
  if (chpl__init_RangeChunk_p) /* ZLINE: 38 /Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl */
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
  {
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
    goto _exit_chpl__init_RangeChunk;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
  }
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
  printModuleInit("%*s\n", "RangeChunk", INT64(10), _ln, _fn);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
  refIndentLevel = &moduleInitLevel;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
  *(refIndentLevel) += INT64(1);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
  chpl__init_RangeChunk_p = UINT8(true);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
  {
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
    chpl__init_Math(_ln, _fn);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
  }
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
  *(refIndentLevel) -= INT64(1);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
  _exit_chpl__init_RangeChunk:;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
  return;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/packages/RangeChunk.chpl"
}

