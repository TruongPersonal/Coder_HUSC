#include <iostream>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen(".build/Input.inp", "r", stdin);
    // freopen(".build/Output.out", "w", stdout);
    // #endif

    long long u, v;
    cin >> u >> v;
    if (v == 2 * u || v == 2 * u + 1 || u == 2 * v || u == 2 * v + 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}