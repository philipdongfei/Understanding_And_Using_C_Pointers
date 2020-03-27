#ifndef __SHAPE_H__
#define __SHAPE_H__

typedef struct _shape Shape;
typedef struct _rectangle Rectangle;

void shapeDisplay(Shape*);
void shapeSetX(Shape*, int);
void shapeSetY(Shape* , int);
int shapeGetX(Shape*);
int shapeGetY(Shape*);
Shape* getShapeInstance();


void rectangleSetX(Rectangle*, int);
void rectangleSetY(Rectangle*, int);
int rectangleGetX(Rectangle*);
int rectangleGetY(Rectangle*);
void rectangleDisplay();
Rectangle* getRectangleInstance();
#endif
