#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point *p_pos1, Point *p_pos2) {
    Point temp;
    temp = *p_pos1;
    *p_pos1 = *p_pos2;
    *p_pos2 = temp;
    printf("Swap!\n");
}

void ShowPoints(Point pos1, Point pos2) {
    printf("pos1 : [%d, %d] / pos2 : [%d, %d]\n", pos1.xpos, pos1.ypos,
           pos2.xpos, pos2.ypos);
}

int main(void) {

    Point pos1 = { 2, 4 };
    Point pos2 = { 5, 7 };

    ShowPoints(pos1, pos2);
    SwapPoint(&pos1, &pos2);
    ShowPoints(pos1, pos2);

    return 0;
}