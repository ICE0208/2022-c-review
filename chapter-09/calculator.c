#include <stdio.h>

void CalcMain();
int CalcSelect();
void CalcSetNumber(double *num_1, double *num_2);
void CalcOutput(int selected, double num_1, double num_2);

int main()
{
    CalcMain();

    return 0;
}

void CalcMain() {
    do {
        double num_1, num_2;
        int selected = CalcSelect();

        if (selected == 5) break;

        CalcSetNumber(&num_1, &num_2);
        CalcOutput(selected, num_1, num_2);
        printf("\n\n");
    } while (1);
    printf("\n* 계산기를 종료합니다. *\n\n");
}

int CalcSelect() {
    double select;

    while (1) {
        printf("1.더하기 2.빼기 3.곱하기 4.나누기 5.종료\n");
        printf("입력 : ");
        scanf("%lf", &select);
        if (select >=1 && select <= 4) {
            break;
        }
        printf("\n* 잘못된 선택입니다. *\n\n");
    }
    return (int)select;
}

void CalcSetNumber(double *num_1, double *num_2) {
    printf("첫 번째 수 입력 : ");
    scanf("%lf", num_1);
    printf("두 번째 수 입력 : ");
    scanf("%lf", num_2);
}

void CalcOutput(int selected, double num_1, double num_2) {
    switch (selected) {
        double result;

        case 1:
            result = num_1 + num_2;
            printf("계산 결과 : %g + %g = %g", num_1, num_2, result);
            break;
        case 2:
            result = num_1 - num_2;
            printf("계산 결과 : %g - %g = %g", num_1, num_2, result);
            break;
        case 3:
            result = num_1 * num_2;
            printf("계산 결과 : %g * %g = %.2g", num_1, num_2, result);
            break;
        case 4:
            // 나눌 수 없을 때
            if ((int)num_2 == 0) {
                printf("0으로는 나눌 수 없습니다.");
                break;
            }
            //계산
            result = num_1 / num_2;
            // 나눠지는 수와 나누는 수가 모두 정수일 때
            if (num_1 - (int)num_1 == 0 && num_2 - (int)num_2 == 0) {
                printf("계산 결과 : %g / %g = %d", num_1, num_2, (int)result);
                printf("\t나머지: %d", (int)num_1 % (int)num_2);
                break;
            }
            // 나눠지는 수 또는 나누는 수가 정수가 아닐 때
            printf("계산 결과 : %g / %g = %.2g", num_1, num_2, result);
            break;
    }
    printf("\n");
}