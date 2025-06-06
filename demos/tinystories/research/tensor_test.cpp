#include <torch/torch.h>
#include <iostream>

int main() {
  // Create a 2x3 tensor
  torch::Tensor tensor = torch::rand({2, 3});
  
  // Print the tensor
  std::cout << tensor << std::endl;

  // Perform a simple operation
  torch::Tensor result = tensor + 1;
  std::cout << result << std::endl;

  // Define a simple linear model
    struct Net : torch::nn::Module {
        Net() : linear(torch::nn::Linear(3, 2)) {
            register_module("linear", linear);
        }

        torch::Tensor forward(torch::Tensor x) {
            return linear->forward(x);
        }

        torch::nn::Linear linear;
    };

    // Create an instance of the model
    Net net;

    // Create an input tensor
    torch::Tensor input = torch::rand({1, 3});

    // Pass the input through the model
    torch::Tensor output = net.forward(input);

    // Print the output
    std::cout << output << std::endl;

  return 0;
}