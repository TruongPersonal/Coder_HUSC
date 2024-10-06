#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    long long sum = a + b, difference = a - b, multiply = a * b, quotient = a / b, modulo = a % b;
    printf("%d + %d = %lld\n", a, b, sum);
    printf("%d - %d = %lld\n", a, b, difference);
    printf("%d * %d = %lld\n", a, b, multiply);
    printf("%d / %d = %lld\n", a, b, quotient);
    printf("%d %% %d = %lld\n", a, b, modulo);

    return 0;
}