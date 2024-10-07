#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double accuracy = pow(10, -9);
    double a, b, c;
    cin >> a >> b >> c;

    if (fabs(a - b) < accuracy && fabs(a - c) < accuracy) {
        cout << "Tam giac deu";
    }
    else if (fabs(a - b) < accuracy || fabs(a - c) < accuracy || fabs(b - c) < accuracy) {
        cout << "Tam giac can";
    }
    else {
        cout << "Tam giac thuong";
    }

    return 0;
}