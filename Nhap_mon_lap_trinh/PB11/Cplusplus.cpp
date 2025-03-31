#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;

    long long A;
    if (x >= 10) {
        A = x*x*x + 5*x;
    }
    else {
        A = x*x - 2*x + 4;
    }
    cout << A;

    return 0;
}