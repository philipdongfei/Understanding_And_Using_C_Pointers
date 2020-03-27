#include <stdio.h>

int main(){
    int num = 8;
    int *pi = NULL;
    pi = &num;
    printf("Before: %p\n", pi);
    int tmp = (int)pi;
    pi = (int*)tmp;
    printf("After: %p\n", pi);

    return 0;
}
