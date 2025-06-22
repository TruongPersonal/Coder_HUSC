#include <iostream>
using namespace std;

long long MOD = 1000000007;

long long sum(long long a, long long b) {
    return (a % MOD + b % MOD) % MOD;
}

long long difference(long long a, long long b) {
    return (a % MOD - b % MOD + MOD) % MOD;
}

long long product(long long a, long long b) {
    return (a % MOD) * (b % MOD) % MOD;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen(".build/Input.inp", "r", stdin);
    freopen(".build/Output.out", "w", stdout);
    #endif
    
    long long l, r;
    cin >> l >> r;
    
    long long n, result;
    n = sum(difference(r, l), 1);
    result = sum(product(n, l), product(product(n, n - 1), 500000004));
    cout << result;

    return 0;
}