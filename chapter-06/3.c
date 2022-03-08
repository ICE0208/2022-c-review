#include <stdio.h>

int main()
{
    float f_1, f_2;
    double d_1;

    scanf("%f %f %lf",&f_1, &f_2, &d_1);
    printf("%.3f\n%.3f\n%.3lf",f_1, f_2, d_1);

    return 0;
}