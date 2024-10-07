x = int(input())
if x > 3:
    B = x*x*x + 2*x*x + 5*x
elif x < 1:
    B = 5*x - 8
else:
    B = x*x - 2*x + 4
print(B)