#include <stdio.h>

int main()
{
    int vx[7];

    for (int i=0; i<7; i++) {
        printf("vx[%d] : ",i);
        scanf("%d", &vx[i]);
    }

    for (int i=6; i>=0; i--) {
        printf("vx[%d] = %d\n", 6-i, vx[i]);
    }

    return 0;
}