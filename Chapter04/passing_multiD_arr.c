#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display2DArray(int arr[][5], int rows){
    for (int i=0; i<rows; i++){
        for (int j=0; j<5; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}

void display2DArrayUnknownSize(int *arr, int rows, int cols){
    for(int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            printf("%d ", *(arr + (i*cols) +j));
        }
        printf("\n");
    }
}
void display3DArray(int (*arr)[2][4], int rows){
    for (int i=0; i<rows; i++){
        for (int j=0; j<2; j++){
            printf("{");
            for (int k=0; k<4; k++){
                printf("%d ", arr[i][j][k]);
            }
            printf("}");
        }
        printf("\n");
    }
}

void main(){
    int matrix[2][5]={
        {1,2,3,4,5},
        {6,7,8,9,10}
    };
    display2DArray(matrix, 2);
    display2DArrayUnknownSize(&matrix[0][0], 2, 5);
    int arr3d[3][2][4] = {
        {{1,2,3,4}, {5,6,7,8}},
        {{9,10,11,12},{13,14,15,16}},
        {{17,18,19,20}, {21,22,23,24}}
    };
    display3DArray(arr3d, 3);
}

