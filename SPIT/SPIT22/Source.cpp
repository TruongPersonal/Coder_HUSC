#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("Input.inp", "r", stdin);
        freopen("Output.out", "w", stdout);
    #endif
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum;

    return 0;
}