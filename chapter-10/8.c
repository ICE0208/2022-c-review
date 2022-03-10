#include <stdio.h>

int main()
{
    int arr[5], sum = 0;

    for (int i=0; i<5; i++) {
        printf("%d번 : ", i+1);
        scanf(" %d", &arr[i]);
        sum += arr[i];
    }

    double avg = sum / 5.0;

    printf("평균신장 : %.1lf", avg);

    return 0;
}