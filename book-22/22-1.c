#include <stdio.h>

struct employee {
    char name[20];
    char private_num[20];
    int money_info;
};

int main() {
    struct employee man;

    fputs("Name : ", stdout);
    scanf("%s", man.name);
    fputs("Private Number : ", stdout);
    scanf("%s", man.private_num);
    fputs("Money Info : ", stdout);
    scanf("%d", &man.money_info);

    printf("Name : %s\nPrivate Number : %s\nMoney Info : %d", man.name,
           man.private_num, man.money_info);

    return 0;
}