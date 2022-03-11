#include <stdio.h>

int main() {
    int arr[5] = { 1 };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 0) {
                printf("%3d", 1);
                continue;
            }
            arr[j] = arr[j] + arr[j - 1];
            printf("%3d", arr[j]);
        }
        printf("\n");
    }

    return 0;
}