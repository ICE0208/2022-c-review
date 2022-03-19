#include <stdio.h>

int main() {
    int ch;

    ch = getchar();

    if (ch > 'Z') {
    } else {
        ch += ('a' - 'A');
    }

    putchar(ch);

    return 0;
}