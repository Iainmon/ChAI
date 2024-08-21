

class _remoteVarContainer {
    var containedValue;
}

class Remote {
    type eltType;
    var value: owned _remoteVarContainer(eltType);
    var device: locale;

    proc init(in value: owned _remoteVarContainer(?eltType)) {
        const loc = value.locale;
        this.eltType = eltType;
        this.value = value;
        this.device = loc;
    }


    proc init(value: ?eltType, device: locale = Remote.defaultDevice) {
        var v: owned _remoteVarContainer(eltType)?;
        on device do v = new _remoteVarContainer(value);
        this.init(try! v : owned _remoteVarContainer(eltType));
    }

    proc init(type eltType, in tr: ?inType, device: locale = Remote.defaultDevice) {
        var v: owned _remoteVarContainer(eltType)?;
        on device {
            var val: eltType = tr;
            v = new _remoteVarContainer(val);
        }
        this.init(try! v : owned _remoteVarContainer(eltType));
    }
}

proc type Remote.defaultDevice: locale do
    return if here.gpus.size >= 1 then here.gpus[0] else here;

