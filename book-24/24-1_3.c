// This File's Encoding: EUC-KR
// �ѱ� ���� ����¿� �ҽ��ڵ�

#include <stdio.h>

int main() {
    FILE *fp = fopen("./mystory.txt", "rt");
    char str[40];

    if (fp == NULL) {
        puts("���� ���� ����!");
        return -1;
    }

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    if (feof(fp) == 0)
        puts("���� ��� �� ���� �߻�");

    fclose(fp);

    return 0;
}