#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi = calloc(5, sizeof(int));

    free(pi);

    return 0;
}
