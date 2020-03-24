#include <stdio.h>
#include <stdlib.h>

int* allocateArray(int size, int value){
    int* arr = (int*)malloc(size * sizeof(int));
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
    free(vector);

    return 0;
}
