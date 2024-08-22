module Remote {

use Debugger;

class _RemoteVarContainer {
    var containedValue;
    // var device: locale;

    // proc init(containedValue,device: locale) {
    //     // this.valType = containedValue.type;
    //     this.containedValue = containedValue;
    //     this.device = device;
    // }
    // proc init(containedValue) {
    //     this.init(containedValue,here);
    // }
}
// proc\s*(\w+\.)?\s+_loc


// proc chpl__buildRemoteWrapper(type eltType: Remote(?valType)...)



class Remote {
    type eltType;
    var value: owned _RemoteVarContainer(eltType);

    proc ref get() ref do
        return this;

    proc ref ptr ref do 
        return value.containedValue;

    proc device: locale do
        return ptr.locale;


    proc init(in value: owned _RemoteVarContainer(?eltType)) {
        this.eltType = eltType;
        this.value = value;
    }

    proc init(value: ?eltType, device: locale = Remote.defaultDevice) where !isSubtype(eltType,Remote(?)) {
        var v: owned _RemoteVarContainer(eltType)?;
        on device do v = new _RemoteVarContainer(value);
        this.init(try! v : owned _RemoteVarContainer(eltType));
    }

    proc init(type eltType, in tr: ?inType, device: locale = Remote.defaultDevice) {
        compilerWarning("This can be simplified, use below style.");
        var v: owned _RemoteVarContainer(eltType)?;
        on device {
            var val: eltType = tr;
            v = new _RemoteVarContainer(val);
        }
        this.init(try! v : owned _RemoteVarContainer(eltType));
    }

    proc init(type eltType, device: locale = Remote.defaultDevice) {
        compilerWarning("This may be error prone, use above style.");
        on device var value: eltType;
        this.init(value,device);
    }
}

proc type Remote.defaultDevice: locale do
    return if here.gpus.size >= 1 then here.gpus[0] else here;


// module ChapelRemoteVars {
public use ChapelRemoteVars;

private inline proc __defaultValue(type t) {
    var tmp: t;
    return tmp;
}

// inline proc chpl__buildRemoteWrapper(loc: locale, type inType) {
//     compilerWarning("hello 1, but locally.");

//     return chpl__buildRemoteWrapper(loc, inType, __primitive("create thunk", __defaultValueForType(inType)));
// }

// inline proc chpl__buildRemoteWrapper(loc: locale, type inType) where false {
//     return chpl__buildRemoteWrapper(loc, inType, __primitive("create thunk", __defaultValueForType(inType)));
// }

inline proc chpl__buildRemoteWrapper(loc: locale, type inType: Remote(?eltType), in tr: _thunkRecord)  {
    // type eltType = inType.eltType;
    compilerWarning("You called me, ", inType:string,", ",tr.type:string, ", ", eltType:string);
    var c: owned _RemoteVarContainer(eltType)?;
    on loc {
        var forced: eltType = __primitive("force thunk", tr);
        c = new _RemoteVarContainer(forced);
    }
    return new owned Remote(try! c : owned _RemoteVarContainer(eltType));
}



// inline proc chpl__buildRemoteWrapper(loc: locale, type inType: owned Remote(?), in tr: _thunkRecord)  {
//     // type eltType = inType.eltType;
//     compilerWarning("You called me, ", inType:string,", ",tr.type:string, ", ", eltType:string);
//     var c: owned _RemoteVarContainer(eltType)?;
//     on loc {
//         var forced: eltType = __primitive("force thunk", tr);
//         c = new _RemoteVarContainer(forced);
//     }
//     return new Remote(try! c : owned _RemoteVarContainer(eltType));
// }
// }
// public use ChapelRemoteVars;

}

