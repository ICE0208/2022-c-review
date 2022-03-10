#include <stdio.h>

int main()
{
    int arr[1000];
    int sum = 0;

    int i=0;
    while (1) {
        printf("No.%d : ", i+1);
        scanf("%d", &arr[i]);
        if (arr[i] == 9999) break;
        sum += arr[i];
        i++;
    }

    double avg = (double)sum / (double)i;

    printf("합계는 %d이고, 평균은 %.2lf입니다.", sum, avg);

    return 0;
}