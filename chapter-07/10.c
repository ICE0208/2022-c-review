#include <stdio.h>

int main() {
    int dan = 1, i = 1;

    do {
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
    } while (dan <= 9);

        return 0;
}