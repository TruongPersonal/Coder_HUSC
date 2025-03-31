#include <stdio.h>

double PI = 3.141592653;

int main() {
    double r;
    scanf("%lf", &r);

    double area = PI * r * r;
    printf("%.9lf", area);

    return 0;
}