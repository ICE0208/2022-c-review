#include <stdio.h>

int main() {
    int num;
    printf("num의 값을 입력해주세요 : ");
    
    scanf("%d", &num);

    printf("num / 5 는 %d입니다.\n", (num / 5));
    printf("num %% 5는 %d입니다.", (num % 5));

    return 0;
}