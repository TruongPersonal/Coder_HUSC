#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    if (a == 0) {
        if (b != 0) {
            cout << "No Solution";
        }
        else {
            cout << "Many Solutions";
        }
    }
    else {
        double x = (double)-b/a;
        cout << fixed << setprecision(2) << x;
    }

    return 0;
}