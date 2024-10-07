from math import *

pi = 3.14159
a, b, alpha = map(float, input().split())
alpha = alpha * pi / 180;
area = 0.5 * a * b * sin(alpha);
print('%.2f' % area)