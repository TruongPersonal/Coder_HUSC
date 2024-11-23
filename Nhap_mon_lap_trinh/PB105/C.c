#include <stdio.h>

int main() {
    while (1) {
        char text[150];
        int size = 0;

        while (1) {
            char character;
            scanf("%c", &character);

            if (character == '\n') {
                break;
            }

            text[size] = character;
            size++;
        }
        if (size == 0) {
            break;
        }

        int count_lower_character = 0;
        int count_upper_character = 0;
        for (int i = 0; i < size; i++) {
            if (text[i] >= 'A' && text[i] <= 'Z') {
                ++count_upper_character;
            } else if (text[i] >= 'a' && text[i] <= 'z') {
                ++count_lower_character;
            }
        }

        if (count_upper_character > count_lower_character) {
            for (int i = 0; i < size; i++) {
                if (text[i] >= 'a' && text[i] <= 'z') {
                    text[i] -= 32;
                }
            }
        } else {
            for (int i = 0; i < size; i++) {
                if (text[i] >= 'A' && text[i] <= 'Z') {
                    text[i] += 32;
                }
            }
        }

        for (int i = 0; i < size; i++) {
            printf("%c", text[i]);
        }
        printf("\n");
    }

    return 0;
}