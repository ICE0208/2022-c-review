#include <stdio.h>

double GetStandardWeight(double height);

int main() {
    double height;
    printf("신장을 입력해주세요 : ");
    scanf("%lf", &height);

    double standard_weight = GetStandardWeight(height);
    printf("표준체중은 %.1f입니다.", standard_weight);

        return 0;
}

double GetStandardWeight(double height) {
    double result = (height - 100) * 0.9;
    return result;
}