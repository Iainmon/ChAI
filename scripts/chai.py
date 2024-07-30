import struct
import pickle
import io
import numpy as np
import torch
import torch.nn
import json

from pathlib import Path

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
    Path(path_prefix).mkdir(exist_ok=True)
    for param_tensor in model.state_dict():
        if verbose: print("Serializing ", param_tensor)
        t = model.state_dict()[param_tensor]
        t = ChapelTensor(t.to(torch.float64))
        json_path = Path(path_prefix) / (param_tensor + '.json')
        chai_path = Path(path_prefix) / (param_tensor + '.chdata')
        if with_json:
            if verbose: print("Writing json.")
            t_json = json.dumps(t.full_dict(),indent=2)
            f = open(json_path, 'w+')
            f.write(t_json)
            f.close()

        if verbose: print("Writing bytes.")
        f = open(chai_path,'wb')
        t.pack_into(f)
        f.close()

def chai_dump(self,path_prefix,with_json=True,verbose=True):
    return dump_model_parameters(self,path_prefix,with_json=True,verbose=True)

torch.nn.Module.chai_dump = chai_dump

def chai_save(self,path,name,with_json=True,verbose=True,dtype=None):
    if dtype is None:
        dtype = self.dtype
    Path(path).mkdir(exist_ok=True)
    path = Path(path)
    t = ChapelTensor(self.to(dtype))
    if with_json:
        if verbose: print("Writing json.")
        t_json = json.dumps(t.full_dict(),indent=2)
        f = open(path / (name + '.json'), 'w+')
        f.write(t_json)
        f.close()

    if verbose: print("Writing bytes.")
    f = open(path / (name + '.chdata'),'wb')
    t.pack_into(f)
    f.close()

torch.Tensor.chai_save = chai_save