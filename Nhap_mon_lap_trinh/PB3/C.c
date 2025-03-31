#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long X1 = a * b, X2 = c * d, X = X1 - X2;
    printf("Difference = %lld", X);

    return 0;
}