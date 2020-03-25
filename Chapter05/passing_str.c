#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//size_t stringLength(char* string){ //(char string[])
size_t stringLength(const char* string) {
    //*string = A; //error
    size_t length = 0;
    while (*(string++)){
        length++;
    }
    return length;
}

char* format(char *buffer, size_t size,
        const char* name, size_t quantity, size_t weight){
    char *formatString = "Item: %s  Quantity: %u  Weight: %u";
    size_t formatStringLength = strlen(formatString)-6;
    size_t nameLength = strlen(name);
    size_t length = formatStringLength + nameLength + 10 + 10 + 1;
    if (buffer == NULL){
        buffer = (char*)malloc(length);
        size = length;
    }
    snprintf(buffer, size, "Item: %s  Quantity: %u  Weight: %u",
            name, quantity, weight);
    return buffer;
}

int main(){
    char simpleArray[] = "simple string";
    char *simplePtr = (char*)malloc(strlen("simple string")+1);
    strcpy(simplePtr, "simple string");
    printf("%d\n", stringLength(simplePtr));

    printf("%d\n", stringLength(simpleArray));
    printf("%d\n", stringLength(&simpleArray));
    printf("%d\n", stringLength(&simpleArray[0]));

    free(simplePtr);

    char *buffer = NULL;
    printf("%s\n", format(buffer, sizeof(buffer), "Axle", 25, 45));
    free(buffer);
    return 0;
}
