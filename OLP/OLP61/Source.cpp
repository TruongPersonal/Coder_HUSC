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
    // #ifndef ONLINE_JUDGE
    // freopen(".build/Input.inp", "r", stdin);
    // freopen(".build/Output.out", "w", stdout);
    // #endif

    int T;
    cin >> T;

    while (T--)
    {
        ll n;
        cin >> n;
        ll ans_one = multiply(multiply(n, add(multiply(n, n), 1)), inv);
        ll z = subtract(n, 1);
        ll ans_two = add(multiply(n, n), multiply(multiply(multiply(z, z), n), inv));
        ll sum_of_two_diagonals = add(ans_one, ans_two);
        if (n % 2)
        {
            ll mid = add(1, multiply(multiply(z, inv), add(n, 1)));
            sum_of_two_diagonals = subtract(sum_of_two_diagonals, mid);
        }
        cout << sum_of_two_diagonals << "\n";
    }

    return 0;
}