#include <stdio.h>

int main() {
    int arr[3] = { 15, 25, 35 };
    int *ptr = arr;

    printf("%d %d \n", arr[0], ptr[0]);
    printf("%d %d \n", arr[1], ptr[1]);
    printf("%d %d \n", arr[2], ptr[2]);

    // 포인터 변수도 배열처럼 값에 접근할 수 있다.
    // arr[i] == *(arr+i)

    return 0;
}