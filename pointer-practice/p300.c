#include <stdio.h>

int main()
{
    char str1[] = "My String"; // 배열 기반의 변수 형태의 문자열 선언
    printf("%s\n", str1);

    char *str2 = "Your String"; // 포인터 기반의 상수 형태의 문자열 선언
    printf("%s\n", str2);
    str2 = "Change String";
    printf("%s\n", str2);

    /*
    포인터 기반의 문자열은 가리키는 주소를 변경할 수 있기 때문에 문자열 값을 바꿀 수 있다.
    하지만 가리키고 있는 문자열은 상수이기 때문에 그 값은 변경할 수 없다.
    */

    return 0;
}