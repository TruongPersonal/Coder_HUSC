#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen(".build/Input.inp", "r", stdin);
    freopen(".build/Output.out", "w", stdout);
    #endif

    int n;
    cin >> n;
    cout << n * (n - 1);

    return 0;
}
