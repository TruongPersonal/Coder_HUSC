#include <stdio.h>
#include <math.h>

double pi = 3.14159;

int main() {
    double a, b, alpha;
    scanf("%lf %lf %lf", &a, &b, &alpha);
    
    alpha = alpha * pi / 180;
    double area = 0.5 * a * b * sin(alpha);
    printf("%.2lf", area);

    return 0;
}