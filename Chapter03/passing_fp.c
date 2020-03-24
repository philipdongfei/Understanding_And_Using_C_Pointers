#include <stdio.h>
//#include <stdlib.h>

int add(int num1, int num2){
    return num1 + num2;
}

int subtract(int num1, int num2){
    return num1 - num2;
}

typedef int (*fptrOperation)(int, int);
typedef int (*operation)(int, int);
operation operations[128] = {NULL};

int compute(fptrOperation operation, int num1, int num2){
    return operation(num1, num2);
}

fptrOperation select(char opcode){
    switch(opcode){
        case '+': return add;
        case '-': return subtract;
    }
}

int evaluate(char opcode, int num1, int num2){
    fptrOperation operation = select(opcode);
    return operation(num1, num2);
}
void initializeOperationsArray(){
    operations['+'] = add;
    operations['-'] = subtract;
}

int evaluateArray(char opcode, int num1, int num2){
    fptrOperation operation;
    operation = operations[opcode];
    return operation(num1, num2);
}

int main(void){
    printf("%d\n", compute(add, 5, 6));
    printf("%d\n", compute(subtract, 5, 6));
    printf("%d\n", evaluate('+',5,6));
    printf("%d\n", evaluate('-',5,6));
    initializeOperationsArray();
    printf("%d\n", evaluateArray('+',5,6));
    printf("%d\n", evaluateArray('-',5,6));


    return 0;
}
