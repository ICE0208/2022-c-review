#include <stdio.h>

int main() {
    int vc[5];

    for (int i = 0; i < 5; i++) {
        vc[i] = i;
    }

    for (int i = 0; i < 5; i++) {
        printf("vc[%d] = %d\n", i, vc[i]);
    }

    return 0;
}