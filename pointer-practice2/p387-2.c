// 18-1 문제2

#include <stdio.h>

void SimpleFuncOne(int *parr1, int *parr2) {
    printf("%d %d\n", parr1[1], parr2[1]);
}

void SimpleFuncTwo(int (*parr3)[2], int (*parr4)[2]) {
    printf("%d %d", parr3[1][1], parr4[1][1]);
}

int main()
{
    int arr1[2] = {1, 2};
    int arr2[2] = {3, 4};
    int arr3[2][2] = {{5, 6}, {7, 8}};
    int arr4[2][2] = {{9, 10}, {11, 12}};

    SimpleFuncOne(arr1, arr2);
    SimpleFuncTwo(arr3, arr4);

    return 0;
}