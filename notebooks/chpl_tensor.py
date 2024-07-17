


import struct

import numpy as np
import torch

def save_tensor(t,path,append=False):
    if isinstance(t,list):
        for i in range(len(t)):
            if i == 0:save_tensor(t[i],path,append=False)
            else: save_tensor(t[i],path,append=True)
        return
    if isinstance(t,torch.Tensor):
        t = t.to(torch.float64).cpu().detach().numpy()
    
    if append:
        mode = 'ab'
    else:
        mode = 'wb'
    
    fw = open(path,mode)
    shape = tuple(t.shape)
    rank = len(shape)
    fw.write(struct.pack('@q',rank))
    for i in range(rank):
        fw.write(struct.pack('@q',shape[i]))
    for x in np.nditer(t):
        fw.write(struct.pack('@d',x))
    fw.close()
