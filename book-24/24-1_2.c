// This File's Encoding: EUC-KR
// �ѱ� ���� ����¿� �ҽ��ڵ�

#include <stdio.h>

int main() {
    char temp[30];

    FILE *fp = fopen("./mystory.txt", "at");

    if (fp == NULL) {
        puts("���� ���� ����!");
        return -1;
    }

    printf("��ܸԴ� ����: ");
    gets(temp);
    fprintf(fp, "#��ܸԴ� ����: %s\n", temp);

    printf("���: ");
    gets(temp);
    fprintf(fp, "#���: %s", temp);

    fclose(fp);

    return 0;
}