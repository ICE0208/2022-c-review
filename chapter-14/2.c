#include <stdio.h>

int main() {
    int a[][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

    int b[][3] = { { 6, 3, 4 }, { 5, 1, 2 } };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}