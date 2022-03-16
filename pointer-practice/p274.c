#include <stdio.h>

int main() {
    int num = 7;
    int *pnum = &num;

    printf("%d의 주소값은 %p", *pnum, pnum);
    printf("포인터 변수 pnum의 크기는 \n%d", sizeof(pnum));

    // 포인터의 형이 존재하는 이유는 포인터 기반의 메모리 접근기준을 마련하기 위함이다.
    // 포인터에 형이 존재하지 않는다면 * 연산을 통한 메모리의 접근은 불가능하다.
    return 0;
}