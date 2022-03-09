#include <stdio.h>

// 345 678 91011 1212

int main() {
    int input_num;
    printf("정수를 입력해주세요 : ");
    scanf("%d", &input_num);

    if (input_num < 1 || input_num > 12) {
        printf("잘못된 값을 입력하셨습니다.");
        return 0;
    }

    switch (input_num / 3) {
    case 0:
        printf("겨울입니다.");
        break;
    case 1:
        printf("봄입니다.");
        break;
    case 2:
        printf("여름입니다.");
        break;
    case 3:
        printf("가을입니다.");
        break;
    case 4:
        printf("겨울입니다.");
        break;
    }

    return 0;
}