#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 0
void displayArray(int* arr, int size){
    for (int i=0; i < size; i++){
        printf("%d\n", arr[i]);
    }
}
#endif
#if 0
void displayArray(int* arr, int size){
    for (int i=0; i < size; i++){
        printf("%d\n", *(arr+i));
    }
}
#endif
void displayArray(int arr[], int size){
    for (int i=0; i < size; i++){
        printf("%d\n", *(arr+i));
    }
}

int main(void){
    int vector[5] = {1,2,3,4,5};
    displayArray(vector, 5);

    return 0;
}
