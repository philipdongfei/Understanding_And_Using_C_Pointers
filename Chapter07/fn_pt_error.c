#include <stdio.h>
#include <string.h>


int (*fptrCompute)(int, int);
int add(int n1, int n2, int n3){
    return n1+n2+n3;
}

int main(){
    fptrCompute = add;
    fptrCompute(2,5);

    char *securityQuestion;
    strcpy(securityQuestion, "Name of your home town");
    return 0;
}
