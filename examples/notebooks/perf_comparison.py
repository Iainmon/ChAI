import argparse
import torch
import torch.nn as nn
import torch.nn.functional as F
import torch.optim as optim
from torchvision import datasets, transforms
from torch.optim.lr_scheduler import StepLR
import numpy as np
import torchvision.transforms.functional as tvF
import json
import struct
import time



class Net(nn.Module):
    def __init__(self):
        super(Net, self).__init__()
        self.conv1 = nn.Conv2d(1, 32, 3, 1)
        self.conv2 = nn.Conv2d(32, 64, 3, 1)
        self.dropout1 = nn.Dropout(0.25)
        self.dropout2 = nn.Dropout(0.5)
        self.fc1 = nn.Linear(9216, 128)
        self.fc2 = nn.Linear(128, 10)

    def forward(self, x):
        x = self.conv1(x)
        x = F.relu(x)
        x = self.conv2(x)
        x = F.relu(x)
        x = F.max_pool2d(x, 2)
        x = self.dropout1(x)
        x = torch.flatten(x, 1)
        x = self.fc1(x)
        x = F.relu(x)
        x = self.dropout2(x)
        x = self.fc2(x)
        output = F.log_softmax(x, dim=1)
        return output

cnn = Net()
cnn.to('cpu')
cnn.load_state_dict(torch.load('mnist_cnn.pt'))
img = torch.arange(1 * 28 * 28,dtype=torch.float).reshape(1,1,28,28)
output = cnn(img)

transform = transforms.Compose([
                transforms.ToTensor(),
                transforms.Normalize((0.1307,), (0.3081,))
            ])

dataset = datasets.MNIST('../data', train=False, download=True, transform=transform)


start = time.time()

for i in range(10000):
    img_,lb = dataset[i]
    img = img_.reshape(1,1,28,28)
    img.to('cpu')
    output = int(cnn(img).argmax())
    path = '../data/datasets/mnist/image_idx_' + str(i) # + f'_{lb}_{output}'
    print(i, output)

end = time.time()
print('Time is:', end - start)