#include <iostream>
#include <string.h>
using namespace std;
#define ll long long

int main()
{
    #ifndef ONLINE_JUDGE
        freopen(".build/Input.inp", "r", stdin);
        freopen(".build/Output.out", "w", stdout);
    #endif
    ll n, w, l, t;
    cin >> n >> w >> l >> t;
    ll start = n + w - l + t / 200;
    cout << start << "\n";
    string result = (start >= 50) ? "Success" : "Failure";
    cout << result;

    return 0;
}