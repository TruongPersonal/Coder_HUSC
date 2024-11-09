#include <iostream>
using namespace std;

int main() {
    long long n, p;
    cin >> n >> p;
    long long sits_total = p * 4;
    long long carriage = n / sits_total;
    if (n % sits_total) {
        carriage++;
    }
    cout << carriage;

    return 0;
}