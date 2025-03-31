#include <stdio.h>
#include <math.h>

int is_prime(int number) {
    for (int i = 2; i <= sqrt(number); ++i) {
        if (!(number % i)) {
            return 0;
        }
    }
    return number > 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int count = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if (is_prime(a[i]) == 1) {
            ++count;
        }
    }
    printf("%d", count);

    return 0;
}