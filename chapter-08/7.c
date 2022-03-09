#include <stdio.h>

int main() {
    int input_num_1, input_num_2;
    printf("두 개의 정수를 입력해주세요.\n");
    printf("정수 A : ");
    scanf("%d", &input_num_1);
    printf("정수 B : ");
    scanf("%d", &input_num_2);

    int result = input_num_1 > input_num_2 ? input_num_1 - input_num_2
                                           : input_num_2 - input_num_1;
    printf("이들의 차는 %d입니다.", result);

    return 0;
}