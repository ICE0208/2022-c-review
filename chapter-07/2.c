#include <stdio.h>

int main() {
    int input_num;
    printf("정수를 입력해주세요 : ");
    scanf("%d", &input_num);

    int i = 2;
    while (i <= input_num) {
        printf("%d ", i);
        i += 2;
    }

    return 0;
}