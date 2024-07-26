


import IO;

import Utilities as util;

class NoRankArray {

}

class ArrClass : NoRankArray {
    param rank: int;
    var _domain: domain(rank,int);
    var data: [_domain] real;
}


proc readData(param rank: int, fr, shape: rank*int,dtype: bytes): owned NoRankArray {
    const dom = util.domainFromShape((...shape));
    var A: [dom] real(64);
    const isInt = dtype(0..0) == b"i";
    const sizeSl = dtype(1..);
    const size = (sizeSl : int) * 8;

    if size == 16 && !isInt {
        halt("Chapel doesn't support real(16) or float16.");
    }

    for i in dom {
        var v: real;
        select isInt {
            when true {
                select size {
                    when 8 { v = fr.read(int(8))  : real; }
                    when 16 { v = fr.read(int(16)) : real; }
                    when 32 { v = fr.read(int(32)) : real; }
                    when 64 { v = fr.read(int(64)) : real; }
                }
            }
            when false {
                select size {
                    when 32 { v = fr.read(real(32)) : real; }
                    when 64 { v = fr.read(real(64)); }
                }
            }
        }
        A[i] = v;
    }
    var Arr: owned NoRankArray = new ArrClass(rank,dom,A);
    return Arr;
}



proc readShape(fr) {
    fr.readThrough(b"'shape': (",stripSeparator=true);
    var sizeBytes = fr.readThrough(b"), }",stripSeparator=true);
    const nbs = sizeBytes.split(b", ");
    const sizes = for nb in nbs do nb : int;
    return sizes;
}
proc loadNumpyArray(path: string): owned NoRankArray {
    var deserializer = new IO.binaryDeserializer(IO.endianness.little);
    var fr = IO.openReader(path, deserializer=deserializer,locking=true);
    // writeln(fr.type:string);

    fr.readThrough(b"descr': '");
    const desc = fr.readThrough(b"'",stripSeparator=true);
    const dtype = desc(1..);
    const shapeArr = readShape(fr);

    fr.readThrough(b"\n");

    select shapeArr.size {
        when 1 {
            return readData(1, fr, (shapeArr[0],),dtype);
        }
        when 2 {
            return readData(2, fr, (shapeArr[0],shapeArr[1]),dtype);
        }
        when 3 {
            return readData(3, fr, (shapeArr[0],shapeArr[1],shapeArr[2]),dtype);
        }
        when 4 {
            return readData(4, fr, (shapeArr[0],shapeArr[1],shapeArr[2],shapeArr[3]),dtype);
        }
        otherwise {
            return new NoRankArray();
        }
    }
}


proc main() {
    var result = loadNumpyArray("/Users/iainmoncrief/Documents/gputil/notebooks/numpy_x.npy");

    if var r1Arr = result : ArrClass(1)? {
        writeln(r1Arr.rank, " ", r1Arr.data);
    } else if var r2Arr = result : ArrClass(2)? {
        writeln(r2Arr.rank, " ", r2Arr.data);
    }

    result = loadNumpyArray("/Users/iainmoncrief/Documents/gputil/notebooks/numpy_y.npy");
    if var r1Arr = result : ArrClass(1)? {
        writeln(r1Arr.rank, " ", r1Arr.data);
    } else if var r2Arr = result : ArrClass(2)? {
        writeln(r2Arr.rank, " ", r2Arr.data);
    }
}
