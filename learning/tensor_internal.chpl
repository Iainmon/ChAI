

use ndarray;

use remote;

import Utilities as util;

type Function = _FunctionNode;
type TensorResource = shared _TensorResource;

class _FunctionNode {
    // param argN: int;
    // or
    // type argsType;

    // param outRank: int;

    proc init() {}
}

class Add : _FunctionNode {
    var left,right: TensorResource(?,?);
    proc init(left: TensorResource(?rank,?eltType),right: TensorResource(rank,eltType)) {
        this.left = left;
        this.right = right;
    }

    proc forward(this_: shared _FunctionNode? = nil) {
        param rank = left.rank;
        type eltType = left.eltType;
        if rank != right.rank {
            compilerError("mismatched rank!");
        }
        if eltType != right.eltType {
            compilerError("mismatched eltType!");
        }

        const device = left.resource.device;
        if device != right.data.device then
            util.err("left device not right device!");

        const blank = new ndarray(rank,eltType);
        // var this_: shared _FunctionNode? = this: shared _FunctionNode?;
        var tr = new TensorResource(blank,this_);
        tr.data.to(device);
        on device {
            ref A = left.tensor;
            ref B = right.tensor;
            const sum = A.data + B.data;
            tr.data.access() = sum;
        }
        return tr;
    }
}


class _TensorResource {
    param rank: int;
    type eltType = real(64);
    var data: remote(ndarray(rank,eltType));
    var ctx: shared _FunctionNode?;
    proc init(t: ndarray(?rank,?eltType), in ctx: shared _FunctionNode? = nil) {
        this.rank = rank;
        this.eltType = eltType;
        this.data = new remote(t);
        this.ctx = ctx;
    }

    proc ref resource ref do return this.data;
    proc ref tensor ref do return this.data.access();

}

var _t1 = new ndarray({0..5,0..5});
var _t2 = new ndarray({0..5,0..5});

var t1 = new TensorResource(_t1);
var t2 = new TensorResource(_t2);

writeln(t1);

var add_t1_t2: shared Add = new shared Add(t1,t2);

writeln(add_t1_t2);

var sum = add_t1_t2.forward(add_t1_t2);
writeln(sum,sum.type:string);