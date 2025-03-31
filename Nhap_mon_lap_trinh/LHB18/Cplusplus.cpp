#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int number) {
    for (int i = 2; i <= sqrt(number); ++i) {
        if (!(number % i)) {
            return false;
        }
    }
    return number > 1;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (isPrime(a[i])) {
            ++count;
        }
    }
    cout << count;

    return 0;
}