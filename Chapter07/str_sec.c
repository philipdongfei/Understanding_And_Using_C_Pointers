#include <stdio.h>

// format string attacks
// ./str_sec.out "User Supplied Input"
int main(int argc, char** argv){
    printf(argv[1]);

    return 0;
}
