


import struct
import pickle
import io
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
    # __slots__ = ('rank','shape','dtype','data','__dict__')
    def __init__(self,data = np.arange(1),**kwargs):
        clean = sanitize_tensor(data)
        self.rank = len(tuple(clean.shape))
        self.shape = tuple(clean.shape)
        self.dtype = str(clean.dtype)
        self.data = clean

    # def shape(self):
    #     return tuple(self.data.shape)
    # def rank(self):
    #     return len(self.shape())
    
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

class MyPickler(pickle.Pickler):
    def reducer_override(self, obj):
        """Custom reducer for MyClass."""
        # if isinstance(obj,ChapelTensor):
        #     return type, (obj.__name__,obj.__bases__,obj.__dict__)
        return NotImplemented

        if getattr(obj, "__name__", None) == "ChapelTensor":
            return type, (obj.__name__, obj.__bases__,
                          {'my_attribute': 1})
        else:
            # For any other object, fallback to usual reduction
            return NotImplemented


