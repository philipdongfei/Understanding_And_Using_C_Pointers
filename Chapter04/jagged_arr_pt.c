#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int (*(arr2[])) = {
        (int[]){0,1,2,3},
        (int[]){4,5},
        (int[]){6,7,8}
    };
    int row = 0;
    for (int i=0; i<4; i++){
        printf("layer1[%d][%d]  Address: %p  Value: %d\n",
                row, i, &arr2[row][i], arr2[row][i]);
    }
    printf("\n");

    row = 1;
    for (int i=0; i<2; i++){
        printf("layer1[%d][%d]  Address: %p  Value: %d\n",
                row, i, &arr2[row][i], arr2[row][i]);
    }
    printf("\n");
    
    row = 2;
    for (int i=0; i<3; i++){
        printf("layer1[%d][%d]  Address: %p  Value: %d\n",
                row, i, &arr2[row][i], arr2[row][i]);
    }
    printf("\n");
}
