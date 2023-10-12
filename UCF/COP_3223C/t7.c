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

/*
// struct: variables w/o same data type
struct str {};

void func(int a, int b) {};

int main() {
    int a = 10;
    char c = 'G';
    struct str x;

    int* ptr_int = &a;
    char* ptr_char = &c;
    struct str* ptr_strct = &x;
    void (*ptr_func)(int,int) = &func;
    void* ptr_vn = NULL;

    printf("Size of integer pointer\t\t:\t%lu bytes\n", sizeof(ptr_int));
    printf("Size of char pointer\t\t:\t%lu bytes\n", sizeof(ptr_char));
    printf("Size of struct pointer\t\t:\t%lu bytes\n", sizeof(ptr_strct));
    printf("Size of function pointer\t:\t%lu bytes\n", sizeof(ptr_func));
    printf("Size of null pointer\t\t:\t%lu bytes\n", sizeof(ptr_vn));

    return 0;
}
*/

/*
void ptr() {
    int val[3] = {5,10,15};
    int* ptr;

    // can also use ptr=&val[0];
    ptr = val;

    printf("Elements of array: ");
    printf("%d,%d,%d\n", ptr[0],ptr[1],ptr[2]);

    return;
}

int main(){
    ptr();
    return 0;
}
*/

int main() {
    int var = 7;
    //ptr to var
    int* ptr2;
    //double poingter to ptr2
    int** ptr1;

    // storing address of var in ptr2
    ptr2=&var;

    // storying adress of pt2 in ptr1
    ptr1 = &ptr2;

    printf("Value of var %d\n", var);
    printf("Value of var using single pointer = %d\n", *ptr2);
    printf("Value of var using double pointer = %d\n", **ptr1);

    return 0;
}