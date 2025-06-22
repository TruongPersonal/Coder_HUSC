#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen(".build/Input.inp", "r", stdin);
    freopen(".build/Output.out", "w", stdout);
    #endif
    int n;
    cin >> n;

    int divisors_count[n + 1];

    for (int i = 0; i <= n; i++) {
        divisors_count[i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            divisors_count[j]++;
        }
    }

    int max_divisors = divisors_count[0];
    int result = 1;
    for (int i = 1; i <= n; i++) {
        if (divisors_count[i] >= max_divisors) {
            max_divisors = divisors_count[i];
            result = i;
        }
    }

    cout << result;

    return 0;
}