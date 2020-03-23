#include <stdio.h>
#include <stdint.h>


int main(void)
{
    int num;
    num = 0;
    intptr_t *pi = &num;
    uintptr_t *pu = (uintptr_t*)&num;

    return 0;
}


