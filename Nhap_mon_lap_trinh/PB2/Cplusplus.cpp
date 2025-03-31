#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long sum = a + b, difference = a - b, multiply = a * b, quotient = a / b, modulo = a % b;
    cout << a << " + " << b << " = " << sum << "\n";
    cout << a << " - " << b << " = " << difference << "\n";
    cout << a << " * " << b << " = " << multiply << "\n";
    cout << a << " / " << b << " = " << quotient << "\n";
    cout << a << " % " << b << " = " << modulo << "\n";

    return 0;
}