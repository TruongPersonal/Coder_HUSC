#include <iostream>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen(".build/Input.inp", "r", stdin);
    // freopen(".build/Output.out", "w", stdout);
    // #endif

    long long N, A, B;
    cin >> N >> A >> B;
    if (A > N / 2 || B > N / 2) {
        cout << "Waiting for OITC 20 Anniversary :(";
    }
    else {
        cout << "Celebrating !!!";
    }

    return 0;
}