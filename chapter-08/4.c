#include <stdio.h>

int main() {
    int input_num_1, input_num_2;
    printf("두 개의 정수를 입력해주세요.\n");
    printf("정수 A : ");
    scanf("%d", &input_num_1);
    printf("정수 B : ");
    scanf("%d", &input_num_2);

    if (input_num_1 > input_num_2) {
        printf("A는 B보다 큽니다.");
        return 0;
    }
    if (input_num_1 < input_num_2) {
        printf("A는 B보다 작습니다.");
        return 0;
    }
    printf("A와 B는 같습니다.");

    return 0;
}