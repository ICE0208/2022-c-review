#include <stdio.h>
#include <conio.h>

int main() {
    FILE *fp = fopen("mystory.txt", "wt");
    char name[20] = { 0 };
    char name2[20] = { 0 };
    char other_info[20] = { 0 };
    char get_info[40] = { 0 };

    // �Է� �κ�
    if (fp == NULL) {
        puts("���� ���� ����!");
        return -1;
    }

    printf("�̸�? ");
    scanf("%s", name);
    fprintf(fp, "#�̸�: %s\n", name);

    printf("�ֹι�ȣ? ");
    scanf("%s", other_info);
    fprintf(fp, "#�ֹι�ȣ: %s\n", other_info);

    printf("��ȭ��ȣ: ");
    scanf("%s", other_info);
    fprintf(fp, "#��ȭ��ȣ: %s\n", other_info);

    fclose(fp);

    // ��� �κ�
    FILE *fp2 = fopen("mystory.txt", "rt+");

    if (fp2 == NULL) {
        puts("���� ���� ����!");
        return -1;
    }

    for (int i = 0; i < 3; i++) {
        fgets(get_info, sizeof(get_info), fp2);
        printf("%s", get_info);
    }

    fclose(fp2);

    getch();
    return 0;
}