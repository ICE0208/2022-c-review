#include <stdio.h>

int main() {
    int a, b;
    printf("두 개의 정수를 입력해주세요.\n");
    printf("정수 A : ");
    scanf("%d", &a);
    printf("정수 B : ");
    scanf("%d", &b);

    double result = (double)a / (double)b * 100;
    printf("A의 값은 B의 %.6f%%입니다.", result);
    

    return 0;
}