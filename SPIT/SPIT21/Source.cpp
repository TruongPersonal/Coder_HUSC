#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("Input.inp", "r", stdin);
        freopen("Output.out", "w", stdout);
    #endif
    int h, s;
    cin >> h >> s;

    string result[3][3] = {
        {"0", "Hazzu", "Sora"},
        {"Sora", "0", "Hazzu"},
        {"Hazzu", "Sora", "0"}
    };
    cout << result[h - 1][s - 1];

    return 0;
}