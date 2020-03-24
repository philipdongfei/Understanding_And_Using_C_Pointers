#include <stdio.h>
#include <stdlib.h>

int (*fptr1)(int);
typedef int (*funcptr)(int);
int square(int num){
    return num*num;
}

int main(void){
    int n = 5;
    fptr1 = square; // '&square' not necessary and redundant 
    printf("%d squared is %d\n", n, fptr1(n));
    funcptr fptr2;
    fptr2 = square;
    printf("%d squared is %d\n", n, fptr2(n));

    return 0;
}

