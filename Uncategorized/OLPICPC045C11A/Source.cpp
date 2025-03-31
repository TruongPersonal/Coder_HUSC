#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen(".build/Input.inp", "r", stdin);
    // freopen(".build/Output.out", "w", stdout);
    // #endif

    string s;
    long long result = 0;
    cin >> s;
    for (long unsigned int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A' || s[i] == 'H' || s[i] == 'K' || s[i] == 'N' || s[i] == 'R' || s[i] == 'W')
        {
            result += 2;
        }
        else if (s[i] == 'M')
        {
            result += 3;
        }
        else
        {
            result += 1;
        }
    }
    cout << result;

    return 0;
}