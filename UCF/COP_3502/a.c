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
    call by value: when func(int a, int b), function makes new variables x,y and copies a,b, so ! change ab in function
    call by reference: when func(int *a, int *b), function uses address of variables a and b and can access og vars


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

arrays:
    pointer to where items stored in consecutive memory locations; array is equivalent to &arr[0]; arr+ increments to next element and
    jump up/down 4 bytes if int; arr[0] = *arr; arr[n] = (arr+n)
    while double arr[10] allocates 10 locations for doubles, double *p only allocates the memory to store a single location in memory
    multidimensional array:
        int grid[4][2] = 4 rows and 2 collum; int grid[y][x]; array of 4 elements, with each holding 2 elements
        memory: looks like grid[0][0] grid[0][1] grid[1][0] grid[1][1] . . . = { {0,1},{1,2},{3,4},{4,5} }
        access: s[2][1] = *(s[2]+1) = *(*(s+2)+1); also when q[][], then (q+i*col+j) accesses each, where i*col is i'th row and + j moves collum
    2d-arrays as paramters: only first subscript may be left unspecified: void f1(int grid[][10]) okay; void f3(int grid[][]) wrong

strings:
    char array and terminated by '\0' that ! part of string; strlen() returns length of string, part of string.h
    syntax: char s[10] = "cat" or char *s = "cat" (but cannot change content in latter w/o dma)
        scanf: however, issue b/c scanf stop reading input on whitespace, so ! scan fully "kash bath", only scans kash
        gets: char name[]; printf("name?"); gets(name); can actually take spaces but bad b/c ! care about size and can take in more than size array
        alternatives: scanf("%[^\n]s",name); or fgets(name, sizeof(name),  stdin) and remove \n by adding name[strcspn(name, "\n")] = 0;
            problems: when getting string input after another input, like "printf("\nEnter id: "); scanf("%d",&id); printf("\nEnter name: "); scanf("%[^\n]s",name);
            then, issue with getting name b/c after integer, string input skipped: b/c when press enter, scanf("%c",&ch); reads the character entered, but the newline character
            from pressing enter is still in the input buffer; when loop comes again and scanf("%c",&ch); reads that leftover newline character instead of waiting for your input
            solution: 1. adding space before %c scanf: scanf(" %c",&ch); 2. adding before the string input and after other scanf: while ((c = getchar()) != '\n' && c != EOF);
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main () {
    printf("hello\n");
    return 0;
}
