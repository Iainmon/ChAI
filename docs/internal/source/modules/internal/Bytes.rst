.. default-domain:: chpl

.. module:: Bytes
   :noindex:

Bytes
=====
**Usage**

.. code-block:: chapel

   use Bytes;


or

.. code-block:: chapel

   import Bytes;


.. type:: bytes

Supports the following methods:

.. method:: proc type bytes.createBorrowingBuffer( x: bytes) : bytes

   .. warning::

      'createBorrowingBuffer' is unstable and may change in the future

   
   Creates a new :type:`bytes` which borrows the internal buffer of
   another :type:`bytes`. If the buffer is freed before the :type:`bytes`
   returned from this function, accessing it is undefined behavior.
   
   :arg x: The :type:`bytes` to borrow the buffer from
   
   :returns: A new :type:`bytes`
   

.. method:: proc type bytes.createBorrowingBuffer( x: chpl_c_string,  length = x.size) : bytes

   .. warning::

      the type 'c_string' is deprecated; please use the variant of 'bytes.createBorrowingBuffer' that takes a 'c_ptrConst(c_char)' instead

.. method:: proc type bytes.createBorrowingBuffer( x: c_ptr(?t),  length = strLen(x)) : bytes

   .. warning::

      'createBorrowingBuffer' is unstable and may change in the future

   
   Creates a new :type:`bytes` which borrows the memory allocated for a
   `c_ptr`. If the buffer is freed before the :type:`bytes` returned
   from this function, accessing it is undefined behavior.
   
   :arg x: `c_ptr` to borrow as a buffer
   :type x: `c_ptr(int(8))` or `c_ptr(uint(8))`
   
   :arg length: Length of `x`, excluding the optional terminating null byte.
                Defaults to the number of bytes in `x` before the terminating
                null byte.
   :type length: `int`
   
   :returns: A new :type:`bytes`
   

.. method:: proc type bytes.createBorrowingBuffer( x: c_ptrConst(?t),  length = strLen(x)) : bytes

   .. warning::

      'createBorrowingBuffer' is unstable and may change in the future

   
   Creates a new :type:`bytes` which borrows the memory allocated for a
   :class:`~CTypes.c_ptrConst`. If the buffer is freed before the :type:`bytes` returned
   from this function, accessing it is undefined behavior.
   
   :arg x: `c_ptrConst` to borrow as a buffer
   :type x: `c_ptrConst(uint(8))` or `c_ptrConst(int(8))`
   
   :arg length: Length of `x`, excluding the optional terminating null byte.
                Defaults to the number of bytes in `x` before the terminating
                null byte.
   :type length: `int`
   
   :returns: A new :type:`bytes`
   

.. function:: proc chpl_createBytesWithLiteral( buffer: chpl_c_string,  offset: int,  x: chpl_c_string,  length: int) 

.. method:: proc type bytes.createBorrowingBuffer( x: c_ptr(?t),  length: int,  size: int) : bytes

   .. warning::

      'createBorrowingBuffer' is unstable and may change in the future

   
   Creates a new :type:`bytes` which borrows the memory allocated for a
   `c_ptr`. If the buffer is freed before the :type:`bytes` returned
   from this function, accessing it is undefined behavior.
   
   :arg x: Buffer to borrow
   :type x: `c_ptr(uint(8))` or `c_ptr(int(8))`
   
   :arg length: Length of the buffer `x`, excluding the optional terminating
                null byte.
   
   :arg size: Size of memory allocated for `x` in bytes
   
   :returns: A new :type:`bytes`
   

.. method:: proc type bytes.createAdoptingBuffer( x: c_ptr(?t),  length = strLen(x)) : bytes

   
   Creates a new :type:`bytes` which takes ownership of the memory
   allocated for a `c_ptr`. The buffer will be freed when the
   :type:`bytes` is deinitialized.
   
   :arg x: The `c_ptr` to take ownership of
   :type x: `c_ptr(uint(8))` or `c_ptr(int(8))`
   
   :arg length: Length of buffer `x`, excluding the optional terminating null
                byte. Defaults to the number of bytes in `x` before the
                terminating null byte.
   :type length: `int`
   
   :returns: A new :type:`bytes`
   

.. method:: proc type bytes.createAdoptingBuffer( x: chpl_c_string,  length = x.size) : bytes

   .. warning::

      the type 'c_string' is deprecated; please use the variant of 'bytes.createAdoptingBuffer' that takes a 'c_ptrConst(c_char)' instead

.. method:: proc type bytes.createAdoptingBuffer( x: c_ptrConst(?t),  length = strLen(x)) : bytes

   
   Creates a new :type:`bytes` which takes ownership of the memory
   allocated for a :class:`~CTypes.c_ptrConst`. The buffer will be freed when the
   :type:`bytes` is deinitialized.
   
   :arg x: The `c_ptrConst` to take ownership of
   :type x: `c_ptrConst(uint(8))` or `c_ptrConst(int(8))`
   
   :arg length: Length of `x`'s buffer, excluding the optional terminating null
                byte. Defaults to the number of bytes in `x` before the
                terminating null byte.
   :type length: `int`
   
   :returns: A new :type:`bytes`
   

.. method:: proc type bytes.createAdoptingBuffer( x: c_ptr(?t),  length: int,  size: int) : bytes

   
   Creates a new :type:`bytes` which takes ownership of the memory
   allocated for a `c_ptr`. The buffer will be freed when the
   :type:`bytes` is deinitialized.
   
   :arg x: The buffer to take ownership of
   :type x: `c_ptr(uint(8))` or `c_ptr(int(8))`
   
   :arg length: Length of the buffer `x`, excluding the optional terminating
                null byte.
   
   :arg size: Size of memory allocated for `x` in bytes
   
   :returns: A new :type:`bytes`
   

.. method:: proc type bytes.createCopyingBuffer( x: c_ptrConst(?t),  length = strLen(x)) : bytes

   
   Creates a new :type:`bytes` by creating a copy of a buffer
   
   :arg x: The :class:`~CTypes.c_ptrConst` to copy
   :type x: `c_ptrConst(uint(8))` or `c_ptrConst(int(8))`
   
   :arg length: Length of buffer `x`, excluding the optional terminating null
                byte. Defaults to the number of bytes in `x` before the
                terminating null byte.
   :type length: `int`
   
   :returns: A new :type:`bytes`
   

.. method:: proc type bytes.createCopyingBuffer( x: chpl_c_string,  length = x.size) : bytes

   .. warning::

      the type 'c_string' is deprecated; please use the variant of 'bytes.createCopyingBuffer' that takes a 'c_ptrConst(c_char)' instead

.. method:: proc type bytes.createCopyingBuffer( x: c_ptr(?t),  length = strLen(x),  size = length + 1) : bytes

   
   Creates a new :type:`bytes` by creating a copy of a buffer.
   
   :arg x: The buffer to copy
   :type x: `c_ptr(uint(8))` or `c_ptr(int(8))`
   
   :arg length: Length of buffer `x`, excluding the optional terminating null
                byte. Defaults to the number of bytes in `x` before the
                terminating null byte.
   
   :arg size: Size of memory allocated for `x` in bytes
   
   :returns: A new :type:`bytes`
   

.. record:: _bytes : writeSerializable, readDeserializable

   .. attribute:: var buffLen: int = 0

   .. attribute:: var buffSize: int = 0

   .. attribute:: var buff: bufferType = nil

   .. attribute:: var isOwned: bool = true

   .. attribute:: var locale_id = chpl_nodeID

   .. method:: proc  init() 

   .. method:: proc ref deinit() 

   .. method:: proc  chpl__serialize() 

   .. method:: proc type chpl__deserialize( data) 

   .. method:: proc  serialize( writer, ref serializer)  throws

   .. method:: proc ref deserialize( reader, ref deserialize)  throws

   .. method:: proc  init=( b: bytes) 

   .. method:: proc  init=( b: string) 

   .. method:: proc  init=( b: c_string) 

      .. warning::

         the type 'c_string' is deprecated; please use one of the 'bytes.create*ingBuffer' methods that takes a 'c_ptrConst(c_char)' instead

   .. method:: proc  byteIndices 

   .. method:: proc param size param

   .. method:: proc param numBytes param

   .. method:: proc param this(param i: int) param: int

   .. method:: proc param item(param i: int) param: bytes

   .. method:: proc  item( i: byteIndex) : bytes

   .. method:: proc  this( i: byteIndex) : uint(8)

   .. method:: proc param toByte() param: uint(8)

   .. method:: proc param byte(param i: int) param: uint(8)

   .. method:: proc  join(const ref x: [] bytes) : bytes

   .. method:: proc  join(const ref x)  where isTuple(x)

   .. method:: proc  join( ir: _iteratorRecord) : bytes

.. method:: proc  bytes.size : int

   
   :returns: The number of bytes in the :type:`bytes`.
   

.. method:: proc  bytes.indices : range

   
   :returns: The indices that can be used to index into the bytes
             (i.e., the range ``0..<this.size``)
   

.. method:: proc  bytes.numBytes : int

   
   :returns: The number of bytes in the :type:`bytes`.
   

.. method:: proc  bytes.localize() : bytes

   .. warning::

      bytes.localize() is unstable and may change in a future release

   
   Gets a version of the :type:`bytes` that is on the currently
   executing locale.
   
   :returns: A shallow copy if the :type:`bytes` is already on the
             current locale, otherwise a deep copy is performed.
   

.. method:: proc  bytes.c_str() : c_ptrConst(c_char)

   .. warning::

      'bytes.c_str()' has moved to 'CTypes'. Please 'use CTypes' to access ':proc:`~CTypes.bytes.c_str`'

   
   Gets a `c_ptrConst(c_char)` from a :type:`bytes`. The returned
   :class:`~CTypes.c_ptrConst` shares the buffer with the :type:`bytes`.
   
   .. warning::
   
     This can only be called safely on a :type:`bytes` whose home is
     the current locale.  This property can be enforced by calling
     :proc:`bytes.localize()` before :proc:`~bytes.c_str()`. If the
     bytes is remote, the program will halt.
   
   For example:
   
   .. code-block:: chapel
   
       var myBytes = b"Hello!";
       on differentLocale {
         printf("%s", myBytes.localize().c_str());
       }
   
   :returns: A `c_ptrConst(c_char)` that points to the underlying buffer used
             by this :type:`bytes`. The returned `c_ptrConst(c_char)` is only
             valid when used on the same locale as the bytes.
   

.. method:: proc  bytes.item( i: int) : bytes

   
   Gets an ASCII character from the :type:`bytes`
   
   :arg i: The index
   
   :returns: A 1-length :type:`bytes`
   

.. method:: proc  bytes.this( i: int) : uint(8)

   
   Gets a byte from the :type:`bytes`
   
   :arg i: The index
   
   :returns: uint(8)
   

.. method:: proc  bytes.toByte() : uint(8)

   
   :returns: The value of a single-byte :type:`bytes` as an integer.
   

.. method:: proc  bytes.byte( i: int) : uint(8)

   
   Gets a byte from the :type:`bytes`
   
   :arg i: The index
   
   :returns: The value of the `i` th byte as an integer.
   

.. itermethod:: iter  bytes.items() : bytes

   
   Iterates over the :type:`bytes`, yielding ASCII characters.
   
   :yields: 1-length :type:`bytes`
   

.. itermethod:: iter  bytes.these() : uint(8)

   
   Iterates over the :type:`bytes`
   
   :yields: uint(8)
   

.. itermethod:: iter  bytes.chpl_bytes() : uint(8)

   
   Iterates over the :type:`bytes` byte by byte.
   
   :yields: uint(8)
   

.. method:: proc  bytes.this( r: range(?)) : bytes

   
   Slices the :type:`bytes`. Halts if r is non-empty and not completely
   inside the range ``this.indices`` when compiled with `--checks`.
   `--fast` disables this check.
   
   :arg r: The range of indices the new :type:`bytes` should be made
           from
   
   :returns: a new :type:`bytes` that is a slice within
             ``this.indices``. If the length of `r` is zero, an empty
             :type:`bytes` is returned.
   

.. method:: proc  bytes.isEmpty() : bool

   
   Checks if the :type:`bytes` is empty.
   
   :returns: * `true`  -- when empty
             * `false` -- otherwise
   

.. method:: proc  bytes.startsWith(patterns: bytes ...) : bool

   
   Checks if the :type:`bytes` starts with any of the given arguments.
   
   :arg patterns: :type:`bytes` (s) to match against.
   
   :returns: * `true`--when the :type:`bytes` begins with one or more of
               the `patterns`
             * `false`--otherwise
   

.. method:: proc  bytes.endsWith(patterns: bytes ...) : bool

   
   Checks if the :type:`bytes` ends with any of the given arguments.
   
   :arg patterns: :type:`bytes` (s) to match against.
   
   :returns: * `true`--when the :type:`bytes` ends with one or more of
               the `patterns`
             * `false`--otherwise
   

.. method:: proc  bytes.find( pattern: bytes,  indices: range(?) = this.indices) : int

   
   Finds the argument in the :type:`bytes`
   
   :arg pattern: :type:`bytes` to search for
   
   :arg indices: an optional range defining the indices to search
                within, default is the whole. Halts if the range is not
                within ``this.indices``
   
   :returns: the index of the first occurrence from the left of `pattern`
             within the :type:`bytes`, or -1 if the `pattern` is not in the
             :type:`bytes`.
   

.. method:: proc  bytes.rfind( pattern: bytes,  indices: range(?) = this.indices) : int

   
   Finds the argument in the :type:`bytes`
   
   :arg pattern: The :type:`bytes` to search for
   
   :arg indices: an optional range defining the indices to search within,
                default is the whole. Halts if the range is not
                within ``this.indices``
   
   :returns: the index of the first occurrence from the right of `pattern`
             within the :type:`bytes`, or -1 if the `pattern` is not in the
             :type:`bytes`.
   

.. method:: proc  bytes.count( pattern: bytes,  indices: range(?) = this.indices) : int

   
   Counts the number of occurrences of the argument in the :type:`bytes`
   
   :arg pattern: The :type:`bytes` to search for
   
   :arg indices: an optional range defining the substring to search within,
                default is the whole. Halts if the range is not
                within ``this.indices``
   
   :returns: the number of times `pattern` occurs in the :type:`bytes`
   

.. method:: proc  bytes.replace( pattern: bytes,  replacement: bytes,  count: int = -1) : bytes

   
   Replaces occurrences of a :type:`bytes` with another.
   
   :arg pattern: The :type:`bytes` to search for
   
   :arg replacement: The :type:`bytes` to replace `pattern` with
   
   :arg count: an optional argument specifying the number of replacements to
               make, values less than zero will replace all occurrences
   
   :returns: a copy of the :type:`bytes` where `replacement` replaces
             `pattern` up to `count` times
   

.. itermethod:: iter  bytes.split( sep: bytes,  maxsplit: int = -1,  ignoreEmpty: bool = false) : bytes

   
   Splits the :type:`bytes` on `sep` yielding the bytes between each
   occurrence, up to `maxsplit` times.
   
   :arg sep: The delimiter used to break the :type:`bytes` into chunks.
   
   :arg maxsplit: The number of times to split the :type:`bytes`,
                  negative values indicate no limit.
   
   :arg ignoreEmpty: * `true`-- Empty :type:`bytes` will not be yielded,
                     * `false`-- Empty :type:`bytes` will be yielded
   
   :yields: :type:`bytes`
   

.. itermethod:: iter  bytes.split( maxsplit: int = -1) : bytes

   
   Works as above, but uses runs of whitespace as the delimiter.
   
   :arg maxsplit: The maximum number of times to split the :type:`bytes`,
                  negative values indicate no limit.
   
   :yields: :type:`bytes`
   

.. method:: proc  bytes.join(const ref x: bytes ...) : bytes

   
   Returns a new :type:`bytes`, which is the concatenation of all of
   the :type:`bytes` passed in with the contents of the method
   receiver inserted between them.
   
   .. code-block:: chapel
   
       var myBytes = b"|".join(b"a",b"10",b"d");
       writeln(myBytes); // prints: "a|10|d"
   
   :arg x: :type:`bytes` values to be joined
   
   :returns: A :type:`bytes`
   

.. method:: proc  bytes.join(const ref x) : bytes

   
   Returns a new :type:`bytes`, which is the concatenation of all of
   the :type:`bytes` passed in with the contents of the method
   receiver inserted between them.
   
   .. code-block:: chapel
   
       var tup = (b"a",b"10",b"d");
       var myJoinedTuple = b"|".join(tup);
       writeln(myJoinedTuple); // prints: "a|10|d"
   
       var myJoinedArray = b"|".join([b"a",b"10",b"d"]);
       writeln(myJoinedArray); // prints: "a|10|d"
   
   :arg x: An array or tuple of :type:`bytes` values to be joined
   
   :returns: A :type:`bytes`
   

.. method:: proc  bytes.strip( chars = b" \t\r\n",  leading = true,  trailing = true) : bytes

   
   Strips given set of leading and/or trailing characters.
   
   :arg chars: Characters to remove.  Defaults to `b" \\t\\r\\n"`.
   
   :arg leading: Indicates if leading occurrences should be removed.
                 Defaults to `true`.
   
   :arg trailing: Indicates if trailing occurrences should be removed.
                   Defaults to `true`.
   
   :returns: A new :type:`bytes` with `leading` and/or `trailing`
             occurrences of characters in `chars` removed as appropriate.
   

.. method:: proc const bytes.partition( sep: bytes) : 3*(bytes)

   
   Splits the :type:`bytes` on a given separator
   
   :arg sep: The separator
   
   :returns: a `3*bytes` consisting of the section before `sep`,
             `sep`, and the section after `sep`. If `sep` is not found, the
             tuple will contain the whole :type:`bytes`, and then two
             empty :type:`bytes`.
   

.. method:: proc  bytes.dedent( columns = 0,  ignoreFirst = true) : bytes

   .. warning::

      bytes.dedent is subject to change in the future.

   Remove indentation from each line of bytes.
   
   This can be useful when applied to multi-line bytes that are indented
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
   
   :returns: A new :type:`bytes` with indentation removed.
   

.. method:: proc  bytes.decode( policy = decodePolicy.strict) : string throws

   
   Returns a UTF-8 string from the given :type:`bytes`. If the data is
   malformed for UTF-8, `policy` argument determines the action.
   
   :arg policy: - `decodePolicy.strict` raises an error
                 - `decodePolicy.replace` replaces the malformed character
                   with UTF-8 replacement character
                 - `decodePolicy.drop` drops the data silently
                 - `decodePolicy.escape` escapes each illegal byte with
                   private use codepoints
   
   :throws: Throws a :class:`~Errors.DecodeError` if `decodePolicy.strict` is
     passed to the `policy` argument and the :type:`bytes` contains non-UTF-8
     characters.
   
   :returns: A UTF-8 string.
   

.. method:: proc  bytes.isUpper() : bool

   
   Checks if all the characters in the :type:`bytes` are uppercase
   (A-Z) in ASCII.  Ignores uncased (not a letter) and extended ASCII
   characters (decimal value larger than 127)
   
   :returns: * `true`--there is at least one uppercase and no lowercase characters
             * `false`--otherwise
   

.. method:: proc  bytes.isLower() : bool

   
   Checks if all the characters in the :type:`bytes` are lowercase
   (a-z) in ASCII.  Ignores uncased (not a letter) and extended ASCII
   characters (decimal value larger than 127)
   
   :returns: * `true`--there is at least one lowercase and no uppercase characters
             * `false`--otherwise
   

.. method:: proc  bytes.isSpace() : bool

   
   Checks if all the characters in the :type:`bytes` are whitespace
   (' ', '\\t', '\\n', '\\v', '\\f', '\\r') in ASCII.
   
   :returns: * `true`  -- when all the characters are whitespace.
             * `false` -- otherwise
   

.. method:: proc  bytes.isAlpha() : bool

   
   Checks if all the characters in the :type:`bytes` are alphabetic
   (a-zA-Z) in ASCII.
   
   :returns: * `true`  -- when the characters are alphabetic.
             * `false` -- otherwise
   

.. method:: proc  bytes.isDigit() : bool

   
   Checks if all the characters in the :type:`bytes` are digits (0-9)
   in ASCII.
   
   :returns: * `true`  -- when the characters are digits.
             * `false` -- otherwise
   

.. method:: proc  bytes.isAlnum() : bool

   
   Checks if all the characters in the :type:`bytes` are alphanumeric
   (a-zA-Z0-9) in ASCII.
   
   :returns: * `true`  -- when the characters are alphanumeric.
             * `false` -- otherwise
   

.. method:: proc  bytes.isPrintable() : bool

   
   Checks if all the characters in the :type:`bytes` are printable in
   ASCII.
   
   :returns: * `true`  -- when the characters are printable.
             * `false` -- otherwise
   

.. method:: proc  bytes.isTitle() : bool

   
   Checks if all uppercase characters are preceded by uncased characters,
   and if all lowercase characters are preceded by cased characters in ASCII.
   
   :returns: * `true`  -- when the condition described above is met.
             * `false` -- otherwise
   

.. method:: proc  bytes.toLower() : bytes

   
   Creates a new :type:`bytes` with all applicable characters
   converted to lowercase.
   
   :returns: A new :type:`bytes` with all uppercase characters (A-Z)
             replaced with their lowercase counterpart in ASCII. Other
             characters remain untouched.
   

.. method:: proc  bytes.toUpper() : bytes

   
   Creates a new :type:`bytes` with all applicable characters
   converted to uppercase.
   
   :returns: A new :type:`bytes` with all lowercase characters (a-z)
             replaced with their uppercase counterpart in ASCII. Other
             characters remain untouched.
   

.. method:: proc  bytes.toTitle() : bytes

   
   Creates a new :type:`bytes` with all applicable characters
   converted to title capitalization.
   
   :returns: A new :type:`bytes` with all cased characters(a-zA-Z)
             following an uncased character converted to uppercase, and all
             cased characters following another cased character converted to
             lowercase.
   

.. function:: operator :( x: string, type t: bytes) 

.. function:: operator :( x: c_string, type t: bytes) 

   .. warning::

      the type 'c_string' is deprecated; please use one of the 'bytes.create*ingBuffer' methods that takes a 'c_ptrConst(c_char)' instead

.. method:: operator  bytes.+=(ref lhs: bytes, const ref rhs: bytes) : void

   
   Appends the :type:`bytes` `rhs` to the :type:`bytes` `lhs`.
   

.. method:: proc ref bytes.appendByteValues(x: uint(8) ...) : void

   .. warning::

      'bytes.appendByteValues' is unstable and may change in the future

   
   Appends the one or more byte values passed as arguments to
   the :type:`bytes` `this`.
   

.. method:: proc  bytes.toHexadecimal( uppercase: bool = false, type resultType = bytes) : resultType

   .. warning::

      'bytes.toHexadecimal' is unstable and may change in the future

   
   Computes a hexadecimal representation for a ``bytes``
   and returns it as a ``bytes``.
   

.. method:: operator  bytes. = (ref lhs: bytes,  rhs: bytes) : void

   
   Copies the :type:`bytes` `rhs` into the :type:`bytes` `lhs`.
   

.. method:: operator  bytes. = (ref lhs: bytes,  rhs_c: c_string) : void

   .. warning::

      the type 'c_string' is deprecated; please use one of the 'bytes.create*ingBuffer' methods that takes a 'c_ptrConst(c_char)' instead

   
   Copies the c_string `rhs_c` into the bytes `lhs`.
   
   Halts if `lhs` is a remote bytes.
   

.. method:: operator  bytes.+( s0: bytes,  s1: bytes) : bytes

   
   :returns: A new :type:`bytes` which is the result of concatenating
             `s0` and `s1`
   

.. method:: operator  bytes.+(param s0: bytes, param s1: bytes) param

.. function:: operator *( s: bytes,  n: integral) : bytes

   
   :returns: A new :type:`bytes` which is the result of repeating `s`
             `n` times.  If `n` is less than or equal to 0, an empty bytes is
             returned.
   
   The operation is commutative.
   For example:
   
   .. code-block:: chapel
   
      writeln(b"Hello! "*3);
      or
      writeln(3*b"Hello! ");
   
   Results in::
   
      Hello! Hello! Hello!
   

.. function:: operator *( n: integral,  s: bytes) 

.. method:: operator  bytes.==( a: bytes,  b: bytes) : bool

.. method:: operator  bytes.!=( a: bytes,  b: bytes) : bool

.. method:: operator  bytes.<( a: bytes,  b: bytes) : bool

.. method:: operator  bytes.>( a: bytes,  b: bytes) : bool

.. method:: operator  bytes.<=( a: bytes,  b: bytes) : bool

.. method:: operator  bytes.>=( a: bytes,  b: bytes) : bool

.. method:: operator  bytes.==(param s0: bytes, param s1: bytes) param

.. method:: operator  bytes.!=(param s0: bytes, param s1: bytes) param

.. method:: operator  bytes.<=(param a: bytes, param b: bytes) param

.. method:: operator  bytes.>=(param a: bytes, param b: bytes) param

.. method:: operator  bytes.<(param a: bytes, param b: bytes) param

.. method:: operator  bytes.>(param a: bytes, param b: bytes) param

.. method:: proc  bytes.hash() : uint

.. method:: operator  bytes.<=>(ref x: bytes, ref y: bytes) 

