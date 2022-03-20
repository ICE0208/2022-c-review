#include <stdio.h>
#include <string.h>

int CharToInt(char ch) {
    if (ch < '0' || ch > '9') {
        return 0;
    }
    return ch - '0';
}

int main() {
    int sum = 0;
    char arr[30];

    printf("입력 : ");
    scanf("%s", arr);

    int arr_size = strlen(arr);
    for (int i = 0; i < arr_size; i++) {
        sum += CharToInt(arr[i]);
    }

    printf("출력 : %d", sum);

    return 0;
}