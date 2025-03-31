#include <stdio.h>

int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a == b && b == c) {
        printf("Tam giac deu");
    }
    else if (a == b || b == c || c == a) {
        printf("Tam giac can");
    }
    else {
        printf("Tam giac thuong");
    }

    return 0;
}