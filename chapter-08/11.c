#include <stdio.h>

int main() {
    int input_num_1, input_num_2;
    printf("두 개의 정수를 입력해주세요.\n");
    printf("정수 A : ");
    scanf("%d", &input_num_1);
    printf("정수 B : ");
    scanf("%d", &input_num_2);

    if (input_num_1 - input_num_2 >= 11 || input_num_1 - input_num_2 <= -11) {
        printf("이들의 차는 11 이상입니다.");
        return 0;
    }

    printf("이들의 차는 10 이하입니다.");

    return 0;
}