#include <stdio.h>
#include <string.h>

int main(){
    const char *tabHeader = "Sound";
    *tabHeader = 'L'; //error
    printf("%s\n", tabHeader);
    char* prefix = '+'; //error

    return 0;
}
