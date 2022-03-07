#include <stdio.h>

int main() {
    int a, b;
    printf("정수 A : ");
    scanf("%d", &a);
    printf("정수 B : ");
    scanf("%d", &b);

    printf("이들의 합은 %d이고, 곱은 %d입니다.", (a + b), (a * b));

    return 0;
}