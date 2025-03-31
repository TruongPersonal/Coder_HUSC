#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
    double x;
    cin >> x;
    
    long double fx = sin(x) + sqrt(log(3 * x) / log(4)) + ceil(3 * exp(x));
    
    cout << fixed << setprecision(6) << fx;
    
    return 0;
}