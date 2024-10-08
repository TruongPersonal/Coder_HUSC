#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif
    long long n;
    cin >> n;
    long long X = pow(2, (long long)log2(n));
    cout << X;

    return 0;
}