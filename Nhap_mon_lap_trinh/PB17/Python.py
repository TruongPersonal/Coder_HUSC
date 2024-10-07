m, n = map(int, input().split())
if not m % n or not n % m:
    print('Yes')
else:
    print('No')