#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif
    int n;
    cin >> n;

    int divisorsCount[n + 1];

    for (int i = 0; i <= n; i++) {
        divisorsCount[i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            divisorsCount[j]++;
        }
    }

    int maxDivisors = divisorsCount[0];
    int result = 1;
    for (int i = 1; i <= n; i++) {
        if (divisorsCount[i] >= maxDivisors) {
            maxDivisors = divisorsCount[i];
            result = i;
        }
    }

    cout << result;

    return 0;
}