#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int isArmstrong(int number) {
    string numberString = to_string(number);
    int i = numberString.size();
    int numberTemp = number;
    int sumPower = 0;
    while (number != 0) {
        sumPower += pow((number % 10), i);
        number /= 10;
    }
    return numberTemp == sumPower;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (isArmstrong(a[i])) {
            count++;
        }
    }
    cout << count;

    return 0;
}