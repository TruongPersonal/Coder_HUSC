#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    double x;
    cin >> x;

    double C;
    if (x > 0) {
        C = pow(x, 2) + sqrt(x) + 1;
    }
    else {
        if (x == -3) {
            cout << "Div by zero";
            return 0;
        }
        C = (pow(x, 3) + 2*x + 1) / (x + 3);
    }
    cout << fixed << setprecision(6) << C;
    
    return 0;
}