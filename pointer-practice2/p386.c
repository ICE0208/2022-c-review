#include <stdio.h>

int main()
{
    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    printf("a[0]: %p \n", a[0]);
    printf("*(a+0): %p \n", *(a+0));

    return 0;
}