#include <stdio.h>
#include <string.h>

int main() {
    // 문자열을 저장하는 포인터 배열
    char *strArr[3] = { "Simple", "String", "Array" };
    // 문자열은 메모리 공간에 저장된 후 그 주소 값이 반환된다.
    printf("%s %d\n", strArr[0], strlen(strArr[0]));
    printf("%s %d\n", strArr[1], strlen(strArr[1]));
    printf("%s %d\n", strArr[2], strlen(strArr[2]));

    return 0;
}