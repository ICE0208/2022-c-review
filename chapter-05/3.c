 #include <stdio.h>
 
 int main()
 {
     double centimeter, inch;
     printf("신장을 cm로 입력해주세요 : ");
     scanf("%lf", &centimeter);

     double result = centimeter / 2.54;
     printf("이것은 %.6f인치입니다.", result);
     
     
 
     return 0;
 }