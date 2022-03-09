#include <stdio.h>

int main()
{
    int vc[] = {5, 4, 3, 2, 1};

    int size = sizeof(vc) / sizeof(int);

    for (int i=0; i<size; i++) {
        printf("vc[%d] = %d\n", i, vc[i]);
    }

    return 0;
}