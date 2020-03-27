#include <stdio.h>
#include "Shape.h"



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
