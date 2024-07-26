



use Tensor;

import NeuralNetwork as network;

const device = here.gpus[0];

var model = network.Sequential(
    network.Conv2(kernel=3,channels=3,features=64,stride=1),
    network.Conv2(kernel=3,channels=64,features=128,stride=1),
    network.Flatten(),
    network.Dense(activations=1000),
    network.Sigmoid(),
    network.SoftMax(categories=10)
);


model.loadFrom("./models/myModel.model");
model.to(device);


const images: tensor(4,real) = tensor.loadFromFile("./data/myImageDataset.dat");
images.to(device);


const dists: tensor(2,real) = model.forward(images);

dists.to(here);

for i in dists.dim(0) {
    const dist: tensor(1,real) = dists[i,..];
    const guess: int = dist.argMax : int;
    writeln("Image number ", i , " is most likely a ". guess);
}

