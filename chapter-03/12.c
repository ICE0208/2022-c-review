#include <stdio.h>

int GetAvg(int sum, int count);
int GetSum(int a, int b, int c);

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int sum = GetSum(a, b, c);
    int avg = GetAvg(sum, 3);

    printf("합계 : %d\n평균 : %d", sum, avg);

    return 0;
}

int GetAvg(int sum, int count) { return sum / count; }

int GetSum(int a, int b, int c) { return a + b + c; }