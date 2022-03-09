#include <stdio.h>

int main() {
    int a, b, c;
    printf("두 개의 정수를 입력해주세요.\n");
    printf("정수 A : ");
    scanf("%d", &a);
    printf("정수 B : ");
    scanf("%d", &b);
    printf("정수 C : ");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("세 개의 값이 같습니다.");
        return 0;
    }

    if (a == b || b == c || a == c) {
        printf("두 개의 값이 같습니다.");
        return 0;
    }

    printf("세 개의 값이 모두 다릅니다.");

    return 0;
}