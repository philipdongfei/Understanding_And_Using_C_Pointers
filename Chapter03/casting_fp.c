#include <stdio.h>

typedef void(*fptrBase)();
typedef int (*fptrToSingleInt)(int);
typedef int (*fptrToTwoInts)(int, int);
int add(int, int);

int add(int num1, int num2){
    return num1+num2;
}

int main(void){
    fptrToTwoInts fptrFirst = add;
    fptrToSingleInt fptrSecond = (fptrToSingleInt)fptrFirst;
    fptrFirst = (fptrToTwoInts)fptrSecond;
    printf("%d\n", fptrFirst(5,6));

    fptrBase basePointer;
    fptrToTwoInts fptrThird = add;
    basePointer = (fptrBase)fptrThird;
    fptrThird = (fptrToTwoInts)basePointer;
    printf("%d\n", fptrThird(5,7));
    return 0;
}
