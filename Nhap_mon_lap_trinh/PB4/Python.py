m, n = map(int, input().split())
d, h = m % 10, n % 10
a, e = m // 1000, n // 1000
S = d + h
P = a * e
print(S, P, sep='\n')
