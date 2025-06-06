import json
import torch
from models.TransformerLM import *
from data.TinyStories import *
from spacy.tokenizer import Tokenizer

torch.serialization.add_safe_globals([Vocabulary, Tokenizer])

CHKPT_PATH = "./chkpts/2ZJPbu_TinyStories"
chkpt = torch.load(CHKPT_PATH, map_location=torch.device('cpu'))

vocab = chkpt["vocab"]

# Force itos to be a list rather than a dict with stringified keys
itos_as_list = [vocab.idx2word[i] for i in range(len(vocab.idx2word))]

with open("vocab.json", "w") as f:
    json.dump({
        "stoi": vocab.word2idx,
        "itos": itos_as_list
    }, f)
