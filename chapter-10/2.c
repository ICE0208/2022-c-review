#include <stdio.h>

int main()
{
    double vc[11];

    for (int i=0; i<=10; i++) {
        vc[i] = i * 0.1;
    }

    for (int i=0; i<=10; i++) {
        printf("vc[%d] = %.1lf\n", i, vc[i]);
    }



    return 0;
}