#include <stdio.h>

int main() {
    double input_num;
    printf("학점을 입력해주세요 : ");
    scanf("%lf", &input_num);

    switch ((int)input_num) {
    case 4:
        printf("장학금을 받아가세요.");
        break;
    case 3:
        printf("다음 학기를 준비하세요.");
        break;
    case 2:
        printf("계절 학기에 등록하세요.");
        break;
    case 1:
        printf("다음 학기에 재수강하세요.");
        break;
    case 0:
        printf("다음 학기에 재수강하세요.");
        break;
    default:
        printf("올바른 학점을 입력해주세요.");
    }

    return 0;
}