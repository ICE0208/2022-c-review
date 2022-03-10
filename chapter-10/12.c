#include <stdio.h>

int main() {
    int va[5] = {10, 20, 30, 40, 50};
    int vb[5] = {99, 88, 77, 66, 55};

    for (int i = 0; i < 5; i++) {

        printf("va[%d] = %d   vb[%d] = %d   합 = %d\n", i, va[i], 4 - i,
               vb[4 - i], va[i] + vb[4 - i]);
    }

    return 0;
}