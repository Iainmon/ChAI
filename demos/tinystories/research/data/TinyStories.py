import torch
from collections import Counter
from torch.utils.data import Dataset, DataLoader
from datasets import load_dataset
import spacy
from torch.nn.utils.rnn import pad_sequence
from tqdm import tqdm
import random
random.seed(0)

MAX_LEN = 300
MAX_STORIES = 250000

class Vocabulary:
  def __init__(self, corpus, tokenizer):
    self.tokenizer = tokenizer
    self.word2idx, self.idx2word = self.build_vocab(corpus)

  def __len__(self):
    return len(self.word2idx)
  
  def text2idx(self, text):
    tokens = [str(x).strip().lower() for x in self.tokenizer(text)]
    return [self.word2idx[t] if t in self.word2idx.keys() else self.word2idx['<UNK>'] for t in tokens]

  def idx2text(self, idxs):
    return [self.idx2word[i] if i in self.idx2word.keys() else '<UNK>' for i in idxs]


  def build_vocab(self,corpus):
    cntr = Counter()
    for datapoint in tqdm(corpus):     
      cntr.update( [str(x).strip().lower() for x in self.tokenizer(datapoint)] )

    tokens = [t for t,c in cntr.items() if c >= 30]
    word2idx = {t:i+4 for i,t in enumerate(tokens)}
    idx2word = {i+4:t for i,t in enumerate(tokens)}
    
    word2idx['<PAD>'] = 0  #add padding token
    idx2word[0] = '<PAD>'

    word2idx['<SOS>'] = 1  #add padding token
    idx2word[1] = '<SOS>'

    word2idx['<EOS>'] = 2  #add padding token
    idx2word[2] = '<EOS>'

    word2idx['<UNK>'] = 3  #add padding token
    idx2word[3] = '<UNK>'
    

    return word2idx, idx2word

class TinyStories(Dataset):

  def __init__(self,split="train", vocab = None):

    print("Loading data...")
    dataset = load_dataset("roneneldan/TinyStories", split=split)
    self.data = [x["text"] for x in random.sample(list(dataset), MAX_STORIES)]


    if vocab == None:
      print("Building vocab...")
      self.vocab = Vocabulary(self.data, spacy.load('en_core_web_sm').tokenizer)
    else:
      self.vocab = vocab

  def __len__(self):
    return len(self.data)

  def __getitem__(self, idx):
    x = self.vocab.text2idx(self.data[idx])
    l = min(MAX_LEN, len(x))
    numeralized = [self.vocab.word2idx['<SOS>']]+x[:l]+[self.vocab.word2idx['<EOS>']]
    return torch.tensor(numeralized)
  
  @staticmethod
  def pad_collate(batch):
    xx_pad = pad_sequence(batch, batch_first=True, padding_value=0)

    return xx_pad

def getTinyStoriesDataloadersAndVocab(batch_size=128):
  train = TinyStories(split="train")
  
  collate = TinyStories.pad_collate
  train_loader = DataLoader(train, batch_size=batch_size, num_workers=8, shuffle=True, collate_fn=collate, drop_last=True)
  
  return train_loader, train.vocab


