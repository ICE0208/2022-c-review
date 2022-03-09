#include <stdio.h>
#include <memory.h>

int main()
{
    int va[5] = {15, 20, 30, 0, 0};
    int vb[5];
    memcpy(vb, va, sizeof(va));

    printf(" va  vb\n--------\n");
    for (int i=0; i<5; i++) {
        printf("%3d  %d\n",va[i],vb[i]);
    }

    return 0;
}