#include <stdio.h>

int GetAbs(int n1, int n2);

int main() {
    int num1, num2, result;
    int *pnum1 = &num1, *pnum2 = &num2, *presult = &result;

    printf("입력 : ");
    scanf("%d %d", pnum1, pnum2);

    *presult = GetAbs(*pnum1, *pnum2);
    printf("%d", *presult);

    return 0;
}

int GetAbs(int n1, int n2) {
    int result = n1 - n2;
    if (result < 0)
        return -result;
    return result;
}