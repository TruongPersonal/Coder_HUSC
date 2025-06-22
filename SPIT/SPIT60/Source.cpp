#include <iostream>
#include <string.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
#endif

    int n;
    cin >> n;
    string P, T, S;
    while (n--)
    {
        cin >> P;
        cin >> T;
        for (long unsigned int i = 0; i < T.length(); ++i)
        {
            bool is_in = false;
            for (long unsigned int j = 0; j < P.length(); ++j)
            {
                if (T[i] == P[j])
                {
                    is_in = true;
                    break;
                }
            }
            if (is_in == true)
            {
                S += T[i];
            }
        }
        cout << S << "\n";
        S = "";
        P = "";
        T = "";
    }

    return 0;
}
