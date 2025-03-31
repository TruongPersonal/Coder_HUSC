#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);

    double fx =  sin(x) + sqrt(log(3*x) / log(4)) + ceil(3*exp(x));
    printf("%.6lf", fx);

    return 0;
}