n = int(input())
a = list(map(int, input().split()))

b = []
for i in range(n):
    count = 0
    while not a[i] % 2:
        a[i] //= 2
        count += 1
    b.append(count)
print(min(b))
