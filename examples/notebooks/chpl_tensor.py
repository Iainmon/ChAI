import struct
import pickle
import io
import numpy as np
import torch
import json

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

def sanitize_tensor(x):
    if isinstance(x,torch.Tensor):
        if x.dtype == torch.float64:
            return x.to(torch.float64).cpu().detach().numpy()
        return x.to(torch.float32).cpu().detach().numpy()
    if isinstance(x,np.ndarray):
        if x.dtype == np.float64:
            return x.astype(np.float64,casting='safe')
        return x.astype(np.float32,casting='safe')
    raise AssertionError("Cannot sanitize ", x)

class ChapelTensor(object):
    def __init__(self,data = np.arange(1),**kwargs):
        clean = sanitize_tensor(data)
        self.rank = len(tuple(clean.shape))
        self.shape = tuple(clean.shape)
        self.dtype = str(clean.dtype)
        self.data = clean

    def pack_into(self,buffer):
        buffer.write(struct.pack('@q',self.rank))
        for i in range(self.rank):
            buffer.write(struct.pack('@q',self.shape[i]))
        fmt = '@d' if self.data.dtype == 'float64' else '@f'
        for x in np.nditer(self.data):
            buffer.write(struct.pack(fmt,x))

    def full_dict(self):
        d = dict(self.__dict__)
        d['data'] = d['data'].tolist()
        return d

    def pack_bytes(self):
        bf = io.BytesIO()
        self.pack_into(bf)
        return bf
    

def dump_model_parameters(model,path_prefix,with_json=True,verbose=True):
    for param_tensor in model.state_dict():
        if verbose: print("Serializing ", param_tensor)
        t = model.state_dict()[param_tensor]
        t = ChapelTensor(t.to(torch.float64))
        path = path_prefix + param_tensor
        if with_json:
            if verbose: print("Writing json.")
            t_json = json.dumps(t.full_dict(),indent=2)
            f = open(path + '.json', 'w+')
            f.write(t_json)
            f.close()

        if verbose: print("Writing bytes.")
        f = open(path + '.chdata','wb')
        t.pack_into(f)
        f.close()
