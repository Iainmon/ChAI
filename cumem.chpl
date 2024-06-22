use ChapelRemoteVars;
use Tensor;
use remote;
use GpuDiagnostics;

startGpuDiagnostics();
startVerboseGpu();


var device = here.gpus[0];

// var t: tensor(1) = new tensor([i in {0..<10}] i:real);


// var remote_t = chpl__buildRemoteWrapper(device,tensor(1),t);
// var remote_myVar = chpl__buildRemoteWrapper(device,)

// writeln("hello!");

// writeln(t);
// writeln(remote_t);

// proc inc(ref remote_x) {
//     ref val = remote_x.get();
//     on device {
//         val.inc();
//     }
// }

// inc(remote_t);

// var t2 = remote_t.get();
// writeln(t2);



// var t: tensor(1) = new tensor([i in {0..<10}] i:real);


// writeln("hello!");

// writeln(t);


// var rt = new remote(t,device);
// on device {
//     rt.access().inc();
// }
// rt.unload();

var t: tensor(1) = new tensor([i in {0..<10}] i:real);
var rt = new remote(t);
writeln(rt.access());


record MyRecord {
    var rx: remote(tensor(1));
}
var mr = new MyRecord(rt);

mr.rx.to(device);

on device {
    mr.rx.access().data += 1.0;
}

mr.rx.to(here);
writeln(mr.rx.access());


// proc foo(ref x: remote(tensor(1))) {
//     on x.device {
//         x.access().inc();
//     }
// }

// var rt = new remote(t);
// rt.to(device);
// foo(rt);
// rt.to(here);
// writeln(rt.access());



// proc foo(ref x: Tensor) {
//     on x.device {
//         x.inc();
//     }
// }

// var t: Tensor(1) = new Tensor([1.0,2.0,3.0]);

// t.to(device);
// // foo(t);
// t.inc();
// t.to(here);
// writeln(t);
// writeln(t[0]);


// const data = [i in {0..<10}] i:real;
// var rt = new remote(data);
// writeln(rt.access());
// rt.to(device);
// on device {
//     use Math;
//     ref data = rt.access();
//     data = sin(data);
// }
// rt.to(here);
// writeln(rt.access());


// proc remote_sin(ref rx: remote(?t)) {
//   on rx.device {
//     use Math;
//     ref data = rx.access();
//     data = sin(data);
//   }
// }
// const data = [i in {0..<10}] i:real;
// var rt = new remote(data);
// writeln(rt.access());
// rt.to(device);
// remote_sin(rt);
// rt.to(here);
// writeln(rt.access());


// I think by adding a `init=` proc, one could have a system for programmatically transferring data between GPU and program memory, without writing the transfers syntactically using `on` statements. 

