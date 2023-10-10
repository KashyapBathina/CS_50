#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*------------module 7------------------------------------------------------------------------------------------------------------*/

/*
2-d Arrays:
    Gen struct: type var[y][x]; where y is row and x is column
                var[0][0] = 2;

Pointers: store memory addresses of other variables
    Gen struct: datatype *ptr; where * is dereferencing operator, dereference the pointer (or, get the referent of the pointer) to get the object pointed-to; used to access or manipulate data contained in memory location pointed to by a pointer
                int * ptr;
                int var = 10;
                ptr = &var;
    Call by value: copy contents of one memory adress and place in another
    Call by reference: pointer to reference or point to memory address that has data we need
    Types of pointers:
        1. integer pointer = int *ptr;
        2. array poineter = char *ptr = &array_name;
        3. function pointer = int (*ptr)(int, char);
        4. double pointer = *pointer_name; **pointer_name;
        5. null pointer = pointer_name = null
        6. void pointer = void* ptr;
        7. constant pointer = int* const ptr;
*/

/*
int main() {
    int grid[11][11];
    int i, j;

    for(i=0;i<11;i++) {
        grid[i][0] = 1;
        grid[i][1] = 1;
    }

    for(i=2;i<11;i++) {
        for(j=1;j<i;j++) {
            grid[i][j]=grid[i-1][j-1] + grid[i-1][j];
        }
    }

    for(i=0;i<=11;i++) {
        for(j=0;j<i;j++) {
            printf("%4d", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
void pointer() {
    int var=10;
    // dec pointer variables
    int* ptr;
    ptr = &var;

    printf("Value at ptr = %p\n", ptr);
    printf("Value at ptr = %d\n", var);
    printf("Value at ptr = %d\n", *ptr);

}

int main() {
    pointer();
    return 0;
}
*/

// struct: variables w/o same data type
struct str {

}

void funct(int a, int b) {};

int main() {
    int a = 10;
    char c = 'G'
    struct str x;

    int* ptr_int = &a;
    char* ptr_char = &c;
    struct str* = ptr_strct = &x;
    void (*ptr_func)(iny,int) = &func;
    void* ptr_vn = NULL;

    printf("Size of integer pointer\t\t:\t&d bytes\n", sizeof(ptr_int));
    printf("Size of char pointer\t\t:\t&d bytes\n", sizeof(ptr_char));
    printf("Size of struct pointer\t\t:\t&d bytes\n", sizeof(ptr_strct));
    printf("Size of function pointer\t\t:\t&d bytes\n", sizeof(ptr_func));
    printf("Size of null pointer\t\t:\t&d bytes\n", sizeof(ptr_vn));
}