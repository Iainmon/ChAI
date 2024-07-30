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
    

def get_attributes(model):
    return { str(k): str(v[0]) if isinstance(v,tuple) else str(v).lower() for (k,v) in dict(model.__dict__).items() if k[0] != '_'}

def get_summary(model,global_name,parent_name=None):
    model_name = model.__class__.__name__
    d = {
        'layerType': model_name,
        'attributes': get_attributes(model),
        'subModules': { name : get_summary(m,global_name=global_name,parent_name=name) for name,m in  model.named_children() },
        'subModuleOrder': [name for name,_ in model.named_children()]
    }
    # if parent_name is None:
    #     return {
    #         'model_name': global_name,
    #         global_name: d
    #     }
    return d

def dump_model_parameters(model,path_prefix,model_name,with_json=True,verbose=True):
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
    with open(Path(path_prefix) / 'specification.json','w') as f:
        f.write(json.dumps(get_summary(model,model_name),indent=2))


def chai_dump(self,path_prefix,model_name,with_json=True,verbose=True):
    return dump_model_parameters(self,path_prefix,model_name,with_json=True,verbose=True)

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

