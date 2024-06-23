import ChapelArray;

type tensor = _array;

record tensor_wrapper {
forwarding var _a: _array;
}

// var x: tensor(1,real) = [1.0,2.0];
// writeln(x);

var a: _array = [1.0,2.0];
writeln(a.type:string,a._instance.type:string);
writeln(tensor(?):string);


writeln(tensor_wrapper:string);
