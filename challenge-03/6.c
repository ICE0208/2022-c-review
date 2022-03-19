#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// arr[0~2]에 서로 다른 랜덤 난수(0~9)를 넣어줌
void SetRanNums(int *arr);
// strike, ball을 판단하고 출력하고 strike가 3개일 경우 1을 리턴, 아니면 0을 리턴
int PrintResult(int *com_arr, int *user_arr, int try_count);
void RemoveBuffer();

int main()
{   
    int com_arr[3];
    int user_arr[3];
    int try_count = 1;
    srand(time(NULL));

    SetRanNums(com_arr);

    printf("Start Game!\n");
    while (1) {
        printf("3개의 숫자 선택 : ");
        for (int i=0; i<3; i++) {
            scanf("%d", &user_arr[i]);
        }
        RemoveBuffer();

        if(PrintResult(com_arr, user_arr, try_count)==1) break;
        try_count++;
    }

    printf("\n\nGame Over!");
    return 0;
}

void RemoveBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {;
    }
}

void SetRanNums(int *arr) {
    int temp;
    arr[0] = rand() % 10;
    do{
        temp = rand() % 10;
    }while (temp == arr[0]);
    arr[1] = temp;
    do{
        temp = rand() % 10;
    }while (temp == arr[0] || temp == arr[1]);
    arr[2] = temp;
}

int PrintResult(int *com_arr, int *user_arr, int try_count) {
    int strike = 0, ball = 0;

    for (int i=0; i<3; i++) {
        if (user_arr[i] == com_arr[i]) {
            strike++;
            continue;
        }
        if (user_arr[i] == com_arr[(i+1)%3] || user_arr[i] == com_arr[(i+2)%3]) {
            ball++;
            continue;
        }
    }
    printf("%d번째 도전 결과 : %dstrike, %dball!!\n",try_count, strike, ball);
    return (strike==3) ? 1 : 0;
}