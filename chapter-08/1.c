#include <stdio.h>

int main()
{
    int input_num;
    printf("정수를 입력해주세요 : ");
    scanf("%d", &input_num);

    if (input_num%10 == 0) return 0;

    printf("그 수는 10의 배수가 아닙니다");

    return 0;
}