def toBinary(number):
    binaryNumber = ""
    while number != 0:
        binaryNumber += str(number % 2)
        number //= 2
    return binaryNumber[::-1]

def is_symmetryBinary(number):
    binaryNumber = toBinary(number)
    return binaryNumber == binaryNumber[::-1]


if __name__ == "__main__":
    number = int(input())
    if number % 2 != 0 and is_symmetryBinary(number):
        print("YES")
    else:
        print("NO")