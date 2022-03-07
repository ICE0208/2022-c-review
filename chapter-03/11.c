#include <stdio.h>

int GetMinusAvg(int a, int b);

int main() { 
    int a, b;
    printf("정수 A : ");
    scanf("%d", &a);
    printf("정수 B : ");
    scanf("%d", &b);

    int result = GetMinusAvg(a, b);

    printf("평균값의 부호를 반전한 값은 %d입니다.", result);
    
    
    return 0; 
}

int GetMinusAvg(int a, int b) {
    int avg = (a + b) / 2;
    return -avg;
}