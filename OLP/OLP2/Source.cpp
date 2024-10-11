#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return GCD(b, a % b);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif

    int n, m;
    cin >> n >> m;

    if (n >= m && !(n % m))
    {
        cout << 0;
    }
    else
    {
        cout << m - GCD(n, m);
    }

    return 0;
}