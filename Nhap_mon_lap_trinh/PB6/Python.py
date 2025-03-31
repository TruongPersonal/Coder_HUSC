from math import *

x = float(input())

fx = sin(x) + sqrt(log(3*x) / log(4)) + ceil(3*exp(x))
print('%.6f' % fx)