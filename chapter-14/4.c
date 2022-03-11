#include <stdio.h>

int main() {
    int stu_score[5][4];
    double avg[5] = { 0 };

    printf("입력하세요.\n");
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &stu_score[i][j]);
            sum += stu_score[i][j];
        }
        avg[i] = sum / 4.0;
    }

    int pass_count = 0;
    for (int i = 0; i < 5; i++) {
        if (avg[i] >= 80.0) {
            printf("합격\n");
            pass_count += 1;
            continue;
        }
        printf("불합격\n");
    }

    printf("합격자 %d명", pass_count);

    return 0;
}