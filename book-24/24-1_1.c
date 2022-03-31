// This File's Encoding: EUC-KR
// 한글 파일 입출력용 소스코드

#include <stdio.h>
#include <conio.h>

int main() {
    FILE *fp = fopen("mystory.txt", "wt");
    char name[20] = { 0 };
    char name2[20] = { 0 };
    char other_info[20] = { 0 };
    char get_info[40] = { 0 };

    // 입력 부분
    if (fp == NULL) {
        puts("파일 열기 실패!");
        return -1;
    }

    printf("이름? ");
    scanf("%s", name);
    fprintf(fp, "#이름: %s\n", name);

    printf("주민번호? ");
    scanf("%s", other_info);
    fprintf(fp, "#주민번호: %s\n", other_info);

    printf("전화번호: ");
    scanf("%s", other_info);
    fprintf(fp, "#전화번호: %s\n", other_info);

    fclose(fp);

    // 출력 부분
    FILE *fp2 = fopen("mystory.txt", "rt+");

    if (fp2 == NULL) {
        puts("파일 열기 실패!");
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