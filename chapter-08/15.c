#include <stdio.h>

char *IsLeapYear(int year);

int main() {
    int year;
    printf("연도를 입력해주세요 : ");
    scanf("%d", &year);

    printf("%s", IsLeapYear(year));

    return 0;
}

char *IsLeapYear(int year) {
    // 윤년일 경우
    if (year % 400 == 0)
        return "윤년";
    if (year % 4 == 0 && year % 100 != 0)
        return "윤년";
    // 윤년이 아닐 경우
    return "평년";
}