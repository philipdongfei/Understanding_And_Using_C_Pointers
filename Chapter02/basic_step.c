#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    static int *pii; 
    pii = malloc(sizeof(int));
    free(pii);
    int *pi = (int*)malloc(sizeof(int));
    *pi = 5;
    printf("*pi: %d\n", *pi);
    free(pi);

    return 0;
}
