#include <stdio.h>

int main() {
    for (int dan = 1; dan <= 9; dan++) {
        printf("[%d단]\n", dan);
        for (int i = 1; i <= 9; i++) {
            printf("%d * %d = %2d\n", dan, i, dan * i);
        }
        printf("\n");
    }

    return 0;
}