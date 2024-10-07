#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    
    if (a + b > c && a + c > b && b + c > a) {
        double P = (a + b + c) / 2;
        double S = sqrt(P * (P - a) * (P - b) * (P - c));
        cout << fixed << setprecision(4) << S;
    }
    else {
        printf("No Solution");
    }

    return 0;
}