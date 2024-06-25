


import Tensor as tn;
import Tensor.tensor;
// improt Tensor.Tensor;


// tensor(parm rank: int, type eltType = real(64), device: locale) // record like, for lower level
// Tensor(parm rank: int, type eltType = real(64), device: locale) // class like, for training and data science, motivated later


const device = here.gpus[0];

const numImages = 3;
var images: tensor(3) = tn.zeros(numImages,512,512);
                      = tn.zeros({0..#numImages,0..#512,0..#512});
for (i,fn) in zip(0..,files) do
    images[i,..,..] = readFileToImageArray(fn);
images.to(device);

images = images.reshape(512,512,numImages); // Shouldn't require any device copying. 

var cat = images[..,..,0];
        = images.slice({..,..,0});
        = images.slice(idx=(0,),axes=(3,)); // Fix the 3rd axis to 0;
assert(cat.device == device);
assert(cat.shape == (512,512));
assert(cat.type == tensor(2));

var cat3: tensor(3) = cat.expand(0,0,1); // increased dimension at arg inx by number provided, only 0s and 1s allowed. maybe -1 for shrinking.
                    = cat.reshape(512,512,1);
assert(cat3.shape == (512,512,1));
assert(cat3[..,..0] == cat);
assert(cat3.shrink() == cat); // removes all dimensions if they have size = 1.





var mat: tensor(2) = tn.random(3,5).to(device);
var v: tensor(1) = tn.random(5).to(device);
var u: tensor(1) = tn.matVecMul(mat,u);
                 = mat.dot(v); // ? this is highly ambiguous in the numpy and torch docs.
                 = tn.contract(mat,v,axes=((1,0),)); // contracts only one pair of axes, down the second axis of mat and the first axis of v.
                 = tn.einsum("ij,j->i",mat,v); // having this would just be incredible, especially if the "" was parsed using pragma operations.


var I2 = tn.identity((...mat.shape)).to(device);
assert(tn.matMul(mat,I2) == mat);


var zmat = (mat + 1.0) * 0.0; // all operations that you'd expect on arrays (at least the trivial ones) are promoted. 
assert(zmat == tn.zeros((...mat.shape)));




var mat_ = mat;
mat_ = 0.0;
// should mat be zeroed out? if it is in python, should this be replicated? alternatively, we could have
var mat_ = mat.copy(); // as default, then
var mat_ = mat.ref(); // to be shared class copy behaviour (reference)
// OR
var mat_ = mat.ref(); // as default, then
var mat_ = mat.copy; // to be record copy behaviour
// Tensor vs tensor motivated here. Requires some thought in my opinion, I could see it going either way. 





var kernel: tensor(3) = tn.random(1,3,3).withGrad(true/*optional*/).to(device); // 3x3 kernel with one channel
var catImg: tensor(3) = cat.reshape(1,512,512); // the 1 is for only one color channel
var featureMap: tensor(2) = tn.conv2D(catImg,kernel); // only convolves one kernel/filter in this case, so output is 2-tensor.
assert(featureMap.requiresGrad == true);
var strength: tensor(1) = featureMap.sum(); // sums elements. same as + reduce;
strength.backwards();
// featureMap.grad is now a tensor of the same shape, with the value \partial strength / \partial featureMap.



// More examples to come for back propagation.


// The following possibly introduces inconsitencies, and may not be compatible with the rest

var sum: tensor(2) = tn.zeros(100,100).to(device);

on device {
    var x,y: tensor(2) = tn.zeros(100,100);
    sum = x + y;
}


