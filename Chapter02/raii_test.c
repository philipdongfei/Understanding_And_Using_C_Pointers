#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "raii_macro.h"
/*
#define RAII_VARIABLE(vartype, varname,initval,dtor)\
    void _dtor_ ## varname (vartype * v) { dtor(*v); }\
    vartype varname __attribute__((cleanup(_dtor_ ## varname))) = (initval)
*/
void raiiExample(){
    RAII_VARIABLE(char*, name, (char*)malloc(32), free);
    strcpy(name, "RAII Example");
    printf("%s\n", name);
}

int main(void)
{
    raiiExample();

    return 0;
}
