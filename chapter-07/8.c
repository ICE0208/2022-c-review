#include <stdio.h>

int main() {
    printf("%2s|", "");

    for (int i = 0; i < 9; i++) {
        printf("%4d", i + 1);
    }

    printf("\n----------------------------------------\n");

    for (int dan = 1; dan <= 9; dan++) {
        printf("%-2d|", dan);
        for (int i = 1; i <= 9; i++) {
            printf("%4d", dan * i);
        }
        printf("\n");
    }

    return 0;
}