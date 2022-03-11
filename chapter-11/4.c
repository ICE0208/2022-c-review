#include <stdio.h>

int main() {
    int num;
    int *pnum = &num;

    printf("입력 : ");
    scanf("%d", pnum);

    for (int i = 0; i < *pnum; i++) {
        printf("*");
    }

    return 0;
}