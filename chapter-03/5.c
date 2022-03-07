#include <stdio.h>

int main()
{
    int num1, num2;
    printf("정수 1 : ");
    scanf("%d", &num1);
    printf("정수 2 : ");
    scanf("%d", &num2);

    int result = num1 * num2;
    printf("이들의 곱은 %d입니다.", result);

    return 0;
}