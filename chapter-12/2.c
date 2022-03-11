#include <stdio.h>

int main() {
    double arr[5];
    double *parr = arr;

    printf("입력하세요.\n");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &parr[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%.1lf ", parr[i]);
    }

    return 0;
}