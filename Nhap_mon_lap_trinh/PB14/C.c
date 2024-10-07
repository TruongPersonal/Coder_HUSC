#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a == 0) {
        if (b != 0) {
            printf("No Solution");
        }
        else {
            printf("Many Solutions");
        }
    }
    else {
        double x = (double)-b/a;
        printf("%.2lf", x);
    }

    return 0;
}