import torch
import torch.nn as nn
import torch.nn.functional as F
import math


class PositionalEncoding(nn.Module):
    def __init__(self, d_model):
        super().__init__()
        self.d_model = d_model

    def forward(self, x):
        L = x.shape[1]

        position = torch.arange(L, dtype=torch.float32).unsqueeze(1)
        f = torch.exp(-math.log(10000) * torch.arange(0, self.d_model, 2, dtype=torch.float32)/self.d_model)

        pe = torch.zeros(L, self.d_model, dtype=torch.float32, device=x.device)
        pe[:, 0::2] = torch.sin(position * f)
        pe[:, 1::2] = torch.cos(position * f)

        pe = pe.unsqueeze(0)
        return x + pe

class TransformerLM(nn.Module):
    def __init__(self, vocab_size, d_model, n_heads, n_layers):
        super().__init__()

        self.embeddings = nn.Embedding(vocab_size, d_model)
        self.position = PositionalEncoding(d_model)
        layer = nn.TransformerEncoderLayer(d_model=d_model, nhead=n_heads, dim_feedforward=d_model,
                                           batch_first=True)
        self.encoder = nn.TransformerEncoder(layer, num_layers=n_layers, enable_nested_tensor=True)
        self.classifier = nn.Linear(d_model, vocab_size)

    def generateCausalMask(self, L: int):
        mask = torch.full((L, L), float('-inf'))
        mask = torch.triu(mask, diagonal=1)

        return mask

    def forward(self, x):
        x = self.embeddings(x)
        x = self.position(x)

        mask = self.generateCausalMask(x.shape[1])
        x = self.encoder(src=x, mask=mask, is_causal=True)

        x = self.classifier(x)
        return x