#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int d = m % 10, h = n % 10, a = m / 1000, e = n / 1000, S= d + h, P = a * e;
    cout << S << "\n" << P << "\n";

    return 0;
}