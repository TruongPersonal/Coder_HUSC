import math
    
def is_prime(number):
    for i in range(2, math.isqrt(number) + 1):
        if number % i == 0:
            return False
    return number > 1

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    
    count = 0
    for i in range(0, len(a)):
        if is_prime(a[i]):
            count += 1
    print(count)