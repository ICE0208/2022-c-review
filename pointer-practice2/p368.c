// 문제 17-1

#include <limits.h>
#include <stdio.h>

void MaxAndMin(int **maxPtr, int **minPtr, int *arr, int len) {
    int max = INT_MIN, min = INT_MAX;

    for (int i = 0; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
            *maxPtr = &arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
            *minPtr = &arr[i];
        }
    }
}

int main() {
    int *maxPtr = 0;
    int *minPtr = 0;
    int arr[5] = { 1, 2, 3, 4, 5 };

    MaxAndMin(&maxPtr, &minPtr, arr, sizeof(arr) / sizeof(int));
    printf("Max : %d\nMin : %d", *maxPtr, *minPtr);

    return 0;
}