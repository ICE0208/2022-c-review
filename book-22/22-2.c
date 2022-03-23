#include <stdio.h>
#include <string.h>

struct employee {
    char name[20];
    char private_num[20];
    int money_info;
};

int main() {
    struct employee person[3];
    char temp[20];

    for (int i = 0; i < 3; i++) {
        printf("person[%d]의 이름을 입력하세요 : ", i);
        scanf("%s", temp);
        strncpy(person[i].name, temp, sizeof(temp));
        printf("person[%d]의 주민번호를 입력하세요 : ", i);
        scanf("%s", temp);
        strncpy(person[i].private_num, temp, sizeof(temp));
        printf("person[%d]의 급여 정보를 입력하세요 : ", i);
        scanf("%d", &person[i].money_info);
    }

    for (int i = 0; i < 3; i++) {
        printf("이름 : %s\n주민번호: %s\n급여 정보: %d\n\n", person[i].name,
               person[i].private_num, person[i].money_info);
    }

    return 0;
}