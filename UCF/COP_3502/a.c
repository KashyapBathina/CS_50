/*
stack vs heap:
    stack: allocation happens on contiguous blocks of memory (array); temporary memory allocation since de-allocation after method; data only added and deleted from top
    heap: allocated during the execution and pile of memory space available to programmers to allocate and de-allocate; data stored and removed in any order; variables can be resized

pointers:
    int *p, q, r--p integer
    int* p, q, r--
    int *p, *q, *r--all

basics:
    bit-single 0 or 1,  bytye-8 consec digits,  word-4 bytes

*/


#include <stdio.h>
#include <stdlib.h>


int main () {
    printf("hello\n");
    return 0;
}
