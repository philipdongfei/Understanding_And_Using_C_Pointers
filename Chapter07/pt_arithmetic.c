#include <stdio.h>

typedef struct _item {
    int partNumber;
    int quantity;
    int binNumber;
}Item;

typedef struct _employee {
    char name[10];
    int age;
} Employee;
int main(){
    Item part = {12345, 35, 107};
    int *pi = &part.partNumber;
    printf("Part number: %d\n", *pi);
    pi++;
    printf("Quantity: %d\n", *pi);
    pi++;
    printf("Bin number: %d\n", *pi);

    printf("Part number: %d\n", part.partNumber);
    printf("Quantity: %d\n", part.quantity);
    printf("Bin number: %d\n", part.binNumber);

    Employee employee;
    char *ptr = employee.name;
    printf("&name: %p\n", ptr);
    ptr += sizeof(employee.name);
    printf("+sizeof(name): %p\n", ptr);
    printf("%p\n", &employee.age );

    return 0;
}
