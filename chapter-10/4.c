#include <stdio.h>

int main() {
    int score[5];
    int sum = 0;
    double avg;

    for (int i = 0; i < 5; i++) {
        printf("%d번 : ", i + 1);
        scanf("%d", &score[i]);
        sum += score[i];
    }

    avg = sum / 5.0;

    printf("합계점 : %d\n평균점 : %.1lf", sum, avg);

    return 0;
}