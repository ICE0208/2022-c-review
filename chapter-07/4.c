#include <stdio.h>

int main()
{
    int input_num;
    printf("양의 정수를 입력해주세요 : ");
    scanf("%d", &input_num);

    int i = 0;
    while (i < input_num) {
        printf("*\n");
        i++;
    }

    return 0;
}