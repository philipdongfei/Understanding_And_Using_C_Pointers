#include <stdio.h>

void add(int size, double * restrict arr1, const double * restrict arr2){
    for (int i=0; i<size; i++){
        arr1[i] += arr2[i];
    }
}

int main(){
    double vector1[] = {1.1, 2.2, 3.3, 4.4};
    double vector2[] = {1.1, 2.2, 3.3, 4.4};

    add(4, vector1, vector2);

    double *vector3 = vector1;

    add(4, vector1, vector3);
    add(4, vector3, vector1);

    return 0;
    
}
