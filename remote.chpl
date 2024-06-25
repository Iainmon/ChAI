use ChapelRemoteVars;

config const debug = true;

record remote {
    type eltType;
    var device: locale;
    var item: _remoteVarWrapper(eltType);
    var _parentDevice: locale; // is this necessary?

    proc init(in item: ?eltType,device: locale) {
        this.eltType = eltType;
        this.device = device;
        this.item = chpl__buildRemoteWrapper(device,eltType,item);
        this._parentDevice = here;
    }

    proc init(in item: ?eltType) {
        this.init(item,here);
    }

    proc init(type eltType) {
        this.eltType = eltType;
        this.device = here;
        var it: eltType; 
        this.item = chpl__buildRemoteWrapper(device,eltType,it);
        this._parentDevice = here;
    }

    proc init(type eltType,device: locale) {
        this.eltType = eltType;
        this.device = device;
        this.item = chpl__buildRemoteWrapper(device,eltType);
        this._parentDevice = here;
    }

    // proc init(tmp: owned _remoteVarContainer(?eltType)?,device: locale = here, _parentDevice = here) {
    //     this.eltType = eltType;
    //     this.device = device;
    //     this.item = new _remoteVarContainer(try! tmp: owned _remoteVarContainer(eltType));
    // }

    proc ref access() ref {
        // if here != this.device { try! throw new Error("Trying to access memory on wrong device!"); }
        if here != this.device {
            this.to(here);
            if debug then writeln("moved " + this.device.name + " -> " + here.name);
        }
        return this.item.get();
    }

    proc ref unload(): eltType {
        this.to(this._parentDevice);
        return this.item.get();
    }

    proc ref to(device: locale) {
        if this.device == device then return;
        if here != this._parentDevice {
            on this._parentDevice {
                this.to(device);
            }
        } else {
            this.device = device;
            this.item = chpl__buildRemoteWrapper(device,eltType,this.item.get());
        }
    }

    // proc ref copyTo(device: locale, parentDevice: locale = this._parentDevice) {
    //     // on device var itemResource: eltType = this.item.get();
    //     // on device var me: remote(eltType) = new remote(itemResource);
    //     // var newRemote = 
    //     // var c: owned _remoteVarContainer(eltType)?;
    //     // on loc do c = new _remoteVarContainer(value);
    //     // return new _remoteVarWrapper(try! c : owned _remoteVarContainer(inType));

    //     var c: owned _remoteVarContainer(eltType)?;
    //     on device do c = new _remoteVarContainer(this.item.get());
    //     return new remote(c,device,parentDevice);
    // }

    

}