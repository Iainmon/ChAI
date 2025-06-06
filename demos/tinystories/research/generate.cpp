#include <torch/torch.h>
#include <torch/script.h>
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <random>
#include "json.hpp"

using json = nlohmann::json;

const int MAX_LENGTH = 500;
const int SOS_IDX = 1;
const int EOS_IDX = 2;

std::unordered_map<std::string, int> stoi;
std::vector<std::string> itos;

void load_vocab(const std::string& path) {
    std::ifstream f(path);
    json vocab_json;
    f >> vocab_json;
    stoi = vocab_json["stoi"].get<std::unordered_map<std::string, int>>();
    itos = vocab_json["itos"].get<std::vector<std::string>>();
    // std::cout << "Vocab size: " << stoi.size() << " words\n";
	// std::cout << "First few tokens:\n";
	// for (int i = 0; i < std::min(10, (int)itos.size()); ++i) {
	//     std::cout << i << ": " << itos[i] << '\n';
	// }
}

int argmaxDecode(const torch::Tensor& scores) {
    return scores.argmax().item<int>();
}

int sampleDecode(const torch::Tensor& scores, double temperature = 0.5) {
    torch::Tensor scaled = scores / temperature;
    torch::Tensor probs = torch::softmax(scaled, 0);
    torch::Tensor sampled = torch::multinomial(probs, 1);
    return sampled.item<int>();
}

int nucleusDecode(const torch::Tensor& scores, double p = 0.9, double temperature = 0.5) {
    torch::Tensor scaled = scores / temperature;
    torch::Tensor probs = torch::softmax(scaled, 0);

    auto sorted = probs.sort(-1, /*descending=*/true);
    auto sorted_probs = std::get<0>(sorted);
    auto sorted_indices = std::get<1>(sorted);
    auto cumulative_probs = torch::cumsum(sorted_probs, 0);

    int cutoff = (cumulative_probs < p).sum().item<int>();
    torch::Tensor topk_indices = sorted_indices.slice(0, 0, cutoff + 1);

    torch::Tensor filtered_probs = torch::zeros_like(probs);
    filtered_probs.index_put_({topk_indices}, probs.index({topk_indices}));
    filtered_probs /= filtered_probs.sum();

    return torch::multinomial(filtered_probs, 1).item<int>();
}

torch::Tensor tokenize(const std::string& prompt) {
    torch::Tensor tokens = torch::zeros({1, MAX_LENGTH}, torch::kLong);
    tokens[0][0] = SOS_IDX;
    int idx = 1;
    std::istringstream iss(prompt);
    std::string word;
    while (iss >> word && idx < MAX_LENGTH) {
        tokens[0][idx++] = stoi.count(word) ? stoi[word] : stoi["<UNK>"];
    }
    return tokens;
}

void generate_text(
    torch::jit::script::Module& model,
    const torch::Tensor& src,
    int prompt_len,
    const std::string& prompt,
    std::function<int(const torch::Tensor&)> decode_fn,
) {
    torch::Tensor input = src.clone();
    std::cout << "\n\n" << prompt;
    for (int t = prompt_len + 1; t < MAX_LENGTH; ++t) {
        auto output = model.forward({input}).toTensor();
        auto next_scores = output[0][t - 1]; // [vocab_size]
        int idx = decode_fn(next_scores);
        input[0][t] = idx;
        std::string word = itos[idx];

        if (word == "<EOS>") break;
        if (word.find_first_of(".,!?\"'") == std::string::npos)
            word = " " + word;
        std::cout << word << std::flush;
    }
    std::cout << "\n";
}

int main() {
    torch::manual_seed(0);
    torch::globalContext().setDeterministicCuDNN(true);

    load_vocab("vocab.json");
    torch::jit::script::Module model = torch::jit::load("model.pt");
    model.eval();

    while (true) {
        std::string prompt;
        std::cout << "\n\nPrompt:\n";
        std::getline(std::cin, prompt);
        if (prompt.empty()) continue;

        torch::Tensor src = tokenize(prompt).to(torch::kCPU);
        int prompt_len = prompt.empty() ? 0 : std::count_if(prompt.begin(), prompt.end(), ::isspace) + 1;

        std::cout << "\n\n[Argmax Sampling]";
        generate_text(model, src, prompt_len, prompt, argmaxDecode);

        std::cout << "\n\n[Temperature Sampling]";
        generate_text(model, src, prompt_len, prompt,
            [](const torch::Tensor& s) { return sampleDecode(s, 0.5); });

        std::cout << "\n\n[Nucleus Sampling]";
        generate_text(model, src, prompt_len, prompt,
            [](const torch::Tensor& s) { return nucleusDecode(s, 0.9, 0.5); });
    }

    return 0;
}
