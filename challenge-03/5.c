#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RemoveBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        ;
    }
}

void PrintWin(int user, int com, char **strarr) {
    printf("당신은 %s 선택, 컴퓨터는 %s 선택, 이겼습니다!\n", strarr[user], strarr[com]);
}

void PrintDraw(int user, int com, char **strarr) {
    printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!\n", strarr[user], strarr[com]);
}

void PrintLose(int user, int com, char **strarr) {
    printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다!\n", strarr[user], strarr[com]);
}

// start이상, end미만의 난수 반환
int GetRandRange(int start, int end) {
    if (start >= end) {
        printf("🔽[Range Error]🔽\n");
        return 0;
    }
    return rand() % (end-start) + start;
}

int main()
{   
    int user_input;
    int com_select;
    char *rsp_strarr[4] = {NULL, "바위", "가위", "보"};
    int win_count = 0, draw_count = 0;
    srand(time(NULL));

    while (1) {
        printf("바위는 1, 가위는 2, 보는 3 : ");
        scanf("%d", &user_input);
        RemoveBuffer(); // 실수를 입력하거나 문자열 등을 잘못 입력 했을 때 버퍼 비워주기
        com_select = GetRandRange(1,4);

        if (user_input == 1) {  // win
            if (com_select == 2) {
                win_count++;
                PrintWin(user_input, com_select, rsp_strarr);
                continue;
            }
            if (com_select == 1) { // draw
                draw_count++;
                PrintDraw(user_input, com_select, rsp_strarr);
                continue;
            }
            if (com_select == 3) { // lose
                PrintLose(user_input, com_select, rsp_strarr);
                break;
            }
        }
        if (user_input == 2) {
            if (com_select == 3) {
                win_count++;
                PrintWin(user_input, com_select, rsp_strarr);
                continue;
            }
            if (com_select == 2) { // draw
                draw_count++;
                PrintDraw(user_input, com_select, rsp_strarr);
                continue;
            }
            if (com_select == 1) { // lose
                PrintLose(user_input, com_select, rsp_strarr);
                break;
            }
        }
        if (user_input == 3) {
            if (com_select == 1) {
                win_count++;
                PrintWin(user_input, com_select, rsp_strarr);
                continue;
            }
            if (com_select == 3) { // draw
                draw_count++;
                PrintDraw(user_input, com_select, rsp_strarr);
                continue;
            }
            if (com_select == 2) { // lose
                PrintLose(user_input, com_select, rsp_strarr);
                break;
            }
        }
        printf("올바른 값을 입력해주세요.\n\n");

    }

    printf("\n게임의 결과 : %d승, %d무", win_count, draw_count);

    return 0;
}