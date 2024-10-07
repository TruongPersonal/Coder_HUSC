#include <iostream>
using namespace std;

int main() {
    long long n, p;
    cin >> n >> p;
    long long sitsTotal = p * 4;
    long long carriage = n / sitsTotal;
    if (n % sitsTotal) {
        carriage++;
    }
    cout << carriage;

    return 0;
}