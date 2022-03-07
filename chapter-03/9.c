#include <stdio.h>

int main()
{   
    int a, b;
    // 두 개의 정수값을 scan
    printf("정수 A : ");
    scanf("%d", &a);
    printf("정수 B : ");
    scanf("%d", &b);

    // A / B * 100
    int result = (double)a / (double)b * 100;
    printf("A의 값은 B의 %d%%입니다.", result);

    return 0;
}