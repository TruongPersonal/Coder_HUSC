#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a + b > c && a + c > b && b + c > a) {
        double P = (a + b + c) / 2;
        double S = sqrt(P * (P - a) * (P - b) * (P - c));
        printf("%.4lf", S);
    }
    else {
        printf("No Solution");
    }

    return 0;
}