#include <stdio.h>

int main() {
    int arr[10];
    int *parr = arr;

    int odd_count = 0, even_count = 0;

    printf("입력하세요.\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &parr[i]);
        if (parr[i] % 2 == 0) {
            even_count += 1;
            continue;
        }
        odd_count += 1;
    }

    printf("홀수 : %d개\n짝수 : %d개", odd_count, even_count);

    return 0;
}