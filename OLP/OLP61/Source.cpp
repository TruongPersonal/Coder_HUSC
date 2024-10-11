#include <iostream>
using namespace std;

#define ll long long
#define mod 1000000007
#define inv 500000004

ll multiply(ll a, ll b)
{
    return ((a % mod) * (b % mod)) % mod;
}

ll add(ll a, ll b)
{
    return ((a % mod) + (b % mod)) % mod;
}

ll subtract(ll a, ll b)
{
    return ((a % mod) - (b % mod)+mod) % mod;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif

    int T;
    cin >> T;

    while (T--)
    {
        ll n;
        cin >> n;
        ll ans1 = multiply(multiply(n, add(multiply(n, n), 1)), inv);
        ll z = subtract(n, 1);
        ll ans2 = add(multiply(n, n), multiply(multiply(multiply(z, z), n), inv));
        ll sumoftwodiagonals = add(ans1, ans2);
        if (n % 2)
        {
            ll mid = add(1, multiply(multiply(z, inv), add(n, 1)));
            sumoftwodiagonals = subtract(sumoftwodiagonals, mid);
        }
        cout << sumoftwodiagonals << "\n";
    }

    return 0;
}