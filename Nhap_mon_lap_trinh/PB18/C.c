#include <stdio.h>

int main() {
    long long n, p;
    scanf("%lld %lld", &n, &p);
    long long sitsTotal = p * 4;
    long long carriage = n / sitsTotal;
    if (n % sitsTotal) {
        carriage++;
    }
    printf("%lld", carriage);

    return 0;
}