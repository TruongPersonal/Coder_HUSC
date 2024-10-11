#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif

    int a, b, c, S;
    cin >> a >> b >> c >> S;

    double sum = a + b + c;
    if (sum) {
        cout << fixed << setprecision(6) << S * a / sum << ' ' << S * b / sum << ' ' << S * c / sum;
    }
    else {
        cout << fixed << setprecision(6) << 0.0 << ' ' << 0.0 <<  ' ' << 0.0;
    }

    return 0;
}