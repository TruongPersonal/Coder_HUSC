#include <iostream>
#include <string.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
#endif

    string S;
    cin >> S;
    int n;
    cin >> n;
    string T[n];
    for (int i = 0; i < n; i++)
    {
        cin >> T[i];
    }

    bool check = false;
    for (int i = 0; i < n; i++)
    {
        if (S.find(T[i]) != string::npos)
        {
            check = true;
            break;
        }
    }

    string M;

    if (check == true)
    {
        cout << "YES";

        
    }
    else
    {
        cout << "NO";
    }

    return 0;
}