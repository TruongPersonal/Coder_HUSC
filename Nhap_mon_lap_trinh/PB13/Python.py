from math import *

x = float(input())
if x > 0:
    C = pow(x, 2) + sqrt(x) + 1
    print('%.6f' % C)
else :
    if x == -3:
        print('Div by zero')
    else:
        C = (pow(x, 3) + 2*x + 1) / (x + 3)
        print('%.6f' % C)