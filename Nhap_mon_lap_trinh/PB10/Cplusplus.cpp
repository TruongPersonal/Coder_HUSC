#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double pi = 3.14159;

int main() {
    double a, b, alpha;
    cin >> a >> b >> alpha;
    
    alpha = alpha * pi / 180;
    double area = 0.5 * a * b * sin(alpha);
    cout << fixed << setprecision(2) << area;

    return 0;
}