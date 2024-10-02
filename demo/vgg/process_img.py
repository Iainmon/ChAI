import torch
from torchvision.io import read_image
import sys
import os
from torchvision.transforms import Resize, Normalize

def process(img_path):
    img = read_image(img_path).double()
    print(img.shape, img.dtype)
    # write the image tensor to a file

    sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..', 'scripts')))
    import chai


    img = Resize((224, 224))(img) # resize
    img = Normalize(mean=[0.485, 0.456, 0.406], std=[0.229, 0.224, 0.225])(img / 255.0) # normalize
    # img = img.unsqueeze(0) #(1, 3, WIDTH, HEIGHT)
    print(img.shape, img.dtype)

    os.makedirs('imgs', exist_ok=True)
    # remove the extension
    img.chai_save('imgs', os.path.splitext(os.path.basename(img_path))[0])

for img_path in sys.argv[1:]:
    process(img_path)
