#include <stdio.h>

int main()
{
    for (int i = 1; i <= 50; i++) {
        printf("%2d\t", i);

        if (i%5 == 0) printf("\n");
    }

    return 0;
}