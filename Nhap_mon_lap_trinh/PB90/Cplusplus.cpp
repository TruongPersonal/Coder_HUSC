#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

string toBinary(int number) {
    string binaryNumber = "";
    while (number != 0) {
        binaryNumber += to_string(number % 2);
        number /= 2;
    }
    reverse(binaryNumber.begin(), binaryNumber.end());
    return binaryNumber;
}

bool isSymmetryBinary(int number) {
    string binaryNumber = toBinary(number);
    string reverseBinaryNumber = binaryNumber;
    reverse(reverseBinaryNumber.begin(), reverseBinaryNumber.end());
    return binaryNumber == reverseBinaryNumber;
}

int main() {
    int number;
    cin >> number;
    if (number % 2 != 0 && isSymmetryBinary(number)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}