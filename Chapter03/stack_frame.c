#include <stdio.h>
#include <stdlib.h>

float average(int *arr, int size)
{
    int sum;
    printf("arr:  %p\n", &arr);
    printf("size: %p\n", &size);
    printf("sum:  %p\n", &sum);

    for (int i=0; i<size; i++){
        sum += arr[i];
    }
    return (sum * 1.0f) / size;
}

int main(void)
{
    int vector[] = {28, 41, 7};
    int *parr = vector;
    int nsize = 3;
    average(parr, nsize);

    return 0;
}
