a, b, c = map(int, input().split())
if a == b and b == c:
    print('Tam giac deu')
elif a == b or b == c or c == a:
    print('Tam giac can')
else:
    print('Tam giac thuong')