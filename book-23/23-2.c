#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

typedef struct {
    Point leftTop;
    Point rightBottom;
} Rectangle;

void ShowRecPos(Rectangle *ptr) {
    printf("Rectangle's LeftTop Pos : [%d, %d]\n", (ptr->leftTop).xpos,
           (ptr->leftTop).ypos);
    printf("Rectangle's RightBottom Pos : [%d, %d]\n", (ptr->rightBottom).xpos,
           (ptr->rightBottom).ypos);
}

int main() {
    Rectangle rec = { { 0, 0 }, { 100, 100 } };
    ShowRecPos(&rec);

    return 0;
}