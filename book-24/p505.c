#include <stdio.h>

int main() {
    FILE *fp = fopen("./myFile.txt", "wt");
    if (fp == NULL) {
        puts("파일오픈 실패!");
        return -1;
    }

    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);
    fclose(fp);

    return 0;
}