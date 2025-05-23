#include <bridge.h>

#include <torch/torch.h>
#include <Aten/ATen.h>

#include <torch/script.h>

// #include <torch/script.h>
// #include <Aten/ATen.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <cstdint>
#include <chrono>
#include <thread>



#define def_bridge_simple(Name) \
    extern "C" bridge_tensor_t Name(bridge_tensor_t input) { \
        auto t_input = bridge_to_torch(input); \
        auto t_output = torch::Name(t_input); \
        return torch_to_bridge(t_output); \
    }



// Globals


torch::Device get_best_device();
torch::ScalarType get_best_dtype();

auto best_device = get_best_device();
auto best_dtype = get_best_dtype();

torch::NoGradGuard no_grad;
torch::AutoGradMode enable_grad(false);

bool debug_cpu_only = false;



torch::Device get_best_device() {
    if (debug_cpu_only) 
        return torch::Device(torch::kCPU);
    
    if (torch::hasMPS()) {
        return torch::Device(torch::kMPS);
    } else if (torch::hasCUDA()) {
        return torch::Device(torch::kCUDA);
    } else {
        return torch::Device(torch::kCPU);
    }
}

extern "C" void debug_cpu_only_mode(bool_t mode) {
    debug_cpu_only = mode;
    if (debug_cpu_only) {
        best_device = torch::Device(torch::kCPU);
    } else {
        best_device = get_best_device();
    }
}

extern "C" bool_t accelerator_available() {
    return (best_device == torch::Device(torch::kCUDA) || best_device == torch::Device(torch::kMPS));
}

torch::ScalarType get_best_dtype() {
    if (torch::hasMPS()) {
        return torch::kFloat16;
    } else if (torch::hasCUDA()) {
        return torch::kFloat16;
    } else {
        return torch::kFloat32;
    }
}

int bridge_tensor_elements(bridge_tensor_t &bt) {
    int size = 1;
    for (int i = 0; i < bt.dim; ++i) {
        size *= bt.sizes[i];
    }
    return size;
}

size_t bridge_tensor_size(bridge_tensor_t &bt) {
    return sizeof(float32_t) * bridge_tensor_elements(bt);
}

void store_tensor(at::Tensor &input, float32_t* dest) {
    float32_t * data = input.data_ptr<float32_t>();
    size_t bytes_size = sizeof(float32_t) * input.numel();
    // std::memmove(dest,data,bytes_size);
    std::memcpy(dest,data,bytes_size);
}

bridge_tensor_t torch_to_bridge(at::Tensor &tensor) {
    bridge_tensor_t result;
    result.created_by_c = true;
    result.dim = tensor.dim();
    result.sizes = new int32_t[result.dim];
    for (int i = 0; i < result.dim; ++i) {
        result.sizes[i] = tensor.size(i);
    }
    result.data = new float32_t[bridge_tensor_elements(result)];
    store_tensor(tensor, result.data);
    return result;
}

at::Tensor bridge_to_torch(bridge_tensor_t &bt) {
    std::vector<int64_t> sizes_vec(bt.sizes, bt.sizes + bt.dim);
    auto shape = torch::IntArrayRef(sizes_vec);
    return torch::from_blob(bt.data, shape, torch::kFloat);
}

at::Tensor bridge_to_torch(bridge_tensor_t &bt,torch::Device device, bool copy,torch::ScalarType dtype = torch::kFloat32) {
    std::vector<int64_t> sizes_vec(bt.sizes, bt.sizes + bt.dim);
    auto shape = torch::IntArrayRef(sizes_vec);
    auto t = torch::from_blob(bt.data, shape, torch::kFloat);
    if (device != torch::kCPU)
        copy = true;
    if (copy)
        return t.to(device, dtype, /*non_blocking=*/false, /*copy=*/true);
    else
        return t.to(device, dtype, /*non_blocking=*/false, /*copy=*/false);
    
}

extern "C" float32_t* unsafe(const float32_t* arr) {
    return const_cast<float32_t*>(arr);
}

std::vector<char> get_the_bytes(std::string filename) {
    std::ifstream input(filename, std::ios::binary);
    std::vector<char> bytes((std::istreambuf_iterator<char>(input)),(std::istreambuf_iterator<char>()));
    input.close();
    return bytes;
}

extern "C" bridge_tensor_t load_tensor_from_file(const uint8_t* file_path) {
    // // Load the tensor from a file
    // torch::Tensor tensor;
    // torch::load(tensor,file_path);

    // std::cout << "Tensor loaded from file: " << tensor.sizes() << std::endl;

    std::string fp(reinterpret_cast<const char*>(file_path));
    std::vector<char> f = get_the_bytes(fp);
    torch::IValue x = torch::pickle_load(f);
    torch::Tensor t = x.toTensor();
    return torch_to_bridge(t);
}

extern "C" bridge_tensor_t load_tensor_dict_from_file(const uint8_t* file_path,const uint8_t* tensor_key) {
    std::string fp(reinterpret_cast<const char*>(file_path));
    std::string tk(reinterpret_cast<const char*>(tensor_key));

    torch::jit::script::Module container = torch::jit::load(fp);
    torch::Tensor tensor = container.attr(tk).toTensor();

    return torch_to_bridge(tensor);

}

extern "C" bridge_tensor_t load_run_model(const uint8_t* model_path, bridge_tensor_t input) {
    auto t_input = bridge_to_torch(input);
    std::string mp(reinterpret_cast<const char*>(model_path));

    std::cout << "Loading model from path: " << mp << std::endl;
    std::cout.flush();


    torch::jit::Module module;
    try
    {
        // Deserialize the ScriptModule from a file using torch::jit::load().
        module = torch::jit::load(mp);
    }
    catch (const c10::Error& e)
    {
        std::cerr << "error loading the model\n" << e.msg();
        // std::system("pause");
    }

    std::vector<torch::jit::IValue> inputs;
    inputs.push_back(t_input);

    auto output = module.forward(inputs).toTensor();

    std::cout << "Model output: " << output.sizes() << std::endl;
    return torch_to_bridge(output);
}




extern "C" bridge_pt_model_t load_model(const uint8_t* model_path) {

    std::cout << "Begin loading model from path: " << model_path << std::endl;
    std::cout.flush();
    std::string path(reinterpret_cast<const char*>(model_path));
    std::cout << "Loading model from path: " << path << std::endl;
    std::cout.flush();

    try {
        auto* module = new torch::jit::Module(torch::jit::load(path));
        module->to(best_device,best_dtype,false);
        module->eval();
        std::cout << "Model loaded successfully!" << std::endl;
        std::cout.flush();
        return { static_cast<void*>(module) };
    } catch (const c10::Error& e) {
        std::cerr << "error loading the model\n" << e.msg();
        std::cout << "error loading the model\n" << e.msg();
        std::cout.flush();
        std::cerr.flush();
    }
    std::cout << "Model loading failed!" << std::endl;
    std::cout.flush();

    return { nullptr };
}



bridge_tensor_t model_forward(bridge_pt_model_t model, bridge_tensor_t input, bool is_vgg_based_model) {
    auto tn_mps = bridge_to_torch(input,best_device,true,best_dtype);
    // tn_mps = tn_mps.permute({2, 0, 1}).contiguous();
    // tn_mps.unsqueeze_(0);//.contiguous();
    auto tn = tn_mps.permute({2, 0, 1}).unsqueeze(0).contiguous();

    std::vector<torch::jit::IValue> ins;
    ins.push_back(tn);

    auto* module = static_cast<torch::jit::Module*>(model.pt_module);
    auto o = module->forward(ins).toTensor();
    // auto tn_out = o.squeeze(0).permute({1, 2, 0}).contiguous();
    auto tn_out = o.squeeze(0).contiguous().permute({1, 2, 0}).contiguous();

    if (is_vgg_based_model) {
        tn_out.div_(255.0);
    }

    auto tn_out_cpu = tn_out.to(torch::kCPU,torch::kFloat32,false,true);

    return torch_to_bridge(tn_out_cpu);

}

extern "C" bridge_tensor_t model_forward(bridge_pt_model_t model, bridge_tensor_t input) {
    return model_forward(model, input, false);
}

extern "C" bridge_tensor_t model_forward_style_transfer(bridge_pt_model_t model, bridge_tensor_t input) {
    return model_forward(model, input, true);
}

// std::tuple<uint64_t, uint64_t> get_cpu_frame_size(uint64_t width, uint64_t height, float32_t scale_factor) {
//     // if (best_device == torch::kMPS || best_device == torch::kCUDA)
//     if (accelerator_available())
//         return std::make_tuple(width, height);
//     uint64_t new_width = static_cast<uint64_t>(width * scale_factor);
//     uint64_t new_height = static_cast<uint64_t>(height * scale_factor);
//     return std::make_tuple(new_width, new_height);
// }

// extern "C" uint64_t get_cpu_frame_width(uint64_t width,float32_t scale_factor) {
//     return std::get<0>(get_cpu_frame_size(width, 0, scale_factor));
// }
// extern "C" uint64_t get_cpu_frame_height(uint64_t height,float32_t scale_factor) {
//     return std::get<1>(get_cpu_frame_size(0, height, scale_factor));
// }


extern "C" void hello_world(void) {
    std::cout << "Hello from C++!" << std::endl;
    std::cout.flush();
}

extern "C" bridge_tensor_t increment3(bridge_tensor_t arr) {
    auto t = bridge_to_torch(arr);
    // Increment the tensor
    auto incremented_tensor = t + 1;

    return torch_to_bridge(incremented_tensor);
}

extern "C" bridge_tensor_t convolve2d(
    bridge_tensor_t input,
    bridge_tensor_t kernel,
    bridge_tensor_t bias,
    int stride,
    int padding
) {
    auto t_input = bridge_to_torch(input);
    auto t_kernel = bridge_to_torch(kernel);
    auto t_bias = bridge_to_torch(bias);
    auto output = torch::conv2d(t_input, t_kernel, t_bias, stride, padding);
    return torch_to_bridge(output);
}

extern "C" bridge_tensor_t conv2d(
    bridge_tensor_t input,
    bridge_tensor_t kernel,
    bridge_tensor_t bias,
    int stride,
    int padding
) {
    auto t_input = bridge_to_torch(input);
    auto t_kernel = bridge_to_torch(kernel);
    auto t_bias = bridge_to_torch(bias);
    auto output = torch::conv2d(t_input, t_kernel, t_bias, stride, padding);
    return torch_to_bridge(output);
}

extern "C" bridge_tensor_t matmul(bridge_tensor_t a, bridge_tensor_t b) {
    auto t_a = bridge_to_torch(a);
    auto t_b = bridge_to_torch(b);

    // std::cout << "Input A shape: " << t_a.sizes() << std::endl;
    // std::cout << "Input B shape: " << t_b.sizes() << std::endl;
    // std::cout.flush();

    auto output = torch::matmul(t_a, t_b);

    // std::cout << "Input A shape: " << t_a.sizes() << std::endl;
    // std::cout << "Input B shape: " << t_b.sizes() << std::endl;
    // std::cout << "Input A: " << t_a.sum() << std::endl;
    // std::cout << "Input B: " << t_b.sum() << std::endl;
    // // std::cout << "Input B: " << t_b << std::endl;
    // std::cout << "Output shape: " << output.sizes() << std::endl;
    // std::cout << "Output sum: " << output.sum() << std::endl;
    // std::cout.flush();
    // printf("Hello from matmul!\n");
    return torch_to_bridge(output);

    // auto output_copy = output.clone();
    // std::cout << "Output copy shape: " << output_copy.sizes() << std::endl;
    // std::cout.flush();

    // auto bt = torch_to_bridge(output_copy);
    // std::cout << "Bridge tensor sizes: " << bt.sizes << std::endl;
    // std::cout << "Bridge tensor dim: " << bt.dim << std::endl;

    // std::cout.flush();

    // return bt;
}

extern "C" bridge_tensor_t max_pool2d(
    bridge_tensor_t input,
    int kernel_size,
    int stride,
    int padding,
    int dilation
) {
    auto t_input = bridge_to_torch(input);
    auto output = torch::max_pool2d(t_input, kernel_size, stride, padding);
    return torch_to_bridge(output);
}

extern "C" bridge_tensor_t resize(
    bridge_tensor_t input,
    int height,
    int width
) {
    auto image = bridge_to_torch(input);

    // auto output = resize_tensor_last2(image, height, width);
    
    // at::Tensor output = at::upsample_bilinear2d(t_input.unsqueeze(0), {height, width}, false);
    if (image.dim() == 3) {
        auto output = torch::nn::functional::interpolate(
            image.unsqueeze(0),
            torch::nn::functional::InterpolateFuncOptions()
            .size(std::vector<int64_t>({ height, width }))
            .mode(torch::kBilinear)
            .align_corners(false)
        ).squeeze(0);
        return torch_to_bridge(output);
    } else if (image.dim() == 4) {
        auto output = torch::nn::functional::interpolate(
            image,
            torch::nn::functional::InterpolateFuncOptions()
            .size(std::vector<int64_t>({ height, width }))
            .mode(torch::kBilinear)
            .align_corners(false)
        );
        return torch_to_bridge(output);
    } else {
        std::cerr << "Unsupported tensor dimension: " << image.dim() << std::endl;
        std::cerr.flush();
        std::cout << "Unsupported tensor dimension: " << image.dim() << std::endl;
        std::cout.flush();
        return input; // Return the original tensor if the dimension is unsupported
    }
}

extern "C" bridge_tensor_t imagenet_normalize(bridge_tensor_t input) {
    auto t_input = bridge_to_torch(input);
    torch::Tensor image = t_input; //.to(torch::kFloat32);// / 255.0;

    static const std::vector<float> kMean{0.485, 0.456, 0.406};
    static const std::vector<float> kStd {0.229, 0.224, 0.225};
    auto opts = image.options();
    auto mean = torch::tensor(kMean).reshape({3, 1, 1});  // (3,1,1)
    auto std  = torch::tensor(kStd).reshape({3, 1, 1});

    if (image.dim() == 4) {
        mean = mean.unsqueeze(0); // (1,3,1,1)
        std = std.unsqueeze(0);
    }

    auto output = (image - mean) / std;
    return torch_to_bridge(output);
}


extern "C" bridge_tensor_t add_two_arrays(bridge_tensor_t a, bridge_tensor_t b) {
    torch::Tensor t_a = bridge_to_torch(a);
    torch::Tensor t_b = bridge_to_torch(b);

    torch::Tensor output = t_a + t_b;

    return torch_to_bridge(output);
}

extern "C" bridge_tensor_t nll_loss(
    bridge_tensor_t input, 
    bridge_tensor_t target, 
    bridge_tensor_t weight,
    int ignoreIndex,
    int reduction
) {
    // Convert bridge_tensor_t to torch::Tensor
    torch::Tensor t_input = bridge_to_torch(input);
    torch::Tensor t_target = bridge_to_torch(target);
    torch::Tensor t_weight = bridge_to_torch(weight);

    // Map reduction int to string
    std::string reduction_str;
    switch (reduction) {
        case 0: reduction_str = "none"; break;
        case 1: reduction_str = "mean"; break;
        case 2: reduction_str = "sum"; break;
        default: reduction_str = "mean"; break;  // fallback default
    }

    torch::Tensor output = torch::nn::functional::nll_loss(
        t_input,
        t_target,
        torch::nn::functional::NLLLossFuncOptions()
            .weight(t_weight)
            .ignore_index(ignoreIndex)
            .reduction(reduction_str)
    );

    return torch_to_bridge(output);
}

// extern "C" bridge_tensor_t capture_webcam_bridge(int cam_index) {
//     torch::Tensor image = capture_webcam(cam_index);
//     return torch_to_bridge(image);
// }



// extern "C"


//  
// extern "C" bridge_tensor_t conv2d(
//     bridge_tensor_t input,
//     bridge_tensor_t kernel,
//     nil_scalar_tensor_t bias,
//     nil_scalar_tensor_t stride,
//     nil_scalar_tensor_t padding
// ) {
//     namespace F = torch::nn::functional;
//     F::conv2d(input, kernel, F::Conv2dFuncOptions().stride(1));
// }


extern "C" int baz(void) {
    printf("Hello from baz!\n");
    auto x = torch::randn({5, 3});
    return x.size(0);
}


extern "C" void wrHello(void) {
    printf("Hello from wrHello!\n");
}


extern "C" void wrHelloTorch(void) {
    printf("Hello from wrHelloTorch!\n");
    // auto t = torch::ones({2, 3});
    // std::cout << t << std::endl;
}




extern "C" void increment(float* arr, int* sizes, int dim, float* output) {
    // Convert sizes to std::vector<int64_t>
    std::vector<int64_t> sizes_vec(sizes, sizes + dim);
    auto shape = at::IntArrayRef(sizes_vec);
    auto t = torch::from_blob(arr, shape, torch::kFloat);

    // // Increment the tensor
    // auto incremented_tensor = t + 1;

    // // Store the incremented tensor in the output array
    // storeTensor(incremented_tensor, output);

    auto incremented_tensor = torch::from_blob(output, shape, torch::kFloat);
    incremented_tensor.copy_(t + 1);
}

extern "C" bridge_tensor_t increment2(float* arr, int* sizes, int dim) {
    // Convert sizes to std::vector<int64_t>
    std::vector<int64_t> sizes_vec(sizes, sizes + dim);
    auto shape = at::IntArrayRef(sizes_vec);
    auto t = torch::from_blob(arr, shape, torch::kFloat);

    // // Increment the tensor
    // auto incremented_tensor = t + 1;

    // // Store the incremented tensor in the output array
    // storeTensor(incremented_tensor, output);

    auto incremented_tensor = t + 1;

    return torch_to_bridge(incremented_tensor);
}


extern "C" float sumArray(float* arr, int* sizes, int dim) {
    // Convert sizes to std::vector<int64_t>

    printf("sumArray called with arr: %p, sizes: %p, dim: %d\n", arr, sizes, dim);

    std::vector<int64_t> sizes_vec(sizes, sizes + dim);
    std::cout << sizes_vec << std::endl;

    auto shape = at::IntArrayRef(sizes_vec);
    std::cout << shape << std::endl;

    auto t = torch::from_blob(arr, shape, torch::kFloat);
    std::cout << t << std::endl;

    return t.sum().item<float>();

    // return 0.0f;

    // float sum = 0.0f;
    // for (int i = 0; i < size; ++i) {
    //     sum += arr[i];
    // }
    // return sum;
    // const std::vector<int64_t> sizes_vec(sizes, dim);
    // auto shape = at::IntArrayRef(sizes_vec);

    // auto t = torch::from_blob(arr, shape, torch::kFloat);
    // return t.sum().item<float>();
}


extern "C" void split_loop(int64_t idx, int64_t n) {
    for (int i = 0; i < n; ++i) {
        std::cout << "idx(" << idx << "," << n << ") = " << i << std::endl;
        std::cout.flush();
    }
}

extern "C" void split_loop_filler(int64_t n,int64_t* ret) {
    for (int i = 0; i < n; ++i) {
        *ret = i;
        std::this_thread::sleep_for(std::chrono::seconds(0));
    }
}



// cv::VideoCapture open_camera(int cam_index) {
//     cv::VideoCapture cap(cam_index, cv::CAP_AVFOUNDATION);
//     if (!cap.isOpened()) {
//         std::cerr << "Could not open camera index " << cam_index << std::endl;
//         return cv::VideoCapture();
//     }
//     cap.set(cv::CAP_PROP_BUFFERSIZE, 1); // minimal internal buffering
//     cap.set(cv::CAP_PROP_FPS, 60);       // request higher FPS if possible
//     return cap;
// }


// extern "C" void show_webcam(void) {
//     cv::VideoCapture cap;
//     cap = open_camera(0);

//     cv::Mat frame_bgr;

//     while (true) {
//         if (!cap.read(frame_bgr) || frame_bgr.empty()) {
//             std::cerr << "[WARN] Empty frame, exiting" << std::endl;
//             break;
//         }

//         cv::imshow("webcam", frame_bgr);

//         if (cv::waitKey(1) == 27) { // ESC key
//             break;
//         }
//     }

//     cap.release();
//     cv::destroyAllWindows();
// }