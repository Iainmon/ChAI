import torch.nn as nn
import sys
import os
import torch
from torchvision.io import read_image
from torchvision.transforms import Resize, Normalize


from vgg import vgg16

model = vgg16(pretrained=True)

img_path = sys.argv[1] if len(sys.argv) > 1 else None
if img_path is None:
    print("Please provide an image path")
    sys.exit(1)
img = read_image(img_path).float()


img = Resize((224, 224))(img) # resize
img = Normalize(mean=[0.485, 0.456, 0.406], std=[0.229, 0.224, 0.225])(img / 255.0) # normalize
img = img.unsqueeze(0) #(1, 3, WIDTH, HEIGHT)
print(img.shape)

res = model(img)
# print top 5 scores
_, indices = torch.topk(res, 5)
percentage = torch.nn.functional.softmax(res, dim=1)[0] * 100
# lookup the index from the labels
labels = []
with open('imagenet/LOC_synset_mapping.txt') as f:
    for line in f:
        labels.append(line.strip())
for i in indices[0]:
    print(f'{labels[i]}: {percentage[i].item()}%')

