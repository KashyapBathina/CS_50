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
        gets: char name[]; printf("name?"); gets(name); can actually take spaces but bad b/c ! care about size and can take in more than size array, reads until /n
        fgets: can also use fgets w/o file by doing fgets(string,20,stdin);
        alternatives: scanf("%[^\n]s",name); or fgets(name, sizeof(name),  stdin) and remove \n by adding name[strcspn(name, "\n")] = 0;
            problems: when getting string input after another input, like "printf("\nEnter id: "); scanf("%d",&id); printf("\nEnter name: "); scanf("%[^\n]s",name);
            then, issue with getting name b/c after integer, string input skipped: b/c when press enter, scanf("%c",&ch); reads the character entered, but the newline character
            from pressing enter is still in the input buffer; when loop comes again and scanf("%c",&ch); reads that leftover newline character instead of waiting for your input
            solution: 1. adding space before %c scanf: scanf(" %c",&ch); 2. adding before the string input and after other scanf: while ((c = getchar()) != '\n' && c != EOF);
            no need for brackets around while loop b/c calling getchar() func again and again until new line or EOF
    strcpy: char *strcpy(char *dst, char const *src); copies src string to the dst string
    strcat: char *strcat(char *dest, const char *src); takes two strings and stores resultant concatenated string in the first string specified in the argument
    strlen: size_t strlen(const char *str); the length of the passed string
    strstr: char *strstr(const char *haystack, const char *needle); searches for needle string inside haystack string and returns a pointer to the first occurrence in  haystack; or null if !
    strcmp: int strcmp(char const *s1, char const *s2); compares two strings and returns: 0=if both identical; - int if ASCII 1st < than 2nd, + int if 1st > 2nd

struct:
    predefined type with multiple types; syntax: struct employee {char[20] name; double salary; int empID;}; and declaration struct employee officeworker;
    access: regularly=officeworker.empID = 1; with pointer=officeworker->empID=1
        typedef: way to avoid writing struct everytime: typedef struct bookRec{float price;char name[7];}Book; initialization thus: Book temp

file i/o:
    fprintf: fprintf(file_ptr, ctrl_str, other_arguments), where f stands for file
    fscanf: fscanf(file_ptr, ctrl_str, other_arguments), both same as printf and scanf but 1st parameter
    declaration: must write a pointer to file=FILE *fp; must keep txt file in same directory as code
    initialization: fp = fopen("input.txt", "r") opens file and returns pointer to it
        when "r": reading mode, returns null if ! file else returns pointer
        when "w": creates file to write, replaces old if already have same name
        when "a": appends to a file
        when "r+": open file for r/w but file must exist
        when "w+": create file for r/w, if file exists, truncated first before overwriting and old data lost
        when "a+": append or create file for r/w and
    reading input:
        fgetc: ch=fgetc(fp) reads char from current pointer position & advances pointer position so that it now points to the next character
        and returns character that is read which we collect to the variable ch; feof() checks whether EOF;
        fgets: char *fgets(char *str, int n, FILE *stream) reads data one line at a time until null termination; str is pointer to array of char,
        n is max # characters to be read including null, stream is pointer to file; fgets keeps \n in str and you can remove withstr[strcspn(str, "\n")] = 0
    writing output:
        fscanf & fprintf: noting most files have 1 integer at top that reps # cases; same syntax as regular but with 1st paramter as file*
    rewind:
        when doing search operation mult times, have to move to begining: rewind(*pointer to file) is funct that moves file pointer to begining
    fseek:
        int fseek(FILE *pointer, long int offset, int position) used to move cursor/pointer to diff places. offset is # bytes to move from position, can be -
        position from where offset added (SEEK_END-end of file, SEEK_SET-start of ile, SEEK_CUR-file's current position), returns 0 if success else non zero
        ftell: long int ftell(FILE *stream):
        fgetpos: int fgetpos(FILE *stream, fpos_t *pos);
        fsetpos: int fsetpos(FILE *stream, const fpos_t *pos);
        fputs: fputs("This is going to override previous content", fp);
    closing: int fclose(FILE *fp) closes stream, writes any data remaining in disk buffer to file and frees, returns 0 if success;
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main () {
    printf("hello\n");
    return 0;
}
