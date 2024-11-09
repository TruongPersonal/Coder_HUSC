n, p = map(int, input().split())
sits_total = p * 4
carriage = n // sits_total
if n % sits_total:
    carriage += 1
print(carriage)