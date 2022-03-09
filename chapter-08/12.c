#include <stdio.h>

int main() {
    int input_num;
    printf("정수를 입력해주세요 : ");
    scanf("%d", &input_num);

    switch (input_num % 2) {
    case 0:
        printf("이 수는 짝수입니다.");
        break;

    default:
        printf("이 수는 홀수입니다.");
    }

    return 0;
}