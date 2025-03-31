from math import *

accuracy = pow(10, -9)
a, b, c = map(float, input().split())
if abs(a - b) < accuracy and abs(a - c) < accuracy:
    print('Tam giac deu')
elif abs(a - b) < accuracy or abs(a - c) < accuracy or abs(b - c) < accuracy:
    print('Tam giac can')
else:
    print('Tam giac thuong')
