#include <iostream>
#include <string.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif

    int n;
    cin >> n;

    string layers[] = {
        "1s", "2s", "2p", "3s", "3p", "4s", "3d", "4p", "4d", "4f", 
        "5s", "5p", "5d", "5f", "6s", "6p", "6d", "6f", "7s", "7p", "7d", "7f"
    };
    int maxElectrons[] = {
        2, 2, 6, 2, 6, 2, 10, 6, 10, 14, 
        2, 6, 10, 14, 2, 6, 10, 14, 2, 6, 10, 14
    };

    for (int i = 0; i < 22; i++) {
        if (n > 0) {
            int electronsFill = min(n, maxElectrons[i]);
            cout << layers[i] << electronsFill << "\n";
            n -= electronsFill;
        }
    }

    return 0;
}