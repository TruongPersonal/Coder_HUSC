#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int median = a[n / 2];

    int min = 0;
    for (int i = 0; i < n; i++) {
        min += abs(a[i] - median);
    }
    cout << min;

    return 0;
}