#include <stdio.h>

int main()
{
    int ch;

    ch = getchar();

    if (ch < 'a') {
        ch = ch - ('A' - 'a');
    }

    putchar(ch);

    return 0;
}