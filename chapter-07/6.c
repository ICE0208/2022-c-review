#include <stdio.h>

int main() {
    int start, end, gap;
    double weight;
    printf("몇 cm부터 : ");
    scanf("%d", &start);
    printf("몇 cm까지 : ");
    scanf("%d", &end);
    printf("몇 cm마다 : ");
    scanf("%d", &gap);

    for (int height = start; height <= end; height += gap) {
        weight = (double)(height - 100) * 0.9;
        printf("%dcm %10.2lfkg\n", height, weight);
    }

    return 0;
}