#include <stdio.h>

void toBinary(int number, int binaryNumber[], int *length) {
    int tempNumber = number;
    while (tempNumber != 0) {
        tempNumber /= 2;
        (*length)++;
    }
    for (int i = *length - 1; i >= 0; i--) {
        binaryNumber[i] = number % 2;
        number /= 2;
    }
}

int isSymmetryBinary(int number) {
    int length = 0;
    int binaryNumber[64] = {0};
    toBinary(number, binaryNumber, &length);
    for (int i = 0; i < length / 2; i++) {
        if (binaryNumber[i] != binaryNumber[length - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int number;
    scanf("%d", &number);
    if (number % 2 != 0 && isSymmetryBinary(number)) {
        printf("YES");
    }
    else {
        printf("NO");
    }
}