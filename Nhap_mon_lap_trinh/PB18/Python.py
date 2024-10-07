n, p = map(int, input().split())
sitsTotal = p * 4
carriage = n // sitsTotal
if n % sitsTotal:
    carriage += 1
print(carriage)