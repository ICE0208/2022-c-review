#include <stdio.h>

int main()
{
    int input, result = 0;

    printf("정수를 입력해주세요 : ");
    scanf("%d", &input);
    result = input + 10;
    printf("이 값에 10을 더하면 %d입니다.", result);

    return 0;
}