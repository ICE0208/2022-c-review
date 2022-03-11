#include <stdio.h>

int main() {
    int num1, num2;
    int *pnum1 = &num1, *pnum2 = &num2;

    printf("입력 : ");
    scanf("%d %d", pnum1, pnum2);

    printf("%d + %d = %d\n", *pnum1, *pnum2, *pnum1 + *pnum2);
    printf("%d - %d = %d\n", *pnum1, *pnum2, *pnum1 - *pnum2);
    printf("%d * %d = %d\n", *pnum1, *pnum2, *pnum1 * *pnum2);
    printf("%d / %d = %d", *pnum1, *pnum2, *pnum1 / *pnum2);

    return 0;
}