#include <stdio.h>

void PrintAtSign();

int main() {
    int input_count = 0;
    printf("입력 : ");
    scanf("%d", &input_count);

    for (int i = 0; i < input_count; i++) {
        PrintAtSign();
    }

    return 0;
}

void PrintAtSign() {
    for (int i = 0; i < 10; i++) {
        printf("@");
    }
    printf("\n");
}