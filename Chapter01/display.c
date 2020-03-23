#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 0;
    int *pi = &num;

    printf("Address of num: %d  Value: %d\n", &num, num);
    printf("Address of pi: %d  Value: %d\n", &pi, pi);
    printf("Address of pi: %x  Value: %x\n", &pi, pi);
    printf("Address of pi: %o  Value: %o\n", &pi, pi);
    printf("Address of pi: %p  Value: %p\n", &pi, pi);
    printf("Value of pi: %p\n", (void*)pi);

    // Pointer to void
    void* pv = pi;
    pi = (int*)pv;
    printf("Value of Pi: %p\n", pi);

    size_t size = sizeof(void*);
    printf("void* size: %d\n", size);

    size_t sizet = -5;
    printf("sizet: %d\n", sizet);
    printf("sizet: %zu\n", sizet);
    sizet = 5;
    printf("sizet: %d\n", sizet);
    printf("sizet: %zu\n", sizet);

    printf("Size of *char: %d\n", sizeof(char*));



    return 0;

}
