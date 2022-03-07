#include <stdio.h>

int main()
{
    printf("실수를 입력해주세요 : ");
    double num;
    scanf("%lf", &num);

    printf("당신은 %.6f라고 입력했군요.",num);

    return 0;
}