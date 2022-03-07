#include <stdio.h>

int main() {
    int i, input;
    const int X = 10;
    printf("정수를 입력해주세요 : ");
    
    scanf("%d", &input);

    int result[] = {input + X, input - X, input * X, input / X, input % X};
    char str[][20] = {"더하면", "빼면", "곱하면", "나눈 몫은", "나눈 나머지는"};

    for (i = 0; i < sizeof(result) / sizeof(int); i++) {
        if (i < 3) {
            printf("%d을 %s %d입니다.\n", X, str[i], result[i]);
        } else {
            printf("%d으로 %s %d입니다.\n", X, str[i], result[i]);
        }
    }
}