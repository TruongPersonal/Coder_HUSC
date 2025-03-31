#include <iostream>
using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;

    if (!(m%n) || !(n%m)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}