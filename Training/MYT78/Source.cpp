#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif

    int n;
    cin >> n;

    int a[n];
    int modulo_count[3] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        modulo_count[a[i] % 3]++;
    }

    int count = 0;
    count += (modulo_count[0] * (modulo_count[0] - 1)) / 2;
    count += modulo_count[1] * modulo_count[2];

    cout << count;

    return 0;
}