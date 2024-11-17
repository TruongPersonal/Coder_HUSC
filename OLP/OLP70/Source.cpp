#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string pretty(string S)
{
    string result = "";
    for (long unsigned int i = 0; i < S.size(); i++)
    {
        if (isalpha(S[i]))
            result += tolower(S[i]);
    }
    return result;
}
string isPalindrome(string S)
{
    for (long unsigned int i = 0; i < S.size(); i++)
        if (S[i] != S[S.size() - i - 1])
            return "No";
    return "Yes";
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen(".build/Input.inp", "r", stdin);
    // freopen(".build/Output.out", "w", stdout);
    // #endif

    while (true)
    {
        string S;
        getline(cin, S);
        if (S.empty())
            break;

        cout << isPalindrome(pretty(S)) << endl;
    }

    return 0;
}