#include <stdio.h>

int main() {
    int dan = 1, i = 1;

    while (dan <= 9) {
        if (i == 1)
            printf("[%d단]\n", dan);

        printf("%d * %d = %2d\n", dan, i, dan * i);

        if (i == 9) {
            dan++;
            i = 1;
            printf("\n");
            continue;
        }

        i++;
    }

    return 0;
}