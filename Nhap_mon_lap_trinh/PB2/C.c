#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long sum = a + b, difference = a - b, multiply = a * b, quotient = a / b, modulo = a % b;
    printf("%lld + %lld = %lld\n", a, b, sum);
    printf("%lld - %lld = %lld\n", a, b, difference);
    printf("%lld * %lld = %lld\n", a, b, multiply);
    printf("%lld / %lld = %lld\n", a, b, quotient);
    printf("%lld %% %lld = %lld\n", a, b, modulo);

    return 0;
}