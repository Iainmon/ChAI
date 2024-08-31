.. default-domain:: chpl

.. module:: CString
   :noindex:

CString
=======
**Usage**

.. code-block:: chapel

   use CString;


or

.. code-block:: chapel

   import CString;

.. function:: proc chpl__initCopy( x: chpl_c_string,  definedConst: bool) : chpl_c_string

.. function:: proc chpl__autoCopy( x: chpl_c_string,  definedConst: bool) : chpl_c_string

.. method:: operator  chpl_c_string.==( s0: chpl_c_string,  s1: chpl_c_string) 

.. method:: operator  chpl_c_string.!=( s0: chpl_c_string,  s1: chpl_c_string) 

.. method:: operator  chpl_c_string.<=( a: chpl_c_string,  b: chpl_c_string) 

.. method:: operator  chpl_c_string.>=( a: chpl_c_string,  b: chpl_c_string) 

.. method:: operator  chpl_c_string.<( a: chpl_c_string,  b: chpl_c_string) 

.. method:: operator  chpl_c_string.>( a: chpl_c_string,  b: chpl_c_string) 

.. method:: operator  chpl_c_string. = (ref a: chpl_c_string,  b: chpl_c_string) 

.. method:: operator  chpl_c_string. = (ref a: chpl_c_string,  b: _nilType) 

.. method:: operator  chpl_c_string. = (ref a: chpl_c_string,  b: string) 

.. function:: operator :( x: _nilType, type t: chpl_c_string) 

.. function:: operator :( x: chpl_c_string, type t: c_ptr(void)) 

.. function:: operator :( x: c_ptr(void), type t: chpl_c_string) 

.. function:: operator :( x: chpl_c_string, type t: c_ptr(?eltType))  where eltType == c_char || eltType == int(8) || eltType == uint(8)

.. function:: operator :( x: chpl_c_string, type t: c_ptrConst(?eltType))  where eltType == c_char || eltType == int(8) || eltType == uint(8)

.. function:: operator :( x: c_ptr(?eltType), type t: chpl_c_string)  where eltType == c_char || eltType == int(8) || eltType == uint(8)

.. function:: operator :( x: c_ptrConst(?eltType), type t: chpl_c_string)  where eltType == c_char || eltType == int(8) || eltType == uint(8)

.. function:: operator :( x: chpl_c_string, type t: bool)  throws

.. function:: operator :( x: chpl_c_string, type t: integral)  throws

.. function:: operator :( x: chpl_c_string, type t: chpl_anyreal)  throws

.. function:: operator :( x: chpl_c_string, type t: chpl_anyimag)  throws

.. function:: operator :( x: chpl_c_string, type t: chpl_anycomplex)  throws

.. method:: proc  chpl_c_string.size 

.. method:: proc  chpl_c_string.substring( i: int) 

.. method:: proc  chpl_c_string.substring( r: range(?)) 

.. method:: proc param chpl_c_string.size param

.. function:: proc _string_contains(param a: chpl_c_string, param b: chpl_c_string) param

.. method:: proc  chpl_c_string.indexOf( substring: chpl_c_string) : int

   Returns the index of the first occurrence of a substring within a string,
   or 0 if the substring is not in the string.
   

.. function:: proc string_index_of( haystack: chpl_c_string,  needle: chpl_c_string) : int

.. function:: proc chpl_free_c_string(ref cs: chpl_c_string) 

.. method:: proc  chpl_c_string.serialize( writer, ref serializer)  throws

.. method:: proc  chpl_c_string.deserialize( reader, ref deserializer)  throws

