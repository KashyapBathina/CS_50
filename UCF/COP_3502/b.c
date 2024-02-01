/*
stack:
    allocated space not moving, memory requirements are known at compile time; after compiles, can perfectly predict how much memory will be needed; space used whether input taken
    memory only reserved while function is running; declaring a variable and array is statically located: cannot return array after funct b/c array deleted after funct
    code:int size; scanf(“%d”, &size); nt Arr[size]; size of arr ! known bfore compile: therfor uses a memory pool called stack to allocate this memory, high chance of crash b/c stack
    size limited and can crash if too large; memory auto destroyed/freed after funct

dynamic:
    memory space ! known at compile time; no name of allocated memory, instead pointer to adress; memory ! freed auto; takes space from heap memory, ! stack
    malloc: void *malloc(size_t size) allocates unused space; space contains garbadge vals; returns a pointer to the beginning of the memory allocated; if memory ! found, null returned
        syntax: int *p = (int *) malloc(sizeof(int)); casting null pointer to int pointer with (int *), b/c malloc returns null pointer, that points to that address
    calloc: void *calloc(size_t n, size_t e); allocates array of size n with each element of size e; unlike malloc, each space initialized to 0; int *p = (int *) calloc(1, sizeof(int));
    memory leak: int *p1 = malloc . . .; int *p2 = malloc . . .; for(loop) {scan into &p1[i]} p2 = p1; return p1: memory leak, b/c after p2=p1, both pointers are pointing to p2; allocated
        memory for p2 got disconnected since we don't know adress anymore and still alive, but no longer able to freed and just takes space
    realloc: when allocated size ! enough: wrong approach is to allocate new mem and copy old to new and free old; alternative is realloc: void *realloc(void *ptr, size_t size), where
        ptr is old pointer and size is new size. realloc allocates size amount of bytes and copies the content from the allocated data in ptr and returns void pointer, for example, if
        values is an int pointer and already allocated to numVals size, then realloc with values = (int*)realloc(values,(numVals+EXTRA)*sizeof(int));
    array returning: now can return array with dynamically allocated memory to first address, no longer destroyed after funct, can free from main
    struct: to make dynamiaclly allocated struct point: struct point * temp; temp = (struct point*)malloc(sizeof(struct point)); scanf(“%d %d”, &(temp->x), &(temp->y));
        dynamic struct array: struct point* temp; temp = (struct point*)malloc(size*sizeof(struct point));


*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main () {
    printf("hello\n");
    return 0;
}
