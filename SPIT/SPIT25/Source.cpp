#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen(".build/Input.inp", "r", stdin);
    freopen(".build/Output.out", "w", stdout);
#endif

    int n, k;
    cin >> n;
    cin >> k;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < k; i++) {
        a[i] = abs(a[i]);
    }

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    cout << sum;

    return 0;
}