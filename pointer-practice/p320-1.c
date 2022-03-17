#include <stdio.h>

void Swap(int *num1, int *num2, int *num3) {
    int temp = *num3;
    *num2 = *num1;
    *num3 = *num2;
    *num1 = temp;
}

int main()
{
    int num1 = 10, num2 = 20, num3 = 30;

    printf("num1, num2, num3 : %d %d %d\n", num1, num2 ,num3);

    Swap(&num1, &num2, &num3);

    printf("num1, num2, num3 : %d %d %d\n", num1, num2 ,num3);
    return 0;
}