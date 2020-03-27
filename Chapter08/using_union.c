#include <stdio.h>

typedef union _conversion {
    float fNum;
    unsigned int uiNum;
} Conversion;

int isPositive1(float number){
    // does not involve aliasing
    Conversion conversion = {.fNum = number};
    return (conversion.uiNum & 0x80000000) == 0;
}

typedef union _conversion2 {
    float *fNum;
    unsigned int *uiNum;
} Conversion2;

int isPositive2(float number){
    // violates the strict aliasing rule
    Conversion2 conversion;
    conversion.fNum = &number;
    return (*conversion.uiNum & 0x80000000) == 0;
}

int isPositive3(float number){
    // not use a union and violates the strict aliasing rule
    unsigned int *ptrValue = (unsigned int *)&number;
    return (*ptrValue & 0x80000000) == 0;
}


int main(){
    float number = -0.922;
    isPositive1(number);
    isPositive2(number);
    isPositive3(number);

    return 0;
}
