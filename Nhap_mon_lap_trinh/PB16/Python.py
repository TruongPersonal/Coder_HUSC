from math import *

a, b, c = map(float, input().split())
delta = b*b - 4*a*c
if delta > 0:
    x1 = (-b + sqrt(delta)) / (2 * a)
    x2 = (-b - sqrt(delta)) / (2 * a)
    print('%.4f' % x1)
    print('%.4f' % x2)
elif delta == 0:
    x = -b / (2 * a)
    print('%.4f' % x)
else:
    print('No Solution')