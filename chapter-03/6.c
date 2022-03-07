#include <stdio.h>

int main() {
    int i, temp, sum = 0;

    for (i = 0; i < 3; i++) {
        printf("변수 %d : ", (i + 1));
        scanf("%d", &temp);
        sum += temp;
    }

    printf("이들의 합은 %d입니다.", sum);

    return 0;
}