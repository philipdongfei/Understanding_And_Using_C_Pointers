#include <stdio.h>
#include <stdlib.h>

int* allocateArray(int size, int value)
{
    static int arr[5];
    for (int i=0; i<size; i++){
        arr[i] = value;
    }
    return arr;
}

int main(void){
    int* vector = allocateArray(5, 45);
    for (int i=0; i<5; i++){
        printf("%d\n", vector[i]);
    }
    //vector[0] = 0;
    //printf("%d\n", vector[0]);

    free(vector);
    return 0;
}
