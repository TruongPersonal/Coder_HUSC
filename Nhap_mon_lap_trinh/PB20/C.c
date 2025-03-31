#include <stdio.h>
#include <math.h>

int main() {
    double accuracy = pow(10, -9);
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (fabs(a - b) < accuracy && fabs(a - c) < accuracy) {
        printf("Tam giac deu");
    }
    else if (fabs(a - b) < accuracy || fabs(a - c) < accuracy || fabs(b - c) < accuracy) {
        printf("Tam giac can");
    }
    else {
        printf("Tam giac thuong");
    }

    return 0;
}