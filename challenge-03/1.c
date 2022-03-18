#include <stdio.h>

void TurnArr(int (*arr)[4]) {
    int temp[4][4] = {0};

    printf(" - 변경 전 -\n");
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            temp[i][j] = arr[3-j][i];
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n - 변경 후 -\n");
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            arr[i][j] = temp[i][j];
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int arr[4][4] = {
        { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }, { 13, 14, 15, 16 }
    };

    TurnArr(arr);
    TurnArr(arr);
    TurnArr(arr);

    return 0;
}