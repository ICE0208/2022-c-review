#include <stdio.h>

int main()
{
    double max = -1.0, min = 1000.0;
    double stu[5];

    for (int i=0; i<5; i++) {
        printf("%d번 : ", i+1);
        scanf(" %lf", &stu[i]);
        if (stu[i] > max) max = stu[i];
        if (stu[i] < min) min = stu[i];
    }

    printf("가장 무거운 사람의 체중 : %.1lf\n", max);
    printf("가장 가벼운 사람의 체중 : %.1lf", min);

    return 0;
}