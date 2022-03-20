#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int GetBlankIndex(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            return i;
        }
    }
    return -1;
}

int IsSameName(char *str1, char *str2) {
    int b_idx_1 = GetBlankIndex(str1);
    int b_idx_2 = GetBlankIndex(str2);
    if (b_idx_1 != b_idx_2)
        return 0;

    if (strncmp(str1, str2, b_idx_2) == 0) {
        return 1;
    } else {
        return 0;
    }
}

int isSameAge(char *str1, char *str2) {
    int b_idx_1 = GetBlankIndex(str1);
    int b_idx_2 = GetBlankIndex(str2);

    int age_1 = atoi(&str1[b_idx_1 + 1]);
    int age_2 = atoi(&str2[b_idx_2 + 1]);

    if (age_1 == age_2) {
        return 1;
    } else
        return 0;
}

int main() {
    char str1[20];
    char str2[20];
    printf("str1 : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = 0;
    printf("str2 : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = 0;

    if (IsSameName(str1, str2) == 1) {
        printf("이름이 같습니다.\n");
    } else {
        printf("이름이 다릅니다.\n");
    }

    if (isSameAge(str1, str2) == 1) {
        printf("나이가 같습니다.\n");
    } else {
        printf("나이가 다릅니다.\n");
    }

    return 0;
}