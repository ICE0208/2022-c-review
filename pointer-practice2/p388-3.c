// 18-1 문제 5

#include <stdio.h>

int main() {
    int arr[2][2][2] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    printf("%d \n", arr[1][0][1]);
    printf("%d \n", *(*(*(arr+1)+0)+1));
    printf("%d \n", *(arr[1][0]+1));
    printf("%d", (*(arr[1]+0))[1]);
    // etc...

    return 0;
}