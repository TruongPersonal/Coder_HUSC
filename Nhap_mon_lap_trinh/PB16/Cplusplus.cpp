#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << fixed << setprecision(4) << x1 << "\n";
        cout << fixed << setprecision(4) << x2;
    }
    else if (delta == 0)
    {
        double x = -b / (2 * a);
        cout << fixed << setprecision(4) << x;
    }
    else
    {
        cout << "No Solution";
    }

    return 0;
}