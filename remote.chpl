use ChapelRemoteVars;

config const debug = true;

var defaultDevice = if here.gpus.size >= 1 then here.gpus[0] else here;


class Remote {
    type eltType;
    var device: locale = defaultDevice;
    var item: _remoteVarWrapper(eltType);

    proc init(item: ?eltType,device: locale = defaultDevice) {
        this.eltType = eltType;
        this.device = device;
        this.item = chpl__buildRemoteWrapper(device,item);
    }

    proc init(type eltType,device: locale = defaultDevice) {
        this.eltType = eltType;
        this.device = device;
        this.item = chpl__buildRemoteWrapper(device,eltType);
    }

    proc to(device_: locale) {
        if this.device == device_ then return;
        this.device = device_;
        on device_ {
            this.item = chpl__buildRemoteWrapper(device_,item.get());
        }
    }

    proc ref get() ref {
        return this.item.get();
    }

}

record remote {
    type eltType;
    var remoteResource: shared Remote(eltType);
    // forwarding remoteResource only to, get;


    proc init(type eltType,device: locale = defaultDevice) {
        this.eltType = eltType;
        this.remoteResource = new shared Remote(eltType,device);
    } 

    proc init(item: ?eltType,device: locale = defaultDevice) {
        this.eltType = eltType;
        this.remoteResource = new shared Remote(item,device);
    } 

    // proc init(other: remote(?eltType)) {
    //     this.eltType = eltType;
    //     this.remoteResource = other.remoteResource;
    // }

    // proc init=(other: remote(?eltType)) {
    //     this.eltType = eltType;
    //     this.remoteResource = other.remoteResource;
    // }

    proc device ref do return this.remoteResource.device;
    proc ref get() ref {
        return this.remoteResource.item.get();
    }
    proc to(device_: locale) do this.remoteResource.to(device_);

    proc copy(): remote(eltType) {
        var rem = new remote(eltType,this.device);
        on device {
            const data: eltType = remoteResource.item.get();
            ref reData: eltType = rem.remoteResource.item.get();
            reData = data;
        }
        return rem;
    }


    proc ref access() ref {
        // if here != this.device { try! throw new Error("Trying to access memory on wrong device!"); }
        // if here != this.device {
        //     this.to(here);
        //     if debug then writeln("moved " + this.device.name + " -> " + here.name);
        // }
        return this.remoteResource.item.get();
    }

    proc ref unload(): eltType {
        return this.remoteResource.get();
    }

    // proc ref to(device: locale) {
    //     on device {
    //         this.device = device;
    //         this.item = chpl__buildRemoteWrapper(device,eltType,remoteResource.get());
    //     }
    //     // if this.device == device then return;
    //     // if here != this._parentDevice {
    //     //     on this.device {
    //     //         this.to(device);
    //     //     }
    //     // } else {
    //     //     on device var itm = this.item.get();
    //     //     this.device = device;
    //     //     this.item = chpl__buildRemoteWrapper(device,eltType,itm);
    //     // }
    // }

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



