#include <stdio.h>

int main() {
    int num = 0;
    int *pnum = &num;

    printf("입력 : ");
    scanf("%d", &num);

    printf("%p  %d", pnum, *pnum);

    return 0;
}