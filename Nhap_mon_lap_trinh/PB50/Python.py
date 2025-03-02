x = float(input())
S = 1
term = 1
i = 1

while True:
    term *= x / i
    if term < 1e-9:
        break
    S += term
    i += 1

print(f"{S:.4f}")
