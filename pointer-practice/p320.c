#include <stdio.h>
#include <math.h>

double SquareByValue(double n) {
    return pow((double)n, 2.0);
}

void SquareByReference(double *n) {
    *n = pow((double)*n, 2.0);
}

int main()
{
    double n1 = 3.0, n2 = 4.0;
    printf("%g\n",SquareByValue(n1));
    SquareByReference(&n2);
    printf("%g", n2);

    return 0;
}