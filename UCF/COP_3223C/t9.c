#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

/*------------module 8------------------------------------------------------------------------------------------------------------*/

/*
    Struct: array that allows you to store related variables of the same type in same struct, usually put a declaration after #defines
        Gen struct: struct name {
                dataType var1;
                dataType var2;
            }
*/

struct block {
    int num;
    char letter;
    char color[15];
}

void setup(struct block *);

int main() {

}
