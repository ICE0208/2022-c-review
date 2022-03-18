// 문제 18-1 문제 3

#include <stdio.h>

void ComplexFuncOne(int **p_arr1, int *(*p_arr2)[2]) {
    printf("%d ", *p_arr1[1]);
    printf("%d\n", *p_arr2[1][1]);
}

void ComplexFuncTwo(int ***p_arr3, int ***(*p_arr4)[2]) {
    printf("%d ", **p_arr3[1]);
    printf("%d\n", ***p_arr4[1][1]);
}

int main() {
    int a = 1, b = 2, c = 3, d = 4;

    int *arr1[2] = { &a, &b }; // ! int* 형 변수로 이뤄진 1차원 배열
    int *arr2[2][2] = { { &a, &b }, { &c, &d } }; // ! int* 형 변수로 이뤄진, 가로길이가 5인 2차원 배열
    int **arr3[2] = { &arr1[0], &arr1[1] }; // ! int** 형 변수로 이뤄진, 1차원 배열
    int ***arr4[2][2] = { { &arr3[0], &arr3[1] }, { &arr3[0], &arr3[1] } }; // ! int*** 형 변수로 이뤄진, 가로길이가 5인 2차원 배열

    ComplexFuncOne(arr1, arr2);
    ComplexFuncTwo(arr3, arr4);

    return 0;
}