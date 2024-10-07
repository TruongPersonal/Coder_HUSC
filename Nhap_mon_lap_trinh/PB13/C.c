#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);

    double C;
    if (x > 0) {
        C = pow(x, 2) + sqrt(x) + 1;
    }
    else {
        if (x == -3) {
            printf("Div by zero");
            return 0;
        }
        C = (pow(x, 3) + 2*x + 1) / (x + 3);
    }
    printf("%.6lf", C);
    
    return 0;
}