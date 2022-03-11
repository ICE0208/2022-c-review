#include <stdio.h>

int main() {
    int a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

    int b[3][2] = { { 1, 5 }, { 5, 3 }, { 8, 1 } };

    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            int temp = 0;
            for (int h=0; h<3; h++) {
                temp += a[i][h] * b[h][j];
            }
            printf("%3d", temp);
        }
        printf("\n");
    }

    return 0;
}