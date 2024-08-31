.. default-domain:: chpl

.. module:: BytesStringCommon
   :noindex:

BytesStringCommon
=================
**Usage**

.. code-block:: chapel

   use BytesStringCommon;


or

.. code-block:: chapel

   import BytesStringCommon;


* Copyright 2020-2024 Hewlett Packard Enterprise Development LP
* Copyright 2004-2019 Cray Inc.
* Other additional copyright holders may be indicated within.
*
* The entirety of this work is licensed under the Apache License,
* Version 2.0 (the "License"); you may not use this file except
* in compliance with the License.
*
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.


.. data:: const CHPL_SHORT_STRING_SIZE: c_int

.. record:: chpl__inPlaceBuffer

.. function:: proc chpl__getInPlaceBufferData(const ref data: chpl__inPlaceBuffer) : bufferType

.. function:: proc chpl__getInPlaceBufferDataForWrite(ref data: chpl__inPlaceBuffer) : bufferType

.. record:: __serializeHelper

   .. attribute:: var buffLen: int

   .. attribute:: var buff: bufferType

   .. attribute:: var size: int

   .. attribute:: var locale_id: chpl_nodeID.type

   .. attribute:: var shortData: chpl__inPlaceBuffer

   .. attribute:: var cachedNumCodepoints: int

.. enum:: enum decodePolicy { strict, replace, drop, escape }

   
   ``decodePolicy`` specifies what happens when there is malformed characters
   when decoding a :mod:`Bytes` into a UTF-8 :record:`~String.string`.
   
     - **strict**: default policy; raise error
     - **replace**: replace with UTF-8 replacement character
     - **drop**: silently drop data
     - **escape**: escape invalid data by replacing each byte 0xXX with
                   codepoint 0xDCXX
   

   .. enumconstant:: enum constant strict

   .. enumconstant:: enum constant replace

   .. enumconstant:: enum constant drop

   .. enumconstant:: enum constant escape

.. enum:: enum encodePolicy { unescape, pass }

   
   ``encodePolicy`` specifies what happens when there is escaped non-UTF8
   bytes when encoding a :record:`~String.string` into a
   :mod:`Bytes`.
   
     - **pass**: default policy; copy directly
     - **unescape**: recover the original data from the escaped data
   

   .. enumconstant:: enum constant unescape

   .. enumconstant:: enum constant pass

.. data:: config param showStringBytesInitDeprWarnings = true

.. data:: param surrogateEscape = 0xdc: byteType

.. function:: proc getCStr(const ref x: ?t) : c_ptrConst(c_char)

.. function:: proc decodeByteBuffer( buff: bufferType,  length: int,  policy: decodePolicy)  throws

   
   This function is called by `bytes.decode` and string factory functions that
   take a C array as the buffer.
   
   It iterates over the buffer, trying to decode codepoints out of it. If there
   is an illegal sequence that doesn't correspond to any valid codepoint, the
   behavior is determined by the `policy` argument. See the `decodePolicy`
   documentation above for the meaning of different policies.
   

.. function:: proc decodeHelp( buff: c_ptr(uint(8)),  buffLen: int,  offset: int,  allowEsc: bool) 

   
   This function decodeHelp is used to create a wrapper for
   qio_decode_char_buf* and qio_decode_char_buf_esc and return
   the value of errorCode , cp and nBytes.
   
     :arg buff: Buffer to decode
   
     :arg buffLen: Size of buffer
   
     :arg offset: Starting index of read buffer,
   
     :arg allowEsc:  Choice between "qio_decode_char_buf"
                     and "qio_decode_char_buf_esc" that allows
                     escaped sequences in the string
   
   :returns: Tuple of decodeRet, chr and nBytes
             decodeRet : error code : errorCode
             chr : corresponds to codepoint
             nBytes : number of bytes of corresponding UTF-8 encoding
   

.. function:: proc initWithBorrowedBuffer(ref x: ?t,  other: t) 

.. function:: proc initWithBorrowedBuffer(ref x: ?t,  other: bufferType,  length: int,  size: int) 

.. function:: proc initWithOwnedBuffer(ref x: ?t,  other: bufferType,  length: int,  size: int) 

.. function:: proc initWithNewBuffer(ref x: ?t,  other: t) 

.. function:: proc initWithNewBuffer(ref x: ?t,  other: bufferType,  length: int,  size: int) 

.. function:: proc getView(const ref x: ?t,  r: range(?), param checkMisaligned = true)  throws

.. function:: proc getSlice(const ref x: ?t,  r: range(?))  throws

.. function:: proc getIndexType(type t) type

.. function:: proc doReplace(const ref x: ?t,  needle: t,  replacement: t,  count: int = -1) : t

.. function:: proc doSplitHelp(const ref localx: ?t, const ref localSep: t, const maxsplit: int = -1, const ignoreEmpty: bool = false, ref start: getIndexType(t), const splitCount: int) : t

.. iterfunction:: iter doSplit(const ref x: ?t,  sep: t,  maxsplit: int = -1,  ignoreEmpty: bool = false) : t

.. function:: proc doSplitWSNoEncHelp(const ref localx: ?t,  maxsplit: int = -1, ref i: int, const splitCount: int, const noSplits: bool, const limitSplits: bool, const iEnd: byteIndex) : t

.. iterfunction:: iter doSplitWSNoEnc(const ref x: ?t,  maxsplit: int = -1) : t

.. function:: proc doSearchNoEnc(const ref x: ?t,  needle: t,  region: range(?), param count: bool, param fromLeft: bool = true) 

.. function:: proc startsEndsWith(const ref x: ?t,  needles, param fromLeft: bool) : bool where isHomogeneousTuple(needles) && needles[0].type == t

.. function:: proc doJoinIterator(const ref x: ?t,  ir: _iteratorRecord) : t

.. function:: proc doJoin(const ref x: ?t, const ref S) : t where isTuple(S) || isArray(S)

.. function:: proc doPartition(const ref x: ?t,  sep: t) : 3*(t)

.. function:: proc doDedent(const ref x: ?t,  columns = 0,  ignoreFirst = true) : t

.. function:: proc resizeBufferForAppend(ref lhs: ?t,  n: int) : int

.. function:: proc doAppend(ref lhs: ?t, const ref rhs: t) 

.. function:: proc doAppendSomeBytes(ref lhs: ?t,  n: int,  byteCArr: c_array(uint(8), ?),  nCodepoints: int) 

   Take n bytes from byteCArr and append it to the string/bytes
   in lhs 

.. function:: proc resizeBuffer(ref lhs: ?t,  buffLen: int) 

.. function:: proc reinitWithNewBuffer(ref lhs: ?t,  buff: bufferType,  buffLen: int,  buffSize: int,  numCodepoints: int = 0) 

.. function:: proc reinitWithOwnedBuffer(ref lhs: ?t,  buff: bufferType,  buffLen: int,  buffSize: int,  numCodepoints: int = 0) 

.. function:: proc doAssign(ref lhs: ?t,  rhs: t) 

.. function:: proc doMultiply(const ref x: ?t,  n: integral) 

.. function:: proc doConcat( s0: ?t,  s1: t) : t

.. function:: proc doStripNoEnc(const ref x: ?t,  chars: t,  leading: bool,  trailing: bool) : t

.. function:: proc doEq( a: ?t1,  b: ?t2) 

.. function:: proc doLessThan( a: ?t1,  b: ?t2) 

.. function:: proc doGreaterThan( a: ?t1,  b: ?t2) 

.. function:: proc doLessThanOrEq( a: ?t1,  b: ?t2) 

.. function:: proc doGreaterThanOrEq( a: ?t1,  b: ?t2) 

.. function:: proc getHash( x: ?t) 

.. function:: proc countNumCodepoints( x: string) 

.. function:: proc countNumCodepoints( buff: bufferType,  buffLen: int) 

.. function:: proc isInitialByte( b: uint(8)) : bool

   
   Returns true if the argument is a valid initial byte of a UTF-8
   encoded multibyte character.
   

.. function:: proc _findStartOfNextCodepointFromByte( x: string,  i: byteIndex) 

   
   Returns the byte index of the beginning of the first codepoint starting from
   (and including) i
   

.. function:: proc _cleanupForNumericCast(ref x: ?t) 

.. function:: proc byte_isAscii( c: byteType) : bool

.. function:: proc byte_isWhitespace( c: byteType) : bool

.. function:: proc byte_isPrintable( c: byteType) : bool

.. function:: proc byte_isAlpha( c: byteType) : bool

.. function:: proc byte_isUpper( c: byteType) : bool

.. function:: proc byte_isLower( c: byteType) : bool

.. function:: proc byte_isDigit( c: byteType) : bool

.. function:: proc byte_isAlnum( c: byteType) : bool

.. function:: proc byte_toUpper( c: byteType) : byteType

.. function:: proc byte_toLower( c: byteType) : byteType

