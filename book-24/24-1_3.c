// This File's Encoding: EUC-KR
// 한글 파일 입출력용 소스코드

#include <stdio.h>

int main() {
    FILE *fp = fopen("./mystory.txt", "rt");
    char str[40];

    if (fp == NULL) {
        puts("파일 실행 실패!");
        return -1;
    }

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    if (feof(fp) == 0)
        puts("파일 출력 중 오류 발생");

    fclose(fp);

    return 0;
}