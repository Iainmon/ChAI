use ChapelRemoteVars;

config const debug = true;

record remote {
    type eltType;
    var device: locale;
    var item: _remoteVarWrapper(eltType);
    var _parentDevice: locale; // is this necessary?

    proc init(item: ?eltType,device: locale) {
        this.eltType = eltType;
        this.device = device;
        this.item = chpl__buildRemoteWrapper(device,eltType,item);
        this._parentDevice = here;
    }

    proc init(item: ?eltType) {
        this.init(item,here);
    }

    proc init(type eltType) {
        this.eltType = eltType;
        this.device = here;
        this._parentDevice = here;
    }

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

}