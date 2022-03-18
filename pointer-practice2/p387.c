// p387 문제 18-1

#include <stdio.h>

int main()
{
    int n1 = 1, n2 = 2, n3 = 3, n4 = 4;
    int * arr1[3] = {&n1, &n2, &n3};
    
    int **parr1 = arr1;

    printf("%d %d\n", *arr1[1], *parr1[1]);

    int *arr2[2][2] = {&n1, &n2, &n3, &n4};

    int *(*parr2)[2] = arr2;

    printf("%d %d", *arr2[1][1], *parr2[1][1]);
    

    return 0;
}