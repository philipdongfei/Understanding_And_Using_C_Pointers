#include <stdio.h>
#include <stdlib.h>

#define safeFree(p) saferFree((void**)&(p))

void saferFree(void **pp){
    if (pp != NULL && *pp != NULL){
        free(*pp);
        *pp = NULL;
    }
}

int main(void){
    int *pi;
    pi = (int*)malloc(sizeof(int));
    *pi = 5;
    printf("Before: %p\n", pi);
    safeFree(pi);
    printf("After: %p\n", pi);
    safeFree(pi);
    return (EXIT_SUCCESS);
}
