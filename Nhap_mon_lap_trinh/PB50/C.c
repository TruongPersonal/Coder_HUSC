#include <stdio.h>

int main()
{
    double x;
    scanf("%lf", &x);

    double S = 1;
    double term = 1;
    int i = 1;

    while (1)
    {
        term *= x / i;
        if (term < 1e-9)
        {
            break;
        }
        S += term;
        ++i;
    }
    printf("%.4lf", S);

    return 0;
}