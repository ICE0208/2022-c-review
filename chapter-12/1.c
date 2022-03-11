#include <stdio.h>

int main() {
    int arr[5];
    int *parr = arr;

    printf("입력하세요.\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &parr[i]);
    }

    for (int i = 0; i < 5; i += 2) {
        printf("%d ", parr[i]);
    }

    return 0;
}