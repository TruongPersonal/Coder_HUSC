#include <stdio.h>

int main() {
    long long n, p;
    scanf("%lld %lld", &n, &p);
    long long sits_total = p * 4;
    long long carriage = n / sits_total;
    if (n % sits_total) {
        carriage++;
    }
    printf("%lld", carriage);

    return 0;
}