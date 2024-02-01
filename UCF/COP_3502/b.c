/*
stack:
    allocated space not moving, memory requirements are known at compile time; after compiles, can perfectly predict how much memory will be needed; space used whether input taken
    memory only reserved while function is running; declaring a variable and array is statically located: cannot return array after funct b/c array deleted after funct
    code:int size; scanf(“%d”, &size); nt Arr[size]; size of arr ! known bfore compile: therfor uses a memory pool called stack to allocate this memory, high chance of crash b/c stack
    size limited and can crash if too large; memory auto destroyed/freed after funct

dynamic:
    memory space ! known at compile time; no name of allocated memory, instead pointer to adress; memory ! freed auto; takes space from heap memory, ! stack
    malloc:
        void *malloc(size_t size) allocates unused space; space contains garbadge vals; returns a pointer to the beginning of the memory allocated; if memory ! found, null returned
        syntax: int *p = (int *) malloc(sizeof(int)); casting null pointer to int pointer that points to that address
    calloc:
        


*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main () {
    printf("hello\n");
    return 0;
}
