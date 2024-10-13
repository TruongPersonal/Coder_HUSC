#include <stdio.h>
#include <math.h>

int isArmstrong(int number) {
    int tempNumber = number;
    int i = 0;
    while (tempNumber != 0) {
        tempNumber /= 10;
        i++;
    }
    tempNumber = number;
    int sumPower = 0;
    while (number != 0) {
        sumPower += pow((number % 10), i);
        number /= 10;
    }
    return tempNumber == sumPower;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (isArmstrong(a[i])) {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}