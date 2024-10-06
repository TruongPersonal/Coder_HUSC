#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long X1 = a * b, X2 = c * d, X = X1 - X2;
    cout << "Difference = " << X << "\n";

    return 0;
}