#include <stdio.h>

int main() {
    int va[5] = {15, 20, 30, 0, 0};
    int vb[5];

    for (int i = 0; i < 5; i++) {
        vb[i] = va[4 - i];
    }

    printf(" va  vb\n--------\n");
    for (int i = 0; i < 5; i++) {
        printf("%3d  %d\n", va[i], vb[i]);
    }

    return 0;
}