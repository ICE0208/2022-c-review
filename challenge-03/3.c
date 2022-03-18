#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    int a = 0, b = 0;;
    printf("범위 입력 (a이상 b미만): ");
    scanf("%d %d", &a, &b);

    srand(time(NULL));
    printf("난수 출력 : %d\n", GetRandRange(a, b));
    printf("난수 출력 : %d\n", GetRandRange(a, b));
    printf("난수 출력 : %d\n", GetRandRange(a, b));
    printf("난수 출력 : %d\n", GetRandRange(a, b));
    printf("난수 출력 : %d\n", GetRandRange(a, b));

    return 0;
}