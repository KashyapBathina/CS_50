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

Functions: sub program within main that carries out a task
    Gen struct: return_type name(parameters) {}
    Requirements:
        1. Give funct what it needs to finihsh the task--pre test, pre-condition, parameter
        2. Use info so function retrurns properly--post tes, post condition, ouput
    Types of parameters:
        1. Formal paramaeters--listed in definition, local variables
        2. Actual parramaters--values/expressions that are calling/invoking the function in main so it passed data to function to be called
    Void: i.e. void funct(int grade), void is return type that returns nothing
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

/*
int main() {
    int var = 7;
    //ptr to var
    int* ptr2;
    //double poingter to ptr2
    int** ptr1;

    // storing address of var in ptr2
    ptr2=&var;

    // storying adress of ptr2 in ptr1
    ptr1 = &ptr2;

    printf("Value of var %d\n", var);
    printf("Value of var using single pointer = %d\n", *ptr2);
    printf("Value of var using double pointer = %d\n", **ptr1);

    return 0;
}
*/

/*
//declare function
int comp_grade(char grade);
char read_char();

int main() {
    int total_points = 0, total_hours=0, c_hours;
    char ans = 'Y';
    char my_grade;

    while (ans=='Y' || ans=='y') {
        printf("Letter grade: ");
        my_grade = read_char();
        printf("Enter # of credit hours: ");
        scanf("%d", &c_hours);

        total_hours += c_hours*comp_grade(my_grade);
        total_hours += c_hours;

        printf("Do you have any more grades: ");
        ans = read_char();
    }

    printf("Your GPA is %.2lf\n", (double)total_points/total_hours);
}

int comp_grade(char grade) {
    if (grade=='A') return 4;
    else if (grade=='B') return 3;
    else if (grade=='C') return 2;
    else if (grade=='D') return 1;
    return 0;
}

char read_char() {
    char ans;
    scanf("%c", &ans);

    while (ans==' ' || ans == '\n' || ans == '\t') {
        scanf("%c", &ans);
    }

    return ans;
}
*/

int main() {
    int n1, n2, sum;
    scanf("%d, %d", &n1, &n2);

    // funct call or invoke
    sum = addNum(n1,n2);
    prinft("Sum=%d", sum);
}

int addNum(int a, int b) {
    int result = a + b;
    return result;
}

