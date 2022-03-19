#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ThrowDice() {
    int dice;
    dice = rand() % 6 + 1;
    return dice;
}

int main() {
    srand(time(NULL));

    printf("주사위 1의 결과 : %d\n", ThrowDice());
    printf("주사위 2의 결과 : %d\n", ThrowDice());
    printf("주사위 3의 결과 : %d\n", ThrowDice());
    printf("주사위 4의 결과 : %d\n", ThrowDice());
    printf("주사위 5의 결과 : %d\n", ThrowDice());
    printf("주사위 6의 결과 : %d\n", ThrowDice());

    return 0;
}