import torch
import torch.nn as nn

from torch.optim import AdamW
from torch.optim.lr_scheduler import CosineAnnealingLR

import signal
from functools import partial
import sys

from models.TransformerLM import *
from data.TinyStories import *

import wandb
import datetime
import random
import string
import wandb
from tqdm import tqdm
from spacy.tokenizer import Tokenizer
torch.serialization.add_safe_globals([Vocabulary, Tokenizer])

use_cuda_if_avail = True
if use_cuda_if_avail and torch.cuda.is_available():
    device = "cuda"
else:
    device = "cpu"

config = {
    "bs":64,   # batch size
    "lr":0.0003, # learning rate
    "l2reg":0.0000001, # weight decay
    "max_epoch":10,
    "d_model":256,
    "n_heads":8,
    "n_layers":8
}


# This just runs a dummy batch through the model to see if anything breaks.
# Avoids having to load all the data before finding out the model is broken.
def dryRun():
  B = config["bs"]
  L = 300
  V = 8000
  input =  torch.randint(0, V, (B, L)).to(device)
  storylm = TransformerLM(V, config["d_model"], config["n_heads"], config["n_layers"])
  storylm.to(device)
  
  out = storylm(input)

  loss = out.sum()
  loss.backward()
  
  assert out.shape == (B, L, V), "[Failed] Dry fit to check shapes work for a dummy input."
  print("[Passed] Dry fit to check shapes work for a dummy input.")
  
def main():
    # Quick sanity check before we do anything heavy
    dryRun()

    train_loader, vocab = getTinyStoriesDataloadersAndVocab(config["bs"])
    print("Words: "+str(len(vocab)))
    storylm = TransformerLM(len(vocab), config["d_model"], config["n_heads"], config["n_layers"])
    print(storylm)

    torch.compile(storylm)

    train(storylm, train_loader, vocab)



def train(model, train_loader, vocab):
  # Log our exact model architecture string
  config["arch"] = str(model)
  run_name = generateRunName()

  # Startup wandb logging
  wandb.login()
  wandb.init(project="TinyStories CS499 A8", name=run_name, config=config)

  # Move model to the GPU
  model.to(device)

  # Set up optimizer and our learning rate schedulers
  optimizer = AdamW(model.parameters(), lr=config["lr"], weight_decay=config["l2reg"])
  scheduler = CosineAnnealingLR(optimizer, T_max = config["max_epoch"])
  
  # Loss
  criterion = nn.CrossEntropyLoss(ignore_index=0)

  # Main training loop with progress bar
  iteration = epoch = 0
  pbar = tqdm(total=config["max_epoch"]*len(train_loader), desc="Training Iterations", unit="batch")
  for epoch in range(config["max_epoch"]):

    #Set up signal catch functions to save our model on interrupt 
    signal.signal(signal.SIGINT, partial(interruptHandler, 
                                         epoch, model, optimizer, 
                                         scheduler, config, vocab, run_name))
    signal.signal(signal.SIGTERM, partial(interruptHandler, 
                                         epoch, model, optimizer, 
                                         scheduler, config, vocab, run_name))
    model.train()

    # Log LR
    wandb.log({"LR/lr": scheduler.get_last_lr()[0]}, step=iteration)

    for x in train_loader:
      x = x.to(device)

      out = model(x)[:,:-1,:]
      x = x[:,1:]

      loss = criterion(out.permute(0,2,1), x)

      loss.backward()
      optimizer.step()

      optimizer.zero_grad()

      wandb.log({"Loss/train": loss.item()}, step=iteration)
      pbar.update(1)
      iteration+=1

    
    torch.save({'epoch':epoch,
                'model_state_dict': model.state_dict(),
                'optimizer_state_dict':optimizer.state_dict(),
                'scheduler_state_dict':scheduler.state_dict(),
                'config':config,
                "vocab": vocab},
                "./chkpts/"+run_name)

    

    # Adjust LR
    scheduler.step()

  wandb.finish()
  pbar.close()

       
def interruptHandler(epoch, model, optimizer, scheduler, config, vocab, run_name, sig, frame):
  torch.save({'epoch':epoch,
              'model_state_dict': model.state_dict(),
              'optimizer_state_dict':optimizer.state_dict(),
              'scheduler_state_dict':scheduler.state_dict(),
              'config':config,
              "vocab": vocab},
              "./chkpts/"+run_name+"_interrupt")
  sys.exit(0)

def generateRunName():
  random.seed()
  random_string = ''.join(random.choices(string.ascii_letters + string.digits, k=6))
  now = datetime.datetime.now()
  run_name = ""+random_string+"_TinyStories"
  return run_name


main()