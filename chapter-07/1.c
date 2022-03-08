#include <stdio.h>

int main() {
    int input_num;
    printf("양의 정수를 입력해주세요 : ");
    scanf("%d", &input_num);

    int i = 0, result = 0;
    do {
        i++;
        result += i;

    } while (i < input_num);

    printf("1부터 %d까지 더한 값은 %d입니다.", input_num, result);

    return 0;
}