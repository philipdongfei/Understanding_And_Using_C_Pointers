#include <string>
#include <iostream>
#include <typeinfo>

#define PINT int*
typedef int* PINT1;

int main(){
    PINT ptr1, ptr2;
    PINT1 ptr3, ptr4;
    std::cout << typeid(ptr1).name() << "\n";
    std::cout << typeid(ptr2).name() << "\n";
    std::cout << typeid(ptr3).name() << "\n";
    std::cout << typeid(ptr4).name() << "\n";

    return 0;
}
