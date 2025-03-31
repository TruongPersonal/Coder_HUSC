#include <stdio.h>

int main() {
    long long m, n;
    scanf("%lld %lld", &m, &n);

    if (!(m%n) || !(n%m)) {
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}