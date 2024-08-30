


a = torch.ones(2,3,4)
b = torch.rand(2,3,4)
c = a + b


class Linear(nn.Module):
    def forward(self,x):
        return (self.weights * x) + self.bias
    