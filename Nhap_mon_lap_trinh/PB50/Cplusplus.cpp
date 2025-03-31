#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x;
    cin >> x;

    double S = 1;
    double term = 1;
    int i = 1;

    while (true)
    {
        term *= x / i;
        if (term < 1e-9)
        {
            break;
        }
        S += term;
        ++i;
    }
    cout << fixed << setprecision(4) << S;

    return 0;
}