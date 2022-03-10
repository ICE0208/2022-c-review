#include <stdio.h>
#define NUMBER 5

int main()
{
    int arr[NUMBER], sum = 0;

    for (int i=0; i<NUMBER; i++) {
        printf("%d번 : ", i+1);
        scanf(" %d", &arr[i]);
        sum += arr[i];
    }

    double avg = (double)sum / NUMBER;

    printf("평균신장 : %.1lf", avg);

    return 0;
}