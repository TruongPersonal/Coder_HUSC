#include <iostream>
#include <iomanip>
using namespace std;

double PI = 3.141592653;

int main() {
    double r;
    cin >> r;

    double area = PI * r * r;
    cout << fixed << setprecision(9) << area;

    return 0;
}