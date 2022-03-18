#include <stdio.h>

int SetRow() {

}

int main()
{
    int n = 0;
    printf("n : ");
    scanf("%d", &n);

    // create array n*n with 0
    int arr[n][n];
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            arr[i][j] = 0;
        }
    }

    int index = 1;
    int arr_size = n*n;
    int row=0, col=0;
    while (index <= arr_size) {
        // 가로 오른쪽
        while (col<n && arr[row][col] == 0) {
            arr[row][col] = index;
            index++;
            col++;
        }
        col--;
        row++;
        // 세로 아래
        while (row<n && arr[row][col] == 0) {
            arr[row][col] = index;
            index++;
            row++;
        }
        row--;
        col--;
        // 가로 왼쪽
        while (arr[row][col] == 0) {
            arr[row][col] = index;
            index++;
            col--;
        }
        col++;
        row--;
        // 세로 위
        while (arr[row][col] == 0) {
            arr[row][col] = index;
            index++;
            row--;
        }
        row++;
        col++;
    }

    // print array 0
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}