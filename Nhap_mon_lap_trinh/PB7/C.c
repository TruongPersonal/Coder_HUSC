#include <stdio.h>
#include <math.h>

int main() {
    float x, k;
    scanf("%f %f", &x, &k);

    float c = sqrt(fabs(x));
    float a = pow(c, 4) + pow(k, 3);
    double fx = pow(log10(a), 3) + pow(cos(x), 5);

    printf("%.2lf", fx);

    return 0;
}