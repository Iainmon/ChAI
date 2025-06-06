import torch
from models.TransformerLM import *
from data.TinyStories import *
from spacy.tokenizer import Tokenizer

# safely unpickle Vocabulary object
torch.serialization.add_safe_globals([Vocabulary, Tokenizer])

# load checkpoint
CHKPT_PATH = "./chkpts/2ZJPbu_TinyStories"
chkpt = torch.load(CHKPT_PATH, map_location=torch.device('cpu'))

# rebuild model
config = chkpt["config"]
vocab = chkpt["vocab"]
vocab_size = len(vocab)

model = TransformerLM(vocab_size, config["d_model"], config["n_heads"], config["n_layers"])
model.load_state_dict(chkpt["model_state_dict"])
model.eval()

# script and save model
scripted_model = torch.jit.script(model)
scripted_model.save("model.pt")