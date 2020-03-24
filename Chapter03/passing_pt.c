#include <stdio.h>
#include <stdlib.h>

int* allocateArray(int *arr, int size, int value)
{
    if (arr != NULL){
        for (int i=0; i<size; i++){
            arr[i] = value;
        }
    }
    return arr;
}
int main(void){

    int* vector = (int*)malloc(5*sizeof(int));
    allocateArray(vector, 5, 45);
    for (int i=0; i<5; i++){
        printf("%d\n", vector[i]);
    }

    free(vector);
    return 0;
}
