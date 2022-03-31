// This File's Encoding: EUC-KR
// 한글 파일 입출력용 소스코드

#include <stdio.h>

int main() {
    char temp[30];

    FILE *fp = fopen("./mystory.txt", "at");

    if (fp == NULL) {
        puts("파일 실행 실패!");
        return -1;
    }

    printf("즐겨먹는 음식: ");
    gets(temp);
    fprintf(fp, "#즐겨먹는 음식: %s\n", temp);

    printf("취미: ");
    gets(temp);
    fprintf(fp, "#취미: %s", temp);

    fclose(fp);

    return 0;
}