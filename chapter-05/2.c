#include <stdio.h>

int main() {
    const double VALUE = 0.1;
    double num;
    printf("실수를 입력해주세요 : ");
    scanf("%lf", &num);
    printf("%.1f를 더하면 %.6f입니다.\n", VALUE, num + VALUE);
    printf("%.1f를 빼면 %.6f입니다.\n", VALUE, num - VALUE);
    printf("%.1f를 곱하면%.6f입니다.\n", VALUE, num * VALUE);
    printf("%.1f를 나누면 %.6f입니다.\n", VALUE, num / VALUE);

    return 0;
}