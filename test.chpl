import ChapelArray;
use Reflection;

proc printInstantiated(type T) {
  writeln("type = ", T:string);
  for param i in 0..<numFields(T) {
    param name : string = getFieldName(T, i);
    writeln("  field ", name, " = ", isFieldBound(T, name));
  }
}
type _tensor = _array(?);

record tensor_wrapper {
forwarding var _a: _array;
forwarding _a;
}

// var x: _tensor(1,real) = [1.0,2.0];
// writeln(x);

var a: _array = [1.0,2.0];
writeln(a.type:string,a._instance.type:string);
writeln(_tensor(?):string);


// writeln(tensor_wrapper:string);

// printInstantiated(a.type);
// printInstantiated(tensor(?));
// printInstantiated(tensor_wrapper);
// var t: tensor_wrapper = [1.0,2.0];
// printInstantiated(tensor(?));
// printInstantiated(a.type);
// writeln(getFieldName(_array,0));


proc tensor_fn(param rank: int, type eltType = real(64)) type {
    const D: domain(rank);
    const A: [D] eltType;
    return A.type;
    // return ([D] eltType)?;
}

var x: tensor_fn(1,int);
writeln(x.type:string);

//   proc chpl__buildArrayRuntimeType(dom: domain, type eltType) type {
//     return dom.buildArray(eltType, false);
//   }

    // proc newRectangularDom(param rank: int, type idxType,
    //                        param strides: strideKind,
    //                        definedConst: bool = false) {

// class BaseRectangularDom : BaseDom {
//     param rank : int;
//     type idxType;
//     param strides: strideKind;

//   class BaseArrOverRectangularDom: BaseArr {
//     param rank : int;
//     type idxType;
//     param strides: strideKind;


proc base_arr_dist(param rank: int) type {
    return BaseArrOverRectangularDom(rank,int,1);
}

proc base_arr(param rank: int, type eltType = real(64)) type {
    return BaseRectangularArr(rank,int(32),strideKind.one,eltType);
}

var y: base_arr(1,int(64));
writeln(y,y.type:string);
printInstantiated(base_arr(1,int(64)));

// printInstantiated(tensor_fn(?));