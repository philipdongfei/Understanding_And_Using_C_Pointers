#include <stdio.h>
#include <stdlib.h>

#if 1
void passingAddressOfConstants(const int* num1, int* num2){
    *num2 = *num1;
}
#endif

#if 0
void passingAddressOfConstants(const int* num1, int* num2){
    *num1 = 100;
    *num2 = 200;
}
#endif

int main(){
    const int limit = 100;
    int result = 5;
    passingAddressOfConstants(&limit, &result);
    //passingAddressOfConstants(&limit, &limit); // syntax errors
    //passingAddressOfConstants(&23, &23); // syntax errors

    return 0;
}
