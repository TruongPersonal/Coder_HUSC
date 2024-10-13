def isArmstrong(number):
    tempNumber = number
    i = 0
    while tempNumber != 0:
        tempNumber //= 10
        i += 1
    tempNumber = number
    sumPower = 0
    while number != 0:
        sumPower += pow((number % 10), i)
        number //= 10
    return tempNumber == sumPower

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    count = 0
    for i in range (n):
        if (isArmstrong(a[i])):
            count += 1
    print(count)