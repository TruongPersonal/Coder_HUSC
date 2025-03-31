#include <stdio.h>

int main() {
    long long x;
    scanf("%lld", &x);

    long long A;
    if (x >= 10) {
        A = x*x*x + 5*x;
    }
    else {
        A = x*x - 2*x + 4;
    }
    printf("%lld", A);

    return 0;
}