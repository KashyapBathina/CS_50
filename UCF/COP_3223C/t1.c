#include <stdio.h>
/*This line is a directive to include a standard C header file.
There are some pre-written functions in C that we commonly
use. All the functions that control standard input and output
are included in the file stdio.h.
*/

// mkdir: makes folder
// to make c file: "code file.c"
// to compile: make file
// to run ./file

/*
1) Central Processing Unit: The "brains" of the computer that
actually execute all the instructions the computer runs.
2) Main Memory: All running programs and data they use
must be stored here. This is only active when the computer is
physically on.
3) External Memory: This is more permanent memory, such as
a hard-drive, floppy disk, CD, etc. In order for any programs
stored on these medium to run, they have to be transferred into
main memory.
4) Operating System: Provides an interface between the
machine and the user and allocates the computer's resources.
5) Compiler: A "translator" which converts a program written
in a high-level computer language into machine language, a set
of 0s and 1s understood by the computer.
6) Application Programs: Programs intended to be used by
end-users on a computer.



Programming Rules
    use a header comment to list author, data, purpose
    use comments on every major part
    make variable names meaningful
    use uppercase for constant, i.e. #define

Rules for identifiers i.e. variables
    must be comprissed of letters, didgits and or underscores
    a letter or _ has to be the first characters
    in some instances, casing matters when you name variables
    cannot be a key word like const, define, if, else
    when naming a function, make the name meaningful, printf()

Order of precedence
    *, /, (), and % take precedence, or go left to right if precedence equal

Assignment operators
    increment x=x+1 or x+=1 or x++
    decrement x=x-1 or x-=1 or x--
    multip x*=2
    divid x/=2
        x=x/(p+q); x/=(p+q)

*/

// constant, data type, name, value
const int YARDS_IN_MILE = 1760;

// another way to define constant
#define FEET_IN_YARD 3

/*This line signifies the beginning of the function main. All code
in C resides in functions.A program
may be made up on many functions, but the computer only
DIRECTLY executes main. In order for the computer to
execute any other function, main must give instructions to call
those functions
int=return type, main=function name, void=paramter*/
int main(void) {
    // in order to store data in a C computer program, you must store it one ofthe primitive data types
    // declaring variable
    // initializing would be to say int num=0, where you store the number into a variable
    int feet_in_mile, num_miles;
    feet_in_mile = YARDS_IN_MILE * FEET_IN_YARD;

    // printf is another function, \n is an escpae sequence
    printf("How many miles did you run?\n");
    /* when you read in information from the keyboard, you MUST read it into a variable, to do this
    must specify the type of information being read in, and the name of the variable you want the
    information read into*/
    // & means address of, says to store whatever the user enters into the memory address where num_miles is stored
    /* Pointer operator (*) is used whenever you want to point to a variable. Address operator (&) is
    used whenever you point to the memory address of a variable*/
    scanf("%d", &num_miles);

    // /: escape sequence, must do // to get actual / in output
    // to print a value, must specify format, %d is for int, %f for float, and %lf for double
    printf("You ran a total of %d feet. \n", feet_in_mile*num_miles);

    // for return type
    return 0;
}