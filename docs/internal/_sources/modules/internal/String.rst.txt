.. default-domain:: chpl

.. module:: String
   :noindex:

String
======
**Usage**

.. code-block:: chapel

   use String;


or

.. code-block:: chapel

   import String;

**Submodules**

.. toctree::
   :maxdepth: 1
   :glob:

   String/*


.. type:: string

supports the following methods:
 

.. data:: config param useCachedNumCodepoints = true

.. record:: byteIndex : writeSerializable

   .. attribute:: var _bindex: int

   .. method:: proc  init() 

   .. method:: proc  init( i: int) 

   .. method:: proc  init=( other: byteIndex) 

   .. method:: proc  init=( i: int) 

   .. method:: proc  serialize( writer, ref serializer)  throws

   .. method:: operator  :( val: byteIndex, type t: string) 

.. record:: codepointIndex : writeSerializable

   .. attribute:: var _cpindex: int

   .. method:: proc  init() 

   .. method:: proc  init( i: int) 

   .. method:: proc  init=( i: int) 

   .. method:: proc  init=( cpi: codepointIndex) 

   .. method:: proc  serialize( writer, ref serializer)  throws

   .. method:: operator  :( val: codepointIndex, type t: string) 

.. function:: proc chpl_build_bounded_range( low: byteIndex,  high: byteIndex) 

.. function:: proc chpl_build_bounded_range( low: codepointIndex,  high: codepointIndex) 

.. function:: proc chpl_build_low_bounded_range( low: byteIndex) 

.. function:: proc chpl_build_low_bounded_range( low: codepointIndex) 

.. function:: proc chpl_build_high_bounded_range( high: byteIndex) 

.. function:: proc chpl_build_high_bounded_range( high: codepointIndex) 

.. function:: proc chpl__rangeStrideType(type idxType: byteIndex) type

.. function:: proc chpl__rangeStrideType(type idxType: codepointIndex) type

.. function:: proc chpl__rangeUnsignedType(type idxType: byteIndex) type

.. function:: proc chpl__rangeUnsignedType(type idxType: codepointIndex) type

.. function:: proc chpl__idxToInt( i: byteIndex) 

.. function:: proc chpl__idxToInt( i: codepointIndex) 

.. function:: proc chpl__intToIdx(type idxType: byteIndex,  i: int) 

.. function:: proc chpl__intToIdx(type idxType: codepointIndex,  i: int) 

.. method:: operator  byteIndex.>( x: byteIndex,  y: byteIndex) 

.. method:: operator  codepointIndex.>( x: codepointIndex,  y: codepointIndex) 

.. method:: operator  byteIndex.>( x: byteIndex,  y: int) 

.. method:: operator  codepointIndex.>( x: codepointIndex,  y: int) 

.. method:: operator  byteIndex.>( x: int,  y: byteIndex) 

.. method:: operator  codepointIndex.>( x: int,  y: codepointIndex) 

.. method:: operator  byteIndex.+( x: byteIndex,  y: int) 

.. method:: operator  codepointIndex.+( x: codepointIndex,  y: int) 

.. method:: operator  byteIndex.+( x: int,  y: byteIndex) 

.. method:: operator  codepointIndex.+( x: int,  y: codepointIndex) 

.. function:: operator +( x: bufferType,  y: byteIndex) 

.. method:: operator  byteIndex.-( x: byteIndex,  y: int) 

.. method:: operator  codepointIndex.-( x: codepointIndex,  y: int) 

.. method:: operator  byteIndex.-( x: byteIndex,  y: byteIndex) 

.. method:: operator  codepointIndex.-( x: codepointIndex,  y: codepointIndex) 

.. method:: operator  byteIndex.<( x: byteIndex,  y: byteIndex) 

.. method:: operator  codepointIndex.<( x: codepointIndex,  y: codepointIndex) 

.. method:: operator  byteIndex.<( x: byteIndex,  y: int) 

.. method:: operator  codepointIndex.<( x: codepointIndex,  y: int) 

.. method:: operator  byteIndex.<( x: int,  y: byteIndex) 

.. method:: operator  codepointIndex.<( x: int,  y: codepointIndex) 

.. method:: operator  byteIndex.>=( x: byteIndex,  y: byteIndex) 

.. method:: operator  codepointIndex.>=( x: codepointIndex,  y: codepointIndex) 

.. method:: operator  byteIndex.>=( x: byteIndex,  y: int) 

.. method:: operator  codepointIndex.>=( x: codepointIndex,  y: int) 

.. method:: operator  byteIndex.>=( x: int,  y: byteIndex) 

.. method:: operator  codepointIndex.>=( x: int,  y: codepointIndex) 

.. method:: operator  byteIndex.<=( x: byteIndex,  y: byteIndex) 

.. method:: operator  codepointIndex.<=( x: codepointIndex,  y: codepointIndex) 

.. method:: operator  byteIndex.<=( x: byteIndex,  y: int) 

.. method:: operator  codepointIndex.<=( x: codepointIndex,  y: int) 

.. method:: operator  byteIndex.<=( x: int,  y: byteIndex) 

.. method:: operator  codepointIndex.<=( x: int,  y: codepointIndex) 

.. method:: operator  byteIndex.==( x: byteIndex,  y: byteIndex) 

.. method:: operator  codepointIndex.==( x: codepointIndex,  y: codepointIndex) 

.. method:: operator  byteIndex.==( x: byteIndex,  y: int) 

.. method:: operator  codepointIndex.==( x: codepointIndex,  y: int) 

.. method:: operator  byteIndex.==( x: int,  y: byteIndex) 

.. method:: operator  codepointIndex.==( x: int,  y: codepointIndex) 

.. method:: operator  byteIndex.!=( x: byteIndex,  y: byteIndex) 

.. method:: operator  codepointIndex.!=( x: codepointIndex,  y: codepointIndex) 

.. method:: operator  byteIndex.!=( x: byteIndex,  y: int) 

.. method:: operator  codepointIndex.!=( x: codepointIndex,  y: int) 

.. method:: operator  byteIndex.!=( x: int,  y: byteIndex) 

.. method:: operator  codepointIndex.!=( x: int,  y: codepointIndex) 

.. method:: operator  byteIndex.!( x: byteIndex) 

.. method:: operator  codepointIndex.!( x: codepointIndex) 

.. function:: proc _cond_test( x: byteIndex) 

.. function:: proc _cond_test( x: codepointIndex) 

.. method:: proc type string.createBorrowingBuffer( x: string) : string

   .. warning::

      'createBorrowingBuffer' is unstable and may change in the future

   
   Creates a new :type:`string` which borrows the internal buffer of another string. If
   the buffer is freed before the string returned from this function, accessing
   it is undefined behavior.
   
   :arg x: Object to borrow the buffer from
   :type x: `string`
   
   :returns: A new :type:`string`
   

.. method:: proc type string.createBorrowingBuffer( x: c_ptr(?t),  length = strLen(x)) : string throws

   .. warning::

      'createBorrowingBuffer' is unstable and may change in the future

   
   Creates a new :type:`string` which borrows the memory allocated for a :class:`~CTypes.c_ptr`. If
   the buffer is freed before the :type:`string` returned from this function, accessing
   it is undefined behavior.
   
   :arg x: The buffer to borrow from
   :type x: `c_ptr(uint(8))` or `c_ptr(int(8))`
   
   :arg length: Length of the string stored in `x` in bytes, excluding the optional
                terminating null byte.
   :type length: `int`
   
   :throws: A :class:`~Errors.DecodeError`: if `x` contains non-UTF-8
    characters.
   
   :returns: A new :type:`string`
   

.. method:: proc type string.createBorrowingBuffer( x: c_ptrConst(?t),  length = strLen(x)) : string throws

   .. warning::

      'createBorrowingBuffer' is unstable and may change in the future

   
   Creates a new :type:`string` which borrows the memory allocated for a :class:`~CTypes.c_ptrConst`. If
   the buffer is freed before the :type:`string` returned from this function, accessing
   it is undefined behavior.
   
   :arg x: The buffer to borrow from
   :type x: `c_ptrConst(uint(8))` or `c_ptrConst(int(8))`
   
   :arg length: Length of the string stored in `x` in bytes, excluding the optional
                terminating null byte.
   :type length: `int`
   
   :throws: A :class:`~Errors.DecodeError`: if `x` contains non-UTF-8
    characters.
   
   :returns: A new :type:`string`
   

.. function:: proc chpl_createStringWithLiteral( buffer: chpl_c_string,  offset: int,  x: chpl_c_string,  length: int,  numCodepoints: int) : string

.. method:: proc type string.createBorrowingBuffer( x: c_ptr(?t),  length: int,  size: int) : string throws

   .. warning::

      'createBorrowingBuffer' is unstable and may change in the future

   
   Creates a new :type:`string` which borrows the memory allocated for a :class:`~CTypes.c_ptr`. If
   the buffer is freed before the :type:`string` returned from this function,
   accessing it is undefined behavior.
   
   :arg x: The buffer to borrow from
   :type x: `c_ptr(uint(8))` or `c_ptr(int(8))`
   
   :arg length: Length of the string stored in `x` in bytes, excluding the
                optional terminating null byte.
   :type length: `int`
   
   :arg size: Size of memory allocated for `x` in bytes
   :type length: `int`
   
   :throws: A :class:`~Errors.DecodeError`: if `x` contains non-UTF-8
    characters.
   
   :returns: A new :type:`string`
   

.. method:: proc type string.createBorrowingBuffer( x: chpl_c_string,  length = x.size) : string throws

   .. warning::

      the type 'c_string' is deprecated; please use the variant of 'string.createBorrowingBuffer' that takes a 'c_ptrConst(c_char)' instead

.. method:: proc type string.createAdoptingBuffer( x: c_ptr(?t),  length = strLen(x)) : string throws

   
   Creates a new :type:`string` which takes ownership of the memory allocated for a
   :class:`~CTypes.c_ptr`. The buffer will be freed when the :type:`string` is deinitialized.
   
   :arg x: The buffer to take ownership of
   :type x: `c_ptr(uint(8))` or `c_ptr(int(8))`
   
   :arg length: Length of the string stored in `x` in bytes, excluding the optional
                terminating null byte.
   :type length: `int`
   
   :throws: A :class:`~Errors.DecodeError`: if `x` contains non-UTF-8
    characters. In that event, this function does not free `x`; that is
    the caller's responsibility.
   
   :returns: A new :type:`string`
   

.. method:: proc type string.createAdoptingBuffer( x: chpl_c_string,  length = x.size) : string throws

   .. warning::

      the type 'c_string' is deprecated; please use the variant of 'string.createAdoptingBuffer' that takes a 'c_ptrConst(c_char)' instead

.. method:: proc type string.createAdoptingBuffer( x: c_ptrConst(?t),  length = strLen(x)) : string throws

   
   Creates a new :type:`string` which takes ownership of the memory allocated for a
   :class:`~CTypes.c_ptrConst`. The buffer will be freed when the :type:`string`
   is deinitialized.
   
   :arg x: The buffer to take ownership of
   :type x: `c_ptrConst(uint(8))` or `c_ptrConst(int(8))`
   
   :arg length: Length of the string stored in `x` in bytes, excluding the optional
                terminating null byte.
   :type length: `int`
   
   :throws: A :class:`~Errors.DecodeError`: if `x` contains non-UTF-8
    characters. In that event, this function does not free `x`; that is the
    caller's responsibility.
   
   :returns: A new :type:`string`
   

.. method:: proc type string.createAdoptingBuffer( x: c_ptr(?t),  length: int,  size: int) : string throws

   
   Creates a new :type:`string` which takes ownership of the memory allocated for a
   :class:`~CTypes.c_ptr`. The buffer will be freed when the :type:`string` is deinitialized.
   
   :arg x: The buffer to take ownership of
   :type x: `c_ptr(uint(8))` or `c_ptr(int(8))`
   
   :arg length: Length of the string stored in `x` in bytes, excluding the
                optional terminating null byte.
   :type length: `int`
   
   :arg size: Size of memory allocated for `x` in bytes
   :type length: `int`
   
   :throws: A :class:`~Errors.DecodeError`: if `x` contains non-UTF-8
    characters. In that event, this function does not free `x`; that is the
    caller's responsibility.
   
   :returns: A new :type:`string`
   

.. method:: proc type string.createCopyingBuffer( x: c_ptrConst(?t),  length = strLen(x),  policy = decodePolicy.strict) : string throws

   
   Creates a new :type:`string` by creating a copy of the memory allocated for a :class:`~CTypes.c_ptrConst`.
   
   :arg x: The buffer to copy
   :type x: `c_ptrConst(uint(8))` or `c_ptrConst(int(8))`
   
   :arg length: Length of `x` in bytes, excluding the optional terminating null byte.
   :type length: `int`
   
   :arg policy: - `decodePolicy.strict` raises an error
                - `decodePolicy.replace` replaces the malformed character with
                  UTF-8 replacement character
                - `decodePolicy.drop` drops the data silently
                - `decodePolicy.escape` escapes each illegal byte with private
                  use codepoints
   
   :throws: A :class:`~Errors.DecodeError`: if `decodePolicy.strict` is
     passed to the `policy` argument and `x` contains non-UTF-8 characters.
   
   :returns: A new :type:`string`
   

.. method:: proc type string.createCopyingBuffer( x: c_ptr(?t),  length = strLen(x),  size = length + 1,  policy = decodePolicy.strict) : string throws

   
   Creates a new :type:`string` by creating a copy of a buffer.
   
   :arg x: The buffer to copy
   :type x: `c_ptr(uint(8))` or `c_ptr(int(8))`
   
   :arg length: Length of the string stored in `x` in bytes, excluding the
                optional terminating null byte.
   :type length: `int`
   
   :arg size: Size of memory allocated for `x` in bytes. This argument is
              ignored by this function.
   :type size: `int`
   
   :arg policy: `decodePolicy.strict` raises an error, `decodePolicy.replace`
                 replaces the malformed character with UTF-8 replacement
                 character, `decodePolicy.drop` drops the data silently,
                 `decodePolicy.escape` escapes each illegal byte with private
                 use codepoints
   
   :throws: A :class:`~Errors.DecodeError`: if `decodePolicy.strict` is
    passed to the `policy` argument and `x` contains non-UTF-8 characters.
   
   :returns: A new :type:`string`
   

.. method:: proc type string.createCopyingBuffer( x: chpl_c_string,  length = x.size,  policy = decodePolicy.strict) : string throws

   .. warning::

      the type 'c_string' is deprecated; please use the variant of 'string.createCopyingBuffer' that takes a 'c_ptrConst(c_char)' instead

.. record:: _string : writeSerializable

   .. attribute:: var buffLen: int = 0

   .. attribute:: var buffSize: int = 0

   .. attribute:: var cachedNumCodepoints: int = 0

   .. attribute:: var buff: bufferType = nil

   .. attribute:: var isOwned: bool = true

   .. attribute:: var hasEscapes: bool = false

   .. attribute:: var locale_id = chpl_nodeID

   .. method:: proc  init() 

   .. method:: proc  init=( s: string) 

   .. method:: proc ref deinit() 

   .. method:: proc  chpl__serialize() 

   .. method:: proc type chpl__deserialize( data) 

   .. method:: proc  isASCII() 

   .. method:: proc  byteIndices 

   .. method:: proc  _cpIndexLenHelpNoAdjustment(ref start: int) 

   .. itermethod:: iter  _cpIndexLen( start = 0: byteIndex) 

      
      Iterates over the string Unicode character by Unicode character,
      and includes the byte index and byte length of each character.
      Skip characters that begin prior to the specified starting byte index.
      Assume we may accidentally start in the middle of a multibyte character,
      but the string is correctly encoded UTF-8.
      

   .. itermethod:: iter  _indexLen( start = 0: byteIndex) 

      
      Iterates over the string Unicode character by Unicode character,
      and returns the byte index and byte length of each character.
      Skip characters that begin prior to the specified starting byte index.
      Assume we may accidentally start in the middle of a multibyte character,
      but the string is correctly encoded UTF-8.
      

   .. method:: proc  substring( i: int) 

   .. method:: proc  substring( r: range) 

   .. method:: proc  serialize( writer, ref serializer)  throws

   .. method:: proc  doSplitWSUTF8Help( maxsplit: int, ref i: int, const splitCount: int, const noSplits: bool, const limitSplits: bool, const iEnd: byteIndex) 

   .. itermethod:: iter  doSplitWSUTF8( maxsplit: int) 

   .. method:: proc  doSearchUTF8( pattern: string,  indices: range(?), param count: bool, param fromLeft: bool = true) 

   .. method:: proc  join(const ref x: [] string) : string

   .. method:: proc  join(const ref x)  where isTuple(x)

   .. method:: proc  join( ir: _iteratorRecord) : string

   .. method:: proc  capitalize() : string

      
      :returns: A new :type:`string` with the first character in uppercase (if it is a
                case character), and all other case characters in lowercase.
                Uncased characters are copied with no changes.
      

.. method:: proc const string.size : int

   
   :returns: The number of codepoints in the :type:`string`.
   

.. method:: proc  string.indices : range

   
   :returns: The indices that can be used to index into the :type:`string`
             (i.e., the range ``0..<this.size``)
   

.. method:: proc  string.numBytes : int

   
   :returns: The number of bytes in the :type:`string`.
   

.. method:: proc const string.numCodepoints : int

   
   :returns: The number of codepoints in the :type:`string`, assuming the
             string is correctly-encoded UTF-8.
   

.. method:: proc  string.localize() : string

   .. warning::

      string.localize() is unstable and may change in a future release

   
   Gets a version of the :type:`string` that is on the currently
   executing locale.
   
   :returns: A shallow copy if the :type:`string` is already on the
             current locale, otherwise a deep copy is performed.
   

.. method:: proc  string.c_str() : c_ptrConst(c_char)

   .. warning::

      'string.c_str()' has moved to 'CTypes'. Please 'use CTypes' to access ':proc:`~CTypes.string.c_str`'

   
   Get a `c_ptrConst(c_char)` from a :type:`string`. The returned
   :class:`~CTypes.c_ptrConst` shares the buffer with the :type:`string`.
   
   .. warning::
   
       This can only be called safely on a :type:`string` whose home is
       the current locale.  This property can be enforced by calling
       :proc:`string.localize()` before :proc:`string.c_str()`. If the
       string is remote, the program will halt.
   
   For example:
   
   .. code-block:: chapel
   
     var my_string = "Hello!";
     on different_locale {
       printf("%s", my_string.localize().c_str());
     }
   
   :returns:
       A `c_ptrConst(c_char)` that points to the underlying buffer used by this
       :type:`string`. The returned `c_ptrConst(c_char)` is only valid when used
       on the same locale as the string.
   

.. method:: proc  string.encode( policy = encodePolicy.pass) : bytes

   
   Returns a :type:`~Bytes.bytes` from the given :type:`string`. If the
   string contains some escaped non-UTF8 bytes, `policy` argument determines
   the action.
   
   :arg policy: `encodePolicy.pass` directly copies the (potentially escaped)
                 data, `encodePolicy.unescape` recovers the escaped bytes
                 back.
   
   :returns: :type:`~Bytes.bytes`
   

.. itermethod:: iter  string.items() : string

   
   Iterates over the :type:`string` character by character.
   
   For example:
   
   .. code-block:: chapel
   
     var str = "abcd";
     for c in str.items() {
       writeln(c);
     }
   
   Output::
   
     a
     b
     c
     d
   

.. itermethod:: iter  string.these() : string

   
   Iterates over the :type:`string` character by character, yielding 1-codepoint
   strings. (A synonym for :iter:`string.items`)
   
   For example:
   
   .. code-block:: chapel
   
     var str = "abcd";
     for c in str {
       writeln(c);
     }
   
   Output::
   
     a
     b
     c
     d
   

.. itermethod:: iter  string.chpl_bytes() : uint(8)

   
   Iterates over the :type:`string` byte by byte.
   

.. itermethod:: iter  string.codepoints() : int(32)

   
   Iterates over the :type:`string` Unicode character by Unicode character.
   

.. method:: proc  string.toByte() : uint(8)

   
   :returns: The value of a single-byte :type:`string` as an integer.
   

.. method:: proc  string.byte( i: int) : uint(8)

   
   :returns: The value of the `i` th byte as an integer.
   

.. method:: proc  string.toCodepoint() : int(32)

   
   :returns: The value of a single-codepoint :type:`string` as an integer.
   

.. method:: proc  string.codepoint( i: int) : int(32)

   
   :returns: The value of the `i` th multibyte character as an integer.
   

.. method:: proc  string.this( i: byteIndex) : string

   
   Return the codepoint starting at the `i` th byte in the :type:`string`
   
   :returns: A new :type:`string` with the complete multibyte character starting at the
             specified byte index from ``0..#string.numBytes``
   

.. method:: proc  string.this( i: codepointIndex) : string

   
   Return the `i` th codepoint in the :type:`string`. (A synonym for :proc:`string.item`)
   
   :returns: A new :type:`string` with the complete multibyte character starting at the
             specified codepoint index from ``0..#string.numCodepoints``
   

.. method:: proc  string.this( i: int) : string

   
   Return the `i` th codepoint in the :type:`string`. (A synonym for :proc:`string.item`)
   
   :returns: A new :type:`string` with the complete multibyte character starting at the
             specified codepoint index from ``1..string.numCodepoints``
   

.. method:: proc  string.item( i: codepointIndex) : string

   
   Return the `i` th codepoint in the :type:`string`
   
   :returns: A new :type:`string` with the complete multibyte character starting at the
             specified codepoint index from ``1..string.numCodepoints``
   

.. method:: proc  string.item( i: int) : string

   
   Return the `i` th codepoint in the :type:`string`
   
   :returns: A new :type:`string` with the complete multibyte character starting at the
             specified codepoint index from ``0..#string.numCodepoints``
   

.. method:: proc  string.this( r: range(?)) : string throws where r.idxType == byteIndex

   
   Slice a :type:`string`. Halts if r is non-empty and not completely inside the
   range ``0..<string.size`` when compiled with `--checks`. `--fast`
   disables this check.
   
   :arg r: range of the indices the new :type:`string` should be made from
   
   :throws: throws a :class:`~Errors.CodepointSplitError`: if slicing results
     in splitting a multi-byte codepoint.
   
   :returns: A new :type:`string` that is a substring within ``0..<string.size``. If
             the length of `r` is zero, an empty string is returned.
   

.. method:: proc  string.this( r: range(?)) : string where r.idxType != byteIndex

.. method:: proc  string.isEmpty() : bool

   
   :returns: * `true`  -- when the :type:`string` is empty
             * `false` -- otherwise
   

.. method:: proc  string.startsWith(patterns: string ...) : bool

   
   :arg patterns: A varargs list of strings to match against.
   
   :returns: * `true`  -- when the :type:`string` begins with one or more of the `patterns`
             * `false` -- otherwise
   

.. method:: proc  string.endsWith(patterns: string ...) : bool

   
   :arg patterns: A varargs list of strings to match against.
   
   :returns: * `true`  -- when the :type:`string` ends with one or more of the `patterns`
             * `false` -- otherwise
   

.. method:: proc  string.find( pattern: string,  indices: range(?) = this.byteIndices: range(byteIndex)) : byteIndex

   
   :arg pattern: the :type:`string` to search for
   :arg indices: an optional range defining the substring to search within,
                default is the whole string. Halts if the range is not
                within ``0..<string.size``
   
   :returns: the index of the first occurrence of `pattern` within a
             :type:`string`, or -1 if the `pattern` is not in the string.
   

.. method:: proc  string.rfind( pattern: string,  indices: range(?) = this.byteIndices: range(byteIndex)) : byteIndex

   
   :arg pattern: the :type:`string` to search for
   :arg indices: an optional range defining the substring to search within,
                default is the whole string. Halts if the range is not
                within ``0..<string.size``
   
   :returns: the index of the first occurrence from the right of `pattern`
             within a string, or -1 if the `pattern` is not in the string.
   

.. method:: proc  string.count( pattern: string,  indices: range(?) = this.indices) : int

   
   :arg pattern: the :type:`string` to search for
   :arg indices: an optional range defining the substring to search within,
                default is the whole string. Halts if the range is not
                within ``0..<string.size``
   
   :returns: the number of times `pattern` occurs in the string
   

.. method:: proc  string.replace( pattern: string,  replacement: string,  count: int = -1) : string

   
   :arg pattern: the :type:`string` to search for
   :arg replacement: the :type:`string` to replace `pattern` with
   :arg count: an optional integer specifying the number of replacements to
               make, values less than zero will replace all occurrences
   
   :returns: a copy of the :type:`string` where `replacement` replaces `pattern` up
             to `count` times
   

.. itermethod:: iter  string.split( sep: string,  maxsplit: int = -1,  ignoreEmpty: bool = false) : string

   
   Splits the :type:`string` on `sep` yielding the substring between each
   occurrence, up to `maxsplit` times.
   
   :arg sep: The delimiter used to break the string into chunks.
   :arg maxsplit: The number of times to split the string, negative values
                  indicate no limit.
   :arg ignoreEmpty: * When `true`  -- Empty strings will not be yielded,
                                       and will not count towards `maxsplit`
                     * When `false` -- Empty strings will be yielded when
                                       `sep` occurs multiple times in a row.
   

.. itermethod:: iter  string.split( maxsplit: int = -1) : string

   
   Works as above, but uses runs of whitespace as the delimiter.
   
   :arg maxsplit: The number of times to split the :type:`string`, negative values
                  indicate no limit.
   

.. method:: proc  string.join(const ref x: string ...) : string

   
   Returns a new :type:`string`, which is the concatenation of all of
   the :type:`string` passed in with the contents of the method
   receiver inserted between them.
   
   .. code-block:: chapel
   
       var myString = "|".join("a","10","d");
       writeln(myString); // prints: "a|10|d"
   
   :arg x: :type:`string` values to be joined
   
   :returns: A new :type:`string`
   

.. method:: proc  string.join(const ref x) : string

   
   Returns a new :type:`string`, which is the concatenation of all of
   the :type:`string` passed in with the contents of the method
   receiver inserted between them.
   
   .. code-block:: chapel
   
       var tup = ("a","10","d");
       var myJoinedTuple = "|".join(tup);
       writeln(myJoinedTuple); // prints: "a|10|d"
   
       var myJoinedArray = "|".join(["a","10","d"]);
       writeln(myJoinedArray); // prints: "a|10|d"
   
   :arg x: An array or tuple of :type:`string` values to be joined
   
   :returns: A new :type:`string`
   

.. method:: proc  string.strip( chars: string = " \t\r\n",  leading = true,  trailing = true) : string

   
   :arg chars: A :type:`string` containing each character to remove.
               Defaults to `" \\t\\r\\n"`.
   :arg leading: Indicates if leading occurrences should be removed.
                 Defaults to `true`.
   :arg trailing: Indicates if trailing occurrences should be removed.
                   Defaults to `true`.
   
   :returns: A new :type:`string` with `leading` and/or `trailing` occurrences of
             characters in `chars` removed as appropriate.
   

.. method:: proc const string.partition( sep: string) : 3*(string)

   
   Splits the string on `sep` into a `3*string` consisting of the section
   before `sep`, `sep`, and the section after `sep`. If `sep` is not found,
   the tuple will contain the whole string, and then two empty strings.
   

.. method:: proc  string.dedent( columns = 0,  ignoreFirst = true) : string

   .. warning::

      string.dedent is subject to change in the future.

   Remove indentation from each line of a :type:`string`.
   
   This can be useful when applied to multi-line strings that are indented
   in the source code, but should not be indented in the output.
   
   When ``columns == 0``, determine the level of indentation to remove from
   all lines by finding the common leading whitespace across all non-empty
   lines. Empty lines are lines containing only whitespace. Tabs and spaces
   are the only whitespaces that are considered, but are not treated as
   the same characters when determining common whitespace.
   
   When ``columns > 0``, remove ``columns`` leading whitespace characters
   from each line. Tabs are not considered whitespace when ``columns > 0``,
   so only leading spaces are removed.
   
   :arg columns: The number of columns of indentation to remove. Infer
                 common leading whitespace if ``columns == 0``.
   
   :arg ignoreFirst: When ``true``, ignore first line when determining the
                     common leading whitespace, and make no changes to the
                     first line.
   
   :returns: A new :type:`string` with indentation removed.
   

.. method:: proc  string.isUpper() : bool

   
   Checks if all the characters in the :type:`string` are either uppercase (A-Z) or
   uncased (not a letter).
   
   :returns: * `true`  -- if the string contains at least one uppercase character and no lowercase characters, ignoring uncased characters.
             * `false` -- otherwise
   

.. method:: proc  string.isLower() : bool

   
   Checks if all the characters in the :type:`string` are either lowercase (a-z) or
   uncased (not a letter).
   
   :returns: * `true`  -- when there are no uppercase characters in the string.
             * `false` -- otherwise
   

.. method:: proc  string.isSpace() : bool

   
   Checks if all the characters in the :type:`string` are whitespace ('  ', '\\t',
   '\\n', '\\v', '\\f', '\\r').
   
   :returns: * `true`  -- when all the characters are whitespace.
             * `false` -- otherwise
   

.. method:: proc  string.isAlpha() : bool

   
   Checks if all the characters in the :type:`string` are alphabetic (a-zA-Z).
   
   :returns: * `true`  -- when the characters are alphabetic.
             * `false` -- otherwise
   

.. method:: proc  string.isDigit() : bool

   
   Checks if all the characters in the :type:`string` are digits (0-9).
   
   :returns: * `true`  -- when the characters are digits.
             * `false` -- otherwise
   

.. method:: proc  string.isAlnum() : bool

   
   Checks if all the characters in the :type:`string` are alphanumeric (a-zA-Z0-9).
   
   :returns: * `true`  -- when the characters are alphanumeric.
             * `false` -- otherwise
   

.. method:: proc  string.isPrintable() : bool

   
   Checks if all the characters in the :type:`string` are printable.
   
   :returns: * `true`  -- when the characters are printable.
             * `false` -- otherwise
   

.. method:: proc  string.isTitle() : bool

   
   Checks if all uppercase characters are preceded by uncased characters,
   and if all lowercase characters are preceded by cased characters.
   
   :returns: * `true`  -- when the condition described above is met.
             * `false` -- otherwise
   

.. method:: proc  string.toLower() : string

   
   :returns: A new :type:`string` with all uppercase characters replaced with their
             lowercase counterpart.
   
   .. note::
   
     The case change operation is not currently performed on characters whose
     cases take different number of bytes to represent in Unicode mapping.
   

.. method:: proc  string.toUpper() : string

   
   :returns: A new :type:`string` with all lowercase characters replaced with their
             uppercase counterpart.
   
   .. note::
   
     The case change operation is not currently performed on characters whose
     cases take different number of bytes to represent in Unicode mapping.
   

.. method:: proc  string.toTitle() : string

   
   :returns: A new :type:`string` with all cased characters following an uncased
             character converted to uppercase, and all cased characters
             following another cased character converted to lowercase.
   
   .. note::
   
     The case change operation is not currently performed on characters whose
     cases take different number of bytes to represent in Unicode mapping.
   

.. method:: operator  byteIndex. = (ref lhs: byteIndex,  rhs: int) 

   
   Copies the int `rhs` into the byteIndex `lhs`.
   

.. method:: operator  byteIndex. = (ref lhs: byteIndex, const ref rhs: byteIndex) 

.. method:: operator  codepointIndex. = (ref lhs: codepointIndex,  rhs: int) 

   
   Copies the int `rhs` into the codepointIndex `lhs`.
   

.. method:: operator  codepointIndex. = (ref lhs: codepointIndex, const ref rhs: codepointIndex) 

.. function:: operator  = (ref lhs: string,  rhs: string) : void

   
   Copies the :type:`string` `rhs` into the :type:`string` `lhs`.
   

.. method:: operator  string.+( s0: string,  s1: string) : string

   
   :returns: A new :type:`string` which is the result of concatenating `s0` and `s1`
   

.. function:: operator *( s: string,  n: integral) : string

   
   :returns: A new :type:`string` which is the result of repeating `s` `n` times.
             If `n` is less than or equal to 0, an empty :type:`string` is returned.
   
   The operation is commutative.
   For example:
   
   .. code-block:: chapel
   
      writeln("Hello! " * 3);
      or
      writeln(3 * "Hello! ");
   
   Results in::
   
     Hello! Hello! Hello!
   

.. function:: operator *( n: integral,  s: string) 

.. method:: operator  string.==(param s0: string, param s1: string) param

.. method:: operator  string.!=(param s0: string, param s1: string) param

.. method:: operator  string.<=(param a: string, param b: string) param

.. method:: operator  string.>=(param a: string, param b: string) param

.. method:: operator  string.<(param a: string, param b: string) param

.. method:: operator  string.>(param a: string, param b: string) param

.. method:: operator  string.+(param a: string, param b: string) param

.. method:: proc param string.toByte() param: uint(8)

.. method:: proc param string.byte(param i: int) param: uint(8)

.. method:: proc param string.this(param i: int) param: string

.. method:: proc param string.item(param i: int) param: string

.. method:: proc param string.numBytes param

.. method:: proc param string.numCodepoints param

.. method:: proc param string.size param

.. function:: proc _string_contains(param a: string, param b: string) param

.. method:: operator  string.+=(ref lhs: string, const ref rhs: string) : void

   
   Appends the string `rhs` to the string `lhs`.
   

.. method:: proc ref string.appendCodepointValues(codepoints: int ...) : void

   .. warning::

      'string.appendCodepointValues' is unstable and may change in the future

   
   Appends the codepoint values passed to the :type:`string` `this`.
   
   Any argument not in 0..0x10FFFF is not valid Unicode codepoint.
   This function will append the replacement character 0xFFFD instead of
   such invalid arguments.
   

.. method:: operator  string.==( a: string,  b: string) : bool

.. method:: operator  string.!=( a: string,  b: string) : bool

.. method:: operator  string.<( a: string,  b: string) : bool

.. method:: operator  string.>( a: string,  b: string) : bool

.. method:: operator  string.<=( a: string,  b: string) : bool

.. method:: operator  string.>=( a: string,  b: string) : bool

.. type:: type wint_t = int(32)

.. function:: proc codepointToString( i: int(32)) : string

   
   :returns: A new :type:`string` storing the complete multibyte character sequence
             that corresponds to the codepoint value `i`.
   

.. function:: operator :( cs: c_string, type t: string) 

   .. warning::

      the type 'c_string' is deprecated; please use one of the 'string.create*ingBuffer' methods that takes a 'c_ptrConst(c_char)' instead

.. function:: operator :( cpi: byteIndex, type t: int) 

.. function:: operator :( i: int, type t: byteIndex) 

.. function:: operator :( cpi: codepointIndex, type t: int) 

.. function:: operator :( i: int, type t: codepointIndex) 

.. method:: proc  string.hash() : uint

.. method:: operator  string.<=>(ref x: string, ref y: string) 

