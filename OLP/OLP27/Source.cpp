#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif

    int n;
    cin >> n;
    cout << n * (n - 1);

    return 0;
}
