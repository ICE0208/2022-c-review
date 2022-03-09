#include <stdio.h>

double GetCircleWeight(int radius);

int main() {
    int input_radius;
    double weight;

    printf("입력 : ");
    scanf("%d", &input_radius);
    weight = GetCircleWeight(input_radius);

    printf("넓이 : %.2lf", weight);

    return 0;
}

double GetCircleWeight(int radius) {
    const double PI = 3.14;
    return radius * radius * PI;
}