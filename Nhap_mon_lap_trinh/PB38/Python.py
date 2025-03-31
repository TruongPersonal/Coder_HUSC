from math import *
def is_prime(number):
    for i in range(2, isqrt(number) + 1) :
        if number % i == 0:
            return False
    return number > 1

if __name__ == '__main__':
    n = int(input())
    print('Yes' if is_prime(n) else 'No')