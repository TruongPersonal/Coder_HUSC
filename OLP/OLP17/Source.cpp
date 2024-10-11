#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif

    long long A, B, K;
    cin >> A >> B >> K;
    
    if (K >= A) {
        K -= A;
        A = 0;
        if (B >= K) {
            B -= K;
        }
        else {
            B = 0;
        }
    }
    else {
        A -= K;
    }
    cout << A << ' ' << B;

    return 0;
}