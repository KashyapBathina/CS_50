/*
stack vs heap:
    stack: allocation happens on contiguous blocks of memory (array); temporary memory allocation since de-allocation after method; data only added and deleted from top
    heap: allocated during the execution and pile of memory space available to programmers to allocate and de-allocate; data stored and removed in any order; variables can be resized

pointers:
    int *p, q, r--p pointer
    int* p, q, r--p pointer
    int *p, *q, *r--all pointers
    * only affects variable directly after it
    *p derefrences p; &x is address x stored; pointer stores memory adress of another variable
    benefits:
        1. allow you to refer to a large data structure in a compact way
        2. allow you to share data efficiently among functions
        3. allow you to dynamically reserve memory
        4. allow you to record relationships between data
    call by value:
    

segmentation fault:
    1. access memory out of bounds (portion memory segmented for it when run program)
    2. dereferencing an unitialized pointer
        int *p; (assiging a value to a memory location not allocated)
        *p = 56; (like trying to store 56 in undefined location)
    3. dereferencing a null pointer
        int *p = NULL; (same as above)
        *p = 56;
    4. memory leaks
        when program allocates memory and doesn't free b/c loses pointer to it, then program uses
        exess space; exhausts system memory as application runs; memory no longer needed not released

    solution: programming defensively
        initialize variables; initialize pointers to null
        int *p = NULL;
        if (p != NULL)
        *p = 56;
        else
        printf("WARNING! It looks like you forgot to give p a valid integer address!\n");

data and memory:
    bit-single 0 or 1,  bytye-8 consec digits (char),  word-2 or 4 bytes (int); memory long array of numbered cells
    integer would be stored over 4 consec bytes, and address storing integer is first memory address var was stored in--sizeof()

*/


#include <stdio.h>
#include <stdlib.h>


int main () {
    printf("hello\n");
    return 0;
}
