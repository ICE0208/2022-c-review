#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Decimal : %d\n", num);
    printf("Octal : %o\n", num);
    printf("Hexadecimal : %x", num);

    return 0;
}