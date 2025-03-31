#include <iostream>
#include <string.h>
using namespace std;
#define ll long long

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("Input.inp", "r", stdin);
        freopen("Output.out", "w", stdout);
    #endif
    ll n, w, l, t;
    cin >> n >> w >> l >> t;
    ll start = n + w - l + t / 200;
    cout << start << "\n";
    string result = (start >= 50) ? "Success" : "Failure";
    cout << result;

    return 0;
}