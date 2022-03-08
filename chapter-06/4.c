#include <stdio.h>

double InvertTemp(double temp, char temp_sort);

int main() {
    double c_value = 21.6, f_value = 110.3;

    double c_result = InvertTemp(c_value, 'c');
    double f_result = InvertTemp(f_value, 'f');

    printf("섭씨 %.1lf도는 화씨 %.1lf도이다.\n", c_value, c_result);
    printf("화씨 %.1lf도는 섭씨 %.1lf도이다.\n", f_value, f_result);

    return 0;
}

double InvertTemp(double temp, char temp_sort) {
    if (temp_sort == 'c') {
        return temp * 1.8 + 32;
    }

    if (temp_sort == 'f') {
        return (temp - 32) * 0.55;
    }

    printf("Invalid temp_sort (Only 'c' or 'f')\n");
    return 0;
}