/*
stack:
    allocated space not moving, memory requirements are known at compile time; after compiles, can perfectly predict how much memory will be needed; space used whether input taken
    memory only reserved while function is running; declaring a variable and array is statically located: cannot return array after funct b/c array deleted after funct

x
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main () {
    printf("hello\n");
    return 0;
}
