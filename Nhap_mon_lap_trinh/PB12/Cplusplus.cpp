#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;

    long long B;
    if (x > 3) {
        B = x*x*x + 2*x*x + 5*x;
    }
    else if (x < 1) {
        B = 5*x - 8;
    }
    else {
        B = x*x - 2*x + 4;
    }
    cout << B;

    return 0;
}