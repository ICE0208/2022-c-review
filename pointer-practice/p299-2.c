#include <stdio.h>

int main()
{
    // 문제 2
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    for (int i=0; i<5; i++) {
        *(ptr+i) += 2;
    }

    for (int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}