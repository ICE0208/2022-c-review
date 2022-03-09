#include <limits.h>
#include <stdio.h>

int main() {
    int num, min = INT_MAX;
    printf("세 개의 정수를 입력해주세요.\n");

    for (int i = 0; i < 3; i++) {
        printf("정수 %d : ", (i + 1));
        scanf("%d", &num);
        if (num < min)
            min = num;
    }

    printf("최솟값은 %d입니다.", min);

    return 0;
}