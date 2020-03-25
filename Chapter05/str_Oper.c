#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char command[16];

    printf("Enter a Command: ");
    scanf("%s", command);
    if (strcmp(command, "Quit") == 0){
        printf("The command was Quit");
    } else {
        printf("The command was not Quit");
    }

    printf("\n");
    char* error = "ERROR: ";
    char* errorMessage = "Not enough memory";

    char* buffer = (char*)malloc(strlen(error) + strlen(errorMessage)+1);
    strcpy(buffer, error);
    strcat(buffer, errorMessage);

    printf("%s\n", buffer);
    printf("%s\n", error);
    printf("%s\n", errorMessage);

    strcat(error, errorMessage);
    printf("%s\n", error);
    printf("%s\n", errorMessage);
    
    free(buffer);

    return 0;
}
