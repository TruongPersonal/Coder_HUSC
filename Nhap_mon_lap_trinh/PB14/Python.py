a, b = map(int, input().split())
if a == 0:
    if b != 0:
        print('No Solution')
    else:
        print('Many Solutions')
else:
    x = float(-b/a)
    print('%.2f' % x)