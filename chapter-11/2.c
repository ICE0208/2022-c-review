#include <stdio.h>

int main() {
    int num;
    int *pnum = &num;

    printf("입력 : ");
    scanf("%d", pnum);

    printf("%d...%d", *pnum / 10, *pnum % 10);

    return 0;
}