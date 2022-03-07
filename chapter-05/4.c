#include <stdio.h>

int GetSum(int nums[], int size);
double GetAvg();

int main()
{
    int nums[3];
    int i;
    for (i=0; i< sizeof(nums) / sizeof(int); i++) {
        printf("정수 %c : ", i+65);
        scanf("%d", &nums[i]);
    }

    int size = sizeof(nums) / sizeof(int);
    int sum = GetSum(nums, size);
    double avg = GetAvg(sum, size);

    printf("합계는 %d이고 평균은 %.1f입니다.", sum, avg);
    

    return 0;
}

int GetSum(int nums[], int size) {
    int i, sum=0;
    for (i=0; i< size; i++) {
        sum += nums[i];
    }
    return sum;
}
double GetAvg(int sum, int size) {
    return (double)sum / (double)size;
}