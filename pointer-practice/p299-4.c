#include <stdio.h>

int main() {
    // 문제 4
    int arr[6] = { 1, 2, 3, 4, 5, 6 };
    int arr_len = sizeof(arr) / sizeof(int);

    int *ptr_f = arr;
    int *ptr_b = &arr[arr_len - 1];

    printf("Before : ");
    for (int i = 0; i < arr_len; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nAfter : ");
    for (int i = 0; i < arr_len / 2; i++) {
        int temp = *ptr_f;
        *ptr_f++ = *ptr_b;
        *ptr_b-- = temp;
    }
    for (int i = 0; i < arr_len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}