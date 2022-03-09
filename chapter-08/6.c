#include <limits.h>
#include <stdio.h>

int main() {
    int num, max = INT_MIN;
    printf("네 개의 정수를 입력해주세요.\n");

    for (int i = 0; i < 4; i++) {
        printf("정수 %d : ", (i + 1));
        scanf("%d", &num);
        if (num > max)
            max = num;
    }

    printf("최댓값은 %d입니다.", max);

    return 0;
}