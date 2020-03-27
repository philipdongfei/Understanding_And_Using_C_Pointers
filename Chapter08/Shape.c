#include <stdlib.h>
#include <stdio.h>
#include "Shape.h"


#if 0
typedef struct _functions {
    // Functions
    fptrSet setX;
    fptrGet getX;
    fptrSet setY;
    fptrGet getY;
    fptrDisplay display;
} vFunctions;

typedef struct _shape {
    vFunctions functions;
    // Base variables
    int x;
    int y;
} Shape;
#endif
typedef void (*fptrSet)(void*, int);
typedef int (*fptrGet)(void*);
typedef void (*fptrDisplay)();


typedef struct _functions {
    // Functions
    fptrSet setX;
    fptrGet getX;
    fptrSet setY;
    fptrGet getY;
    fptrDisplay display;
} vFunctions;

struct _shape {
    vFunctions functions;
    // Base variables
    int x;
    int y;
};

void shapeDisplay(Shape *shape) { printf("Shape\n"); }
void shapeSetX(Shape *shape, int x) {shape->x = x;}
void shapeSetY(Shape *shape, int y) {shape->y = y;}
int shapeGetX(Shape *shape) { return shape->x; }
int shapeGetY(Shape *shape) { return shape->y; }

Shape* getShapeInstance() {
    Shape *shape = (Shape*)malloc(sizeof(Shape));
    shape->functions.display = shapeDisplay;
    shape->functions.setX = shapeSetX;
    shape->functions.getX = shapeGetX;
    shape->functions.setY = shapeSetY;
    shape->functions.getY = shapeGetY;
    shape->x = 100;
    shape->y = 100;
    return shape;
}

#if 0
typedef struct _rectangle {
    Shape base;
    int width;
    int height;
} Rectangle;
#endif
struct _rectangle {
    Shape base;
    int width;
    int height;
};

void rectangleSetX(Rectangle *rectangle, int x){
    rectangle->base.x = x;
}
void rectangleSetY(Rectangle *rectangle, int y){
    rectangle->base.y = y;
}
int rectangleGetX(Rectangle *rectangle) {
    return rectangle->base.x;
}
int rectangleGetY(Rectangle *rectangle) {
    return rectangle->base.y;
}
void rectangleDisplay(){
    printf("Rectangle\n");
}

Rectangle* getRectangleInstance(){
    Rectangle *rectangle = (Rectangle*)malloc(sizeof(Rectangle));
    rectangle->base.functions.display = rectangleDisplay;
    rectangle->base.functions.setX = rectangleSetX;
    rectangle->base.functions.setY = rectangleSetY;
    rectangle->base.functions.getX = rectangleGetX;
    rectangle->base.functions.getY = rectangleGetY;
    rectangle->base.x = 200;
    rectangle->base.y = 200;
    rectangle->height = 300;
    rectangle->width = 500;
    return rectangle;
}

#if 1
int main(){

    Shape *sptr = getShapeInstance();
    sptr->functions.setX(sptr, 35);
    sptr->functions.display();
    printf("%d\n", sptr->functions.getX(sptr));

    Rectangle *rptr = getRectangleInstance();
    rptr->base.functions.setX(rptr, 35);
    rptr->base.functions.display();
    printf("%d\n", rptr->base.functions.getX(rptr));

    Shape *shapes[3];
    shapes[0] = getShapeInstance();
    shapes[0]->functions.setX(shapes[0], 35);
    shapes[1] = getRectangleInstance();
    shapes[1]->functions.setX(shapes[1], 44);
    shapes[2] = getShapeInstance();
    shapes[2]->functions.setX(shapes[2], 55);

    for (int i=0; i<3; i++){
        shapes[i]->functions.display();
        printf("%d\n", shapes[i]->functions.getX(shapes[i]));
    }


    return 0;

}
#endif
