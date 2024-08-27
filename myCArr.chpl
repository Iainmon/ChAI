use CTypes;

pragma "c_array record"
pragma "default intent is ref if modified"
record my_c_array : writeSerializable {
    /*
        The array element type, which can be queried like so:

        .. code-block:: chapel

            var x: c_array = c_ptrToConst(...);
            if x.eltType == c_int then do writeln("x is an array of ints");
    */
    type eltType;
    /*
        The fixed number of elements, which can be queried like so:

        .. code-block:: chapel

            var x: c_array = c_ptrToConst(...);
            writeln("x has ", x.size, " elements.");
    */
    param size;

    /*
        Default-initializes a :type:`c_array`, where each element gets the default value of ``eltType``.
    */
    proc init(type eltType, param size) {
        if eltType == void then
        compilerError("c_array element type cannot be 'void'");
        if eltType == nothing then
        compilerError("c_array element type cannot be 'nothing'");
        this.eltType = eltType;
        this.size = size;
        init this;
        var i = 0;
        while i < size {
        // create a default value we'll transfer into the element
        pragma "no auto destroy"
        var default: eltType;
        // this use of primitive works around an order-of-resolution issue.
        ref eltRef = __primitive("array_get", this, i);
        // this is a move, transferring ownership
        __primitive("=", eltRef, default);
        i += 1;
        }
    }

    @chpldoc.nodoc
    proc deinit() {
        var i = 0;
        while i < size {
        // this use of primitive works around an order-of-resolution issue.
        chpl__autoDestroy(__primitive("array_get", this, i));
        i += 1;
        }
    }

    /* Retrieve the i'th element (zero based) from the array.
        Does the equivalent of arr[i] in C.
        Includes bounds checking when such checks are enabled.
    */
    inline proc ref this(i: integral) ref : eltType {
        if boundsChecking then
        if i < 0 || i >= size then
            HaltWrappers.boundsCheckHalt("c array index out of bounds " + i:string +
                                        "(indices are 0.." + (size-1):string + ")");

        return __primitive("array_get", this, i);
    }
    @chpldoc.nodoc
    inline proc const ref this(i: integral) const ref : eltType {
        if boundsChecking then
        if i < 0 || i >= size then
            HaltWrappers.boundsCheckHalt("c array index out of bounds " + i:string +
                                        "(indices are 0.." + (size-1):string + ")");

        return __primitive("array_get", this, i);
    }

    /* As with the previous function, returns the i'th element (zero based)
        from the array. This one emits a compilation error if i is out of bounds.
    */
    inline proc ref this(param i: integral) ref : eltType {
        if i < 0 || i >= size then
        compilerError("c array index out of bounds " + i:string +
                        "(indices are 0.." + (size-1):string + ")");

        return __primitive("array_get", this, i);
    }
    @chpldoc.nodoc
    inline proc const ref this(param i: integral) const ref : eltType {
        if i < 0 || i >= size then
        compilerError("c array index out of bounds " + i:string +
                        "(indices are 0.." + (size-1):string + ")");

        return __primitive("array_get", this, i);
    }

    /* Print the elements */
    proc const serialize(writer, ref serializer) throws {
        writer.writeLiteral("[");
        var first = true;
        for i in 0..#size {

        writer.write(this(i));

        if i != size-1 then
            writer.writeLiteral(", ");
        }
        writer.writeLiteral("]");
    }

    /*
        Moves the elements from ``other`` to ``this``.
    */
    proc init=(other: c_array) {
        this.eltType = other.eltType;
        this.size = other.size;
        init this;
        for i in 0..#size {
        pragma "no auto destroy"
        var value: eltType = other[i];
        // this is a move, transferring ownership
        __primitive("=", this(i), value);
        }
    }
}

/* Copy the elements from one :type:`c_array` to another.
     Raises an error at compile time if the array sizes or
     element types do not match. */
  operator c_array.=(ref lhs:c_array, rhs:c_array) {
    if lhs.eltType != rhs.eltType then
      compilerError("element type mismatch in c_array assignment");
    if lhs.size != rhs.size then
      compilerError("size mismatch in c_array assignment");

    for i in 0..#lhs.size {
      lhs[i] = rhs[i];
    }
  }

  /*
    Get a pointer to the first element in ``rhs``, essentially decaying the :type:`c_array` to a :type:`c_ptr`.
  */
  operator =(ref lhs:c_ptr, ref rhs:c_array) {
    if lhs.eltType != rhs.eltType && lhs.eltType != void then
      compilerError("element type mismatch in c_array assignment");
    lhs = c_ptrTo(rhs[0]);
  }