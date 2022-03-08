#include <stdio.h>

int main()
{
    int input_num;
    printf("정수를 입력해주세요 : ");
    scanf("%d", &input_num);

    int i = 1;
    while (i < input_num+1) {
        printf("%d", i%10);
        i++;
    }

    return 0;
}