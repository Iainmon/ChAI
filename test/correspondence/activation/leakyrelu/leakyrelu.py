import torch

def test(imports):
    print = imports['print_fn']

    a = torch.nn.LeakyReLU()(torch.zeros(2,3))
    print(a)

    b = torch.nn.LeakyReLU()(torch.zeros(2,3,4) - 60.0)
    print(b)
    
    b = torch.nn.LeakyReLU()(torch.zeros(2,3,4) - 1.0)
    print(b)

    c = torch.nn.LeakyReLU()(torch.zeros(10) + 40.0)
    print(c)
    
    # same values with negative_slope = -0.001
    a = torch.nn.LeakyReLU(negative_slope=-0.001)(torch.zeros(2,3))
    print(a)

    b = torch.nn.LeakyReLU(negative_slope=-0.001)(torch.zeros(2,3,4) - 60.0)
    print(b)

    c = torch.nn.LeakyReLU(negative_slope=-.001)(torch.zeros(10) + 40.0)
    print(c)
    
    # same values with negative_slope = 10.0
    a = torch.nn.LeakyReLU(negative_slope=10.0)(torch.zeros(2,3))
    print(a)

    b = torch.nn.LeakyReLU(negative_slope=10.0)(torch.zeros(2,3,4) - 60.0)
    print(b)

    c = torch.nn.LeakyReLU(negative_slope=10.0)(torch.zeros(10) + 40.0)
    print(c)