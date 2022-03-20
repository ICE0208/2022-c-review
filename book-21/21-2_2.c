#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[20];
    char str3[40];

    printf("str1 : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = 0;
    printf("str2 : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = 0;

    strncpy(str3, str1, strlen(str1) + 1);
    strncat(str3, str2, strlen(str2) + 1);
    printf("str3 : %s", str3);
    
    return 0;
}