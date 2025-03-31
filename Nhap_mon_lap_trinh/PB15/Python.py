from math import *

a, b, c = map(float, input().split())
if a + b > c and a + c > b and b + c > a:
    P = (a + b + c) / 2
    S = sqrt(P * (P - a) * (P - b) * (P - c))
    print('%.4f' % S)
else:
    print('No Solution')