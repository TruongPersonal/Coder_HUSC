n = int(input())

if (n % 2 == 0) and not (n < 0 and n % 3 == 0) or not (n % 2 == 0) and (n < 0 and n % 3 == 0):
    print('Yes')
else: 
    print('No')