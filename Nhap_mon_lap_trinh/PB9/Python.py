from math import *

x1, y1, x2, y2 = map(int, input().split())
distance =  sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))
print('%.9f' % distance)