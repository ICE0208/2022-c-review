#include <stdio.h>

int main() {
    struct point { // point라는 이름의 구조체 정의
        int xpos;
        int ypos;
    };

    struct person { // person이라는 이름의 구조체 정의
        char name[20];
        char phoneNum[20];
        int age;
    };

    struct point pos; // 구조체 변수 선언
    struct person man; // 구조체 변수 선언

    pos.xpos = 20; // 구조체 변수 pos의 멤버 xpos에 20을 저장
    printf("%d \n", pos.xpos);


    return 0;
}