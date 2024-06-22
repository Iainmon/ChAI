use remote;


// record basic_tensor {
//     param rank: int;
//     type eltType = real(64);
//     var _domain: domain(rank, int);
//     var data: [_domain] eltType;
//     forwarding var data;

//     proc init()
// }

// record Tensor {
//     param rank: int;
//     type eltType = real(64);
//     var _tensor_data: remote(tensor(rank,eltType));

//     // proc init(param rank: int, type eltType = real) {

//     // }

//     proc _get_tensor_data() {
//         return this._tensor_data.access();
//     }

//     forwarding _get_tensor_data();

//     forwarding _tensor_data only access;
//     forwarding _tensor_data only to;

// }


record tensor {
    param rank: int;
    type eltType = real(64);
    var _domain: domain(rank, int);
    var data: [_domain] eltType;

    proc ref shape ref do return this._domain.shape;
    proc ref _dom ref do return this._domain;

    // forwarding data only this;
    // forwarding data only these;

    forwarding data except init, shape, _dom;

    proc init(param rank: int, type eltType) {
        this.rank = rank;
        this.eltType = eltType;
        var ranges: rank*range;
        for r in ranges do r = 0..#0;
        this._domain = {(...ranges)};
    }

    proc init(dom: ?d) where isDomainType(d) {
        this.rank = dom.rank;
        this.eltType = real;
        this._domain = dom;
    }

    proc init(data: [?dom] ?eltType) {
        this.rank = dom.rank;
        this.eltType = eltType;
        this._domain = dom;
        this.data = data;
    }

    proc init(itr) where itr.type:string == "promoted expression" || isSubtype(itr.type, _iteratorRecord) {
        const A = itr;
        this.init(A);
    }

    // proc ref inc() {
    //     this.data += 1.0;
    // }

}

record Tensor {
    param rank: int;
    type eltType = real(64);
    var _tensor_data: remote(tensor(rank,eltType));

    // proc init(param rank: int, type eltType = real(64)) {
    //     this.rank = rank;
    //     this.eltType = eltType;
    //     this._tensor_data = new remote(tensor(rank,eltType));
    // }
    proc init(args...) {
        var rt = new remote(new tensor((...args)));
        // ref t = rt.access();
        this.rank = rt.eltType.rank;
        this.eltType = rt.eltType.eltType;
        this._tensor_data = rt;
    }

    proc ref _get_tensor_data() ref {
        return this._tensor_data.access();
    }

    forwarding _get_tensor_data();

    forwarding _tensor_data only access;
    forwarding _tensor_data only to;
    forwarding _tensor_data only device;

    proc ref inc() {
        on this.device {
            this.data += 1.0;
        }
    }
    
}