#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    float x, k;
    cin >> x >> k;

    float c = sqrt(fabs(x));
    float a = pow(c, 4) + pow(k, 3);
    double fx = pow(log10(a), 3) + pow(cos(x), 5);

    cout << fixed << setprecision(2) << fx;

    return 0;
}